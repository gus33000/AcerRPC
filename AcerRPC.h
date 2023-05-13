#pragma once
#include <collection.h>
#include <windows.h>
#include "AcerRPCRT.h"

namespace AcerRPCComponent
{
    public ref class AcerRPC sealed
    {
    public:
        AcerRPC();
	void CopyFile(Platform::String^ src,Platform::String^ dest);
    };
}
