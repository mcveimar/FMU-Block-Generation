#ifndef RTW_HEADER_PF_core_control_h_
#define RTW_HEADER_PF_core_control_h_
#ifndef PF_core_control_COMMON_INCLUDES_
#define PF_core_control_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "PF_core_control_types.h"
#include "model_reference_types.h"
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include "rt_nonfinite.h"
#include <stddef.h>
typedef struct { real32_T eoxpzfpzyo [ 2 ] ; real32_T grjjr2ea1q [ 3 ] ;
boolean_T fcrthjrsxb ; boolean_T chaork5i03 ; } dazqhehljy ; typedef struct {
real32_T o01vp0xlcb [ 3 ] ; int8_T a4zlcs4kyg ; uint8_T momzo3ld3q ; }
kffoxsxgi3 ; struct ejynlan1wgy_ { real_T P_0 ; real_T P_1 ; real_T P_2 ;
real32_T P_3 ; real32_T P_4 ; real32_T P_5 ; real32_T P_6 ; real32_T P_7 ;
real32_T P_8 ; real32_T P_9 ; real32_T P_10 ; real32_T P_11 [ 3 ] ; } ;
struct hmzuiyade0 { struct SimStruct_tag * _mdlRefSfcnS ; const
rtTimingBridge * timingBridge ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress [
1 ] ; int32_T * vardimsAddress [ 1 ] ; RTWLoggingFcnPtr loggingPtrs [ 1 ] ;
sysRanDType * systemRan [ 3 ] ; int_T systemTid [ 3 ] ; } DataMapInfo ;
struct { int_T mdlref_GlobalTID [ 2 ] ; } Timing ; } ; typedef struct {
dazqhehljy rtb ; kffoxsxgi3 rtdw ; drx5qpwp11 rtm ; } ckurqr25mlp ; extern
void f0mfj1yok3 ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T
mdlref_TID1 , drx5qpwp11 * const ihatqynl0w , dazqhehljy * localB ,
kffoxsxgi3 * localDW , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_PF_core_control_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_PF_core_control_GetDWork (
const ckurqr25mlp * mdlrefDW ) ; extern void mr_PF_core_control_SetDWork (
ckurqr25mlp * mdlrefDW , const mxArray * ssDW ) ; extern void
mr_PF_core_control_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_PF_core_control_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * PF_core_control_GetCAPIStaticMap ( void ) ;
extern void e5ef2ozw0e ( drx5qpwp11 * const ihatqynl0w , kffoxsxgi3 * localDW
) ; extern void k2dpjuoiat ( drx5qpwp11 * const ihatqynl0w , kffoxsxgi3 *
localDW ) ; extern void icujx3cwz1 ( dazqhehljy * localB ) ; extern void
a0j5ozku0y ( dazqhehljy * localB , kffoxsxgi3 * localDW ) ; extern void
PF_core_control ( const real32_T hglwwq1tiw [ 3 ] , const real32_T c4xfikzmdi
[ 3 ] , const boolean_T * nt5p0orntv , real32_T moqnqvlzwm [ 3 ] , real32_T
l5giyjufbt [ 3 ] , dazqhehljy * localB , kffoxsxgi3 * localDW ) ; extern void
PF_core_controlTID1 ( dazqhehljy * localB ) ; extern void ci4xki353t (
drx5qpwp11 * const ihatqynl0w ) ;
#endif
