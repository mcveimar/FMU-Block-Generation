#ifndef RTW_HEADER_DC_core_control_h_
#define RTW_HEADER_DC_core_control_h_
#ifndef DC_core_control_COMMON_INCLUDES_
#define DC_core_control_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "DC_core_control_types.h"
#include "model_reference_types.h"
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include "rt_nonfinite.h"
#include <stddef.h>
typedef struct { real32_T mhpfs1adwm [ 2 ] ; real32_T ec20qzqm0n [ 2 ] ;
real32_T elu01qxjtd ; real32_T hwvi5omlg3 ; real32_T h5z0gin33a ; boolean_T
h3z3xa1nli ; boolean_T jhoo1p3ue5 ; boolean_T edkuo3j5s3 ; boolean_T
h5emfzxn1o ; } aijckfrqxd ; typedef struct { real32_T d4cbfpdwp1 [ 2 ] ;
real32_T j2kv1drnk1 ; real32_T bsxapokqfo ; real32_T nfncqiie2c ; real32_T
dgtugyve3p ; int8_T f1q5n1mrk1 ; int8_T nzfipppoom ; int8_T pexvtvdckx ;
uint8_T pqmzu4crz5 ; uint8_T ey2omfatnv ; } eucybaphjh ; struct nr0h43pjsz4_
{ real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5
; real32_T P_6 ; real32_T P_7 ; real32_T P_8 ; real32_T P_9 ; real32_T P_10 ;
real32_T P_11 ; real32_T P_12 ; real32_T P_13 ; real32_T P_14 ; real32_T P_15
; real32_T P_16 [ 3 ] ; real32_T P_17 [ 3 ] ; real32_T P_18 ; real32_T P_19 ;
real32_T P_20 ; real32_T P_21 ; real32_T P_22 ; real32_T P_23 ; real32_T P_24
; real32_T P_25 ; real32_T P_26 ; real32_T P_27 ; real32_T P_28 ; real32_T
P_29 [ 4 ] ; real32_T P_30 [ 4 ] ; real32_T P_31 ; real32_T P_32 ; real32_T
P_33 ; int8_T P_34 ; int8_T P_35 ; int8_T P_36 ; int8_T P_37 ; } ; struct
nhxng0wf3u { struct SimStruct_tag * _mdlRefSfcnS ; const rtTimingBridge *
timingBridge ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress [
4 ] ; int32_T * vardimsAddress [ 4 ] ; RTWLoggingFcnPtr loggingPtrs [ 4 ] ;
sysRanDType * systemRan [ 2 ] ; int_T systemTid [ 2 ] ; } DataMapInfo ;
struct { int_T mdlref_GlobalTID [ 2 ] ; } Timing ; } ; typedef struct {
aijckfrqxd rtb ; eucybaphjh rtdw ; b1rrm1enxt rtm ; } go5yews2a2e ; extern
void fjqwd4jqxv ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T
mdlref_TID1 , b1rrm1enxt * const di4adofmaf , aijckfrqxd * localB ,
eucybaphjh * localDW , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_DC_core_control_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_DC_core_control_GetDWork (
const go5yews2a2e * mdlrefDW ) ; extern void mr_DC_core_control_SetDWork (
go5yews2a2e * mdlrefDW , const mxArray * ssDW ) ; extern void
mr_DC_core_control_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_DC_core_control_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * DC_core_control_GetCAPIStaticMap ( void ) ;
extern void gjjqaawgpo ( b1rrm1enxt * const di4adofmaf , eucybaphjh * localDW
) ; extern void kzeaax43ft ( b1rrm1enxt * const di4adofmaf , eucybaphjh *
localDW ) ; extern void kbadssudxg ( aijckfrqxd * localB ) ; extern void
jek00gbgan ( const boolean_T * czhxjno0eu , aijckfrqxd * localB , eucybaphjh
* localDW ) ; extern void DC_core_control ( const real32_T * kopfzko3w0 ,
const real32_T * isq2f2q3cs , const boolean_T * czhxjno0eu , real32_T *
hhuwn1vhss , real32_T * ejb1rkl1c2 , real32_T * j05aud4mg5 , aijckfrqxd *
localB , eucybaphjh * localDW ) ; extern void DC_core_controlTID1 (
aijckfrqxd * localB ) ; extern void ksotd3pkgl ( b1rrm1enxt * const
di4adofmaf ) ;
#endif
