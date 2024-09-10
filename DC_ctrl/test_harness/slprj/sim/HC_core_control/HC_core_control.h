#ifndef RTW_HEADER_HC_core_control_h_
#define RTW_HEADER_HC_core_control_h_
#ifndef HC_core_control_COMMON_INCLUDES_
#define HC_core_control_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "HC_core_control_types.h"
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include "rt_nonfinite.h"
#include <stddef.h>
typedef struct { real32_T d45rqko5zg [ 3 ] ; real32_T mn4nnr0tmu [ 3 ] ;
boolean_T amiwrqoeze ; boolean_T dqqu3krthi ; } kqhylkjjim ; typedef struct {
real32_T bzjqj2nvte [ 3 ] ; real32_T adrcnrssnn [ 3 ] ; real32_T o43rwndbkq [
3 ] ; real32_T nn51fvneph [ 3 ] ; int8_T fbk0ihg1e4 ; int8_T cxbmtrukhs ; }
nmkt2swflu ; struct ddulwrzxzn3_ { real32_T P_1 ; real32_T P_2 ; real32_T P_3
; real32_T P_4 ; real32_T P_5 ; real32_T P_6 ; real32_T P_7 ; real32_T P_8 ;
real_T P_9 ; real_T P_10 ; real_T P_11 ; real_T P_12 ; real32_T P_13 ;
real32_T P_14 ; real32_T P_15 ; real32_T P_16 ; real32_T P_17 ; real32_T P_18
; real32_T P_19 ; real32_T P_20 ; real32_T P_21 ; real32_T P_22 ; real32_T
P_23 ; boolean_T P_24 ; boolean_T P_25 ; int8_T P_26 ; int8_T P_27 ; int8_T
P_28 ; int8_T P_29 ; int8_T P_30 ; int8_T P_31 ; int8_T P_32 ; int8_T P_33 ;
} ; struct f25vngg2z0 { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 2 ] ; int32_T * vardimsAddress [ 2
] ; RTWLoggingFcnPtr loggingPtrs [ 2 ] ; sysRanDType * systemRan [ 4 ] ;
int_T systemTid [ 4 ] ; } DataMapInfo ; struct { int_T mdlref_GlobalTID [ 2 ]
; } Timing ; } ; typedef struct { kqhylkjjim rtb ; nmkt2swflu rtdw ;
opaxafp3tl rtm ; } gqeccqlb2tn ; extern real32_T
rtP__shuntMaxRequestedCurrentrms2f2fmuGenerationDictionay_sldd_ ; extern void
pv5ckujrfn ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1
, opaxafp3tl * const bsmmrqwpul , kqhylkjjim * localB , nmkt2swflu * localDW
, void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI
, const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ;
extern void mr_HC_core_control_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS ,
char_T * modelName , int_T * retVal ) ; extern mxArray *
mr_HC_core_control_GetDWork ( const gqeccqlb2tn * mdlrefDW ) ; extern void
mr_HC_core_control_SetDWork ( gqeccqlb2tn * mdlrefDW , const mxArray * ssDW )
; extern void mr_HC_core_control_RegisterSimStateChecksum ( SimStruct * S ) ;
extern mxArray * mr_HC_core_control_GetSimStateDisallowedBlocks ( ) ; extern
const rtwCAPI_ModelMappingStaticInfo * HC_core_control_GetCAPIStaticMap (
void ) ; extern void evefst11wn ( nmkt2swflu * localDW ) ; extern void
d5qgjc3vsg ( nmkt2swflu * localDW ) ; extern void okjdub4pqr ( kqhylkjjim *
localB , nmkt2swflu * localDW ) ; extern void HC_core_control ( const
real32_T i14am44bmg [ 3 ] , const real32_T kkf12gjsjc [ 3 ] , const real32_T
* g3uvkxaf5h , const real32_T nj0ku4lxpo [ 3 ] , const real32_T prrplqo11t [
3 ] , const boolean_T * jc4qxvcq53 , real32_T hdeb3ujrin [ 3 ] , real32_T
katajvjnar [ 3 ] , kqhylkjjim * localB , nmkt2swflu * localDW ) ; extern void
m133vlzqvd ( opaxafp3tl * const bsmmrqwpul ) ;
#endif
