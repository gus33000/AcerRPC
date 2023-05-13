#include "pch.h"
#include "AcerRPC.h"

extern "C" {
HMODULE WINAPI LoadLibraryW(
  LPWSTR lpModuleName
);

RPC_STATUS RpcBindingCreateW(
  RPC_BINDING_HANDLE_TEMPLATE *Template,
  RPC_BINDING_HANDLE_SECURITY *Security,
  void  *Options,
  RPC_BINDING_HANDLE          *Binding
);
}

using namespace AcerRPCComponent;
using namespace Platform;

AcerRPC::AcerRPC()
{
	void (*QueryTransientObjectSecurityDescriptor) (DWORD,DWORD, unsigned char*);
	*(FARPROC*)&QueryTransientObjectSecurityDescriptor = GetProcAddress(LoadLibraryW(L"SECRUNTIME"),"QueryTransientObjectSecurityDescriptor");
	if (QueryTransientObjectSecurityDescriptor == NULL) {
		DWORD Error = GetLastError();
		throw ref new Platform::COMException(HRESULT_FROM_WIN32(Error));
	}
	void* (*NdrClientCall2) (PMIDL_STUB_DESC,PFORMAT_STRING,...);
	*(FARPROC*)&NdrClientCall2 = GetProcAddress(LoadLibraryW(L"RPCRT4"),"NdrClientCall2");
	if (NdrClientCall2 == NULL) {
		DWORD Error = GetLastError();
		throw ref new Platform::COMException(HRESULT_FROM_WIN32(Error));
	}
	// Query security descriptor
	unsigned int *secdpointer = NULL;
	QueryTransientObjectSecurityDescriptor(9, (DWORD)inter, (unsigned char*) &secdpointer);

	// Add security descriptor
	rsq.ServerSecurityDescriptor = secdpointer;
	
	// Create RPC binding
	RPC_STATUS rstatus = 0;
	rstatus = RpcBindingCreateW(&bht, &bhs, NULL, &rpc_bh);
	rstatus = RpcBindingBind(NULL, rpc_bh, hello_v1_0_c_ifspec);
}


void AcerRPC::CopyFile(Platform::String^ src,Platform::String^ dest) {
	// call into RPC server
	NdrClientCall2(&hello_StubDesc, &hello__MIDL_ProcFormatString.Format[hello_FormatStringOffsetTable[3]], rpc_bh, src->Data(),dest->Data(),1);
}