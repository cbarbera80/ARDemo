#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void Unity.Barracuda.iOSBLAS::iossgemm(System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void iOSBLAS_iossgemm_m36A3FF15A6E08E4B6597BCBFFE0FC3065C4BBB82 (void);
// 0x00000002 System.Boolean Unity.Barracuda.iOSBLAS::IsNative()
extern void iOSBLAS_IsNative_mDF27F867CCDD27867623EC1F31A9F44C76D362DA (void);
// 0x00000003 System.Boolean Unity.Barracuda.iOSBLAS::IsCurrentPlatformSupported()
extern void iOSBLAS_IsCurrentPlatformSupported_m81D753CFF8A6430CB4A3B712A3AF58CEF84AB1B6 (void);
// 0x00000004 System.Void Unity.Barracuda.iOSBLAS::SGEMM(System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void iOSBLAS_SGEMM_m72EA5113105105F918F8D92B563A4B5B12D0ECD7 (void);
// 0x00000005 Unity.Jobs.JobHandle Unity.Barracuda.iOSBLAS::ScheduleSGEMM(Unity.Jobs.JobHandle,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Single*,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
extern void iOSBLAS_ScheduleSGEMM_m8B141DABB00A042E486E3CCFCA8827446C8B7E2C (void);
// 0x00000006 System.Void Unity.Barracuda.iOSBLAS::.ctor()
extern void iOSBLAS__ctor_m4F0BAADA2447FB8F1C33DAC68AB6A78B9190D1AA (void);
// 0x00000007 System.Void Unity.Barracuda.iOSBLAS/SGEMMJob::Execute()
extern void SGEMMJob_Execute_m657BD67029964DB4B8253EB2A9F5A0C475D7EC36 (void);
static Il2CppMethodPointer s_methodPointers[7] = 
{
	iOSBLAS_iossgemm_m36A3FF15A6E08E4B6597BCBFFE0FC3065C4BBB82,
	iOSBLAS_IsNative_mDF27F867CCDD27867623EC1F31A9F44C76D362DA,
	iOSBLAS_IsCurrentPlatformSupported_m81D753CFF8A6430CB4A3B712A3AF58CEF84AB1B6,
	iOSBLAS_SGEMM_m72EA5113105105F918F8D92B563A4B5B12D0ECD7,
	iOSBLAS_ScheduleSGEMM_m8B141DABB00A042E486E3CCFCA8827446C8B7E2C,
	iOSBLAS__ctor_m4F0BAADA2447FB8F1C33DAC68AB6A78B9190D1AA,
	SGEMMJob_Execute_m657BD67029964DB4B8253EB2A9F5A0C475D7EC36,
};
extern void SGEMMJob_Execute_m657BD67029964DB4B8253EB2A9F5A0C475D7EC36_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[1] = 
{
	{ 0x06000007, SGEMMJob_Execute_m657BD67029964DB4B8253EB2A9F5A0C475D7EC36_AdjustorThunk },
};
static const int32_t s_InvokerIndices[7] = 
{
	6703,
	6302,
	6302,
	5,
	4,
	6532,
	6532,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Barracuda_iOSBLAS_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Barracuda_iOSBLAS_CodeGenModule = 
{
	"Unity.Barracuda.iOSBLAS.dll",
	7,
	s_methodPointers,
	1,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
