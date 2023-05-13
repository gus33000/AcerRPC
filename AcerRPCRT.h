
#ifndef _HELLOH_
#define _HELLOH_



#include "rpc.h"
#include "rpcndr.h"
#include "stdlib.h"
#include "string.h"




#ifndef __hello_h__
#define __hello_h__










#ifdef __cplusplus
extern "C"{
#endif 




#ifndef __hello_INTERFACE_DEFINED__
#define __hello_INTERFACE_DEFINED__

	void __RPC_FAR * __RPC_USER midl_user_allocate(size_t cBytes);
	void __RPC_USER midl_user_free(void __RPC_FAR * p);


	extern handle_t hello_IfHandle;
	extern RPC_IF_HANDLE hello_v1_0_c_ifspec;
	extern RPC_IF_HANDLE hello_v1_0_s_ifspec;
#endif



#define TYPE_FORMAT_STRING_SIZE   162                                 
#define PROC_FORMAT_STRING_SIZE   8474                                
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

	typedef struct _hello_MIDL_TYPE_FORMAT_STRING
	{
		short          Pad;
		unsigned char  Format[TYPE_FORMAT_STRING_SIZE];
	} hello_MIDL_TYPE_FORMAT_STRING;

	typedef struct _hello_MIDL_PROC_FORMAT_STRING
	{
		short          Pad;
		unsigned char  Format[PROC_FORMAT_STRING_SIZE];
	} hello_MIDL_PROC_FORMAT_STRING;

	typedef struct _hello_MIDL_EXPR_FORMAT_STRING
	{
		long          Pad;
		unsigned char  Format[EXPR_FORMAT_STRING_SIZE];
	} hello_MIDL_EXPR_FORMAT_STRING;


	static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax =
	{ { 0x8A885D04, 0x1CEB, 0x11C9, { 0x9F, 0xE8, 0x08, 0x00, 0x2B, 0x10, 0x48, 0x60 } }, { 2, 0 } };


	extern const hello_MIDL_TYPE_FORMAT_STRING hello__MIDL_TypeFormatString;
	extern const hello_MIDL_PROC_FORMAT_STRING hello__MIDL_ProcFormatString;
	extern const hello_MIDL_EXPR_FORMAT_STRING hello__MIDL_ExprFormatString;

#define GENERIC_BINDING_TABLE_SIZE   0            


	handle_t hello_IfHandle;


	static const RPC_CLIENT_INTERFACE hello___RpcClientInterface =
	{
		sizeof(RPC_CLIENT_INTERFACE),
		{ { 0xbae040a6, 0x2c40, 0x4dc5, { 0xa4, 0xbd, 0x4a, 0x81, 0x29, 0xd4, 0xde, 0x42 } }, { 0, 0 } },
		{ { 0x8A885D04, 0x1CEB, 0x11C9, { 0x9F, 0xE8, 0x08, 0x00, 0x2B, 0x10, 0x48, 0x60 } }, { 2, 0 } },
		0,
		0,
		0,
		0,
		0,
		0x00000000
	};
	RPC_IF_HANDLE hello_v1_0_c_ifspec = (RPC_IF_HANDLE) & hello___RpcClientInterface;

	extern const MIDL_STUB_DESC hello_StubDesc;

	static RPC_BINDING_HANDLE hello__MIDL_AutoBindHandle;

	static const hello_MIDL_PROC_FORMAT_STRING hello__MIDL_ProcFormatString =
	{
		0,
		{
			// first function
			0, 0x48, 0, 0, 0, 0, 0, 0, 0xC, 0, 0x32, 0, 0, 0,
			0, 0, 8, 0, 0x45, 2, 0xE, 3, 1, 0, 0, 0, 0, 0, 2, 0,
			2, 0x80, 0x81, 0, 0x13, 1, 4, 0, 6, 0, 0x70, 0, 8,
			0, 8, 0,
			// second function
			0, 0x48, 0, 0, 0, 0, 1, 0, 0x18, 0, 0x32,
			0, 0, 0, 0, 0, 8, 0, 0x47, 5, 0x10, 3, 1, 0, 0, 0,
			0, 0, 5, 0, 5, 0x80, 0x81, 0x82, 0x83, 0xFC, 0xB, 1,
			4, 0, 0x10, 0, 0xB, 1, 8, 0, 0x10, 0, 0xB, 1, 0xC,
			0, 0x10, 0, 0x13, 1, 0x10, 0, 0x16, 0, 0x70, 0, 0x14,
			0, 8, 0,
			// third function
			0, 0x48, 0, 0, 0, 0, 2, 0, 0x14, 0, 0x32,
			0, 0, 0, 5, 0, 8, 0, 0x46, 4, 0x10, 1, 0, 0, 0, 0,
			0, 0, 4, 0, 4, 0x80, 0x81, 0x82, 0x83, 0, 0xB, 1, 4,
			0, 0x10, 0, 0xB, 1, 8, 0, 0x10, 0, 0x48, 0, 0xC, 0,
			3, 0, 0x70, 0, 0x10, 0, 8, 0, 0, 0x48, 0, 0, 0, 0,
			3, 0, 8, 0, 0x32, 0, 0, 0, 0, 0, 8, 0, 0x44, 1, 0xC,
			1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0x80, 0x70, 0, 4, 0,
			8, 0, 0, 0, 0, 0
		}
	};

	static const hello_MIDL_TYPE_FORMAT_STRING hello__MIDL_TypeFormatString =
	{
		0,
		{

			0, 0, 0x11, 0, 2, 0, 0x25, 0x44, 0x40, 0, 0x80, 0,
			1, 0, 0x11, 8, 0x25, 0x5C, 0x11, 0, 2, 0, 0x25, 0x44,
			0x40, 0, 0x80, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
			0,

		}
	};

	static const unsigned short hello_FormatStringOffsetTable [] =
	{
		0,
		46,
		86,
	};




	static const MIDL_STUB_DESC hello_StubDesc =
	{
		(void *) & hello___RpcClientInterface,
		MIDL_user_allocate,
		MIDL_user_free,
		&hello_IfHandle,
		0,
		0,
		0,
		0,
		hello__MIDL_TypeFormatString.Format,
		1, /* -error bounds_check flag */
		0x60001, /* Ndr library version */
		0,
		0x8000253, /* MIDL Version 8.0.595 */
		0,
		0,
		0,  /* notify & notify_flag routine table */
		0x1, /* MIDL flag */
		0, /* cs routines */
		0,   /* proxy/server info */
		0
	};


	void __RPC_FAR * __RPC_USER midl_user_allocate(size_t cBytes)
	{
		return((void __RPC_FAR *) malloc(cBytes));
	}

	void __RPC_USER midl_user_free(void __RPC_FAR * p)
	{
		free(p);
	}

	


	unsigned char security_descriptor [] = { 0x01, 0x00, 0x04, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x02, 0x00, 0x48, 0x01, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x10, 0x01, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x03, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x52, 0x77, 0xe4, 0xe9, 0x43, 0x3b, 0xdb, 0xac, 0x8c, 0x30, 0x3e, 0x83, 0xee, 0x0c, 0xad, 0x9d, 0xf4, 0x16, 0x21, 0xe5, 0x0a, 0xbd, 0xa8, 0x7f };

	
	


	typedef struct _RPC_BINDING_HANDLE_TEMPLATE {
		unsigned long  Version;
		unsigned long  Flags;
		unsigned long  ProtocolSequence;
		unsigned short *NetworkAddress;
		unsigned short *StringEndpoint;
		union {
			unsigned short *Reserved;
		} u1;
		UUID           ObjectUuid;
	}  RPC_BINDING_HANDLE_TEMPLATE;




	RPC_BINDING_HANDLE rpc_bh = { 0 };

	RPC_BINDING_HANDLE_TEMPLATE bht = { 1, 0, 3, 0, 0, 0, 0 };

	typedef struct {
		unsigned long           Version;
		unsigned short          *ServerPrincName;
		unsigned long           AuthnLevel;
		unsigned long           AuthnSvc;
		SEC_WINNT_AUTH_IDENTITY *AuthIdentity;
		RPC_SECURITY_QOS        *SecurityQos;
	}  RPC_BINDING_HANDLE_SECURITY;


	typedef struct _RPC_SECURITY_QOS_V5 {
  unsigned long Version;
  unsigned long Capabilities;
  unsigned long IdentityTracking;
  unsigned long ImpersonationType;
  unsigned long AdditionalSecurityInfoType;
  union {
    void *HttpCredentials;
  } u;
  void          *Sid;
  unsigned int  EffectiveOnly;
  void          *ServerSecurityDescriptor;
} RPC_SECURITY_QOS_V5, *PRPC_SECURITY_QOS_V5;

	RPC_SECURITY_QOS_V5 rsq = { 5, 0, 0, 2, 0, 0, 0, 0, NULL };

	RPC_BINDING_HANDLE_SECURITY bhs = { 1, 0, 0x6, 0xA, NULL, (RPC_SECURITY_QOS*) &rsq };

	
	
	
	
	

	wchar_t *inter = L"InteropRPC\\Server";

	typedef struct _STARTUPINFO {
		DWORD  cb;
		LPTSTR lpReserved;
		LPTSTR lpDesktop;
		LPTSTR lpTitle;
		DWORD  dwX;
		DWORD  dwY;
		DWORD  dwXSize;
		DWORD  dwYSize;
		DWORD  dwXCountChars;
		DWORD  dwYCountChars;
		DWORD  dwFillAttribute;
		DWORD  dwFlags;
		WORD   wShowWindow;
		WORD   cbReserved2;
		LPBYTE lpReserved2;
		HANDLE hStdInput;
		HANDLE hStdOutput;
		HANDLE hStdError;
	} STARTUPINFO, *LPSTARTUPINFO;

	typedef struct _PROCESS_INFORMATION {
		HANDLE hProcess;
		HANDLE hThread;
		DWORD  dwProcessId;
		DWORD  dwThreadId;
	} PROCESS_INFORMATION, *LPPROCESS_INFORMATION;

	
	

	typedef enum _RPC_ASYNC_EVENT {
		RpcCallComplete,
		RpcSendComplete,
		RpcReceiveComplete,
		RpcClientDisconnect,
		RpcClientCancel
	} RPC_ASYNC_EVENT;


	typedef struct _RPC_ASYNC_STATE {
		unsigned int                Size;
		unsigned long               Signature;
		long                        Lock;
		unsigned long               Flags;
		void                        *StubInfo;
		void                        *UserInfo;
		void                        *RuntimeInfo;
		RPC_ASYNC_EVENT             Event;
		void      *NotificationType;
		void *u;
		LONG_PTR                    Reserved[4];
	} RPC_ASYNC_STATE, *PRPC_ASYNC_STATE;


	RPC_STATUS RpcBindingBind(
		_In_opt_  PRPC_ASYNC_STATE pAsync,
		_In_      RPC_BINDING_HANDLE Binding,
		_In_      RPC_IF_HANDLE IfSpec
		);

	

#ifdef __cplusplus
}
#endif

#endif

#endif