#ifndef RTW_HEADER_Idq_core_control_h_
#define RTW_HEADER_Idq_core_control_h_
#ifndef Idq_core_control_COMMON_INCLUDES_
#define Idq_core_control_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "Idq_core_control_types.h"
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include "rt_nonfinite.h"
#include <stddef.h>
#include "zero_crossing_types.h"
typedef struct { real32_T mw1z3unhmu [ 3 ] ; real32_T lqzrdlmlxe [ 3 ] ; }
iv0sgoigmm ; typedef struct { real32_T htjh3qwpia [ 2 ] ; real32_T mws4tcu3qf
[ 2 ] ; real32_T mwbpk3uscs [ 2 ] ; real32_T oeffvvsesb [ 3 ] ; real32_T
abbsngkmwu [ 2 ] ; real32_T hazahriz5k [ 2 ] ; real32_T btoqbxgwvw [ 2 ] ;
real32_T f04awwirwd [ 3 ] ; real32_T c0sg4egpmd ; real32_T cpjbcdef4e ;
real32_T btwgoycztt ; real32_T e3fe1rwasq ; real32_T lka1egzuhp ; real32_T
byfriecyzb ; } cpo2zckue3 ; typedef struct { real_T epalzoyb2m ; real_T
mjkjn2sesj ; real_T gdzd2ellld ; real_T btuxawvxty ; real_T ifwe0ef4cq ;
real_T kpofysy1v2 ; } kxtvuae3qb ; typedef struct { ZCSigState fs0gz12tpu ;
ZCSigState polwo5lbeb ; ZCSigState b1rttlkk33 ; ZCSigState oi41yxc3kg ;
ZCSigState oftvwekxsj ; ZCSigState nlylhet0p1 ; } ky1sb5be3z ; struct
ayanpjhtrps_ { real32_T P_0 ; real32_T P_1 [ 3 ] ; real32_T P_2 [ 3 ] ;
real32_T P_3 ; real32_T P_4 [ 3 ] ; real32_T P_5 [ 3 ] ; real32_T P_6 ;
real32_T P_7 [ 3 ] ; real32_T P_8 [ 3 ] ; real32_T P_9 ; real32_T P_10 ;
real32_T P_11 ; real32_T P_12 ; real32_T P_13 ; real32_T P_14 ; real32_T P_15
; real32_T P_16 ; real32_T P_17 [ 3 ] ; real32_T P_18 [ 3 ] ; real32_T P_19 ;
real32_T P_20 [ 3 ] ; real32_T P_21 [ 3 ] ; real32_T P_22 ; real32_T P_23 [ 3
] ; real32_T P_24 [ 3 ] ; real32_T P_25 ; real32_T P_26 ; real32_T P_27 ;
real32_T P_28 ; real32_T P_29 ; real32_T P_30 ; real32_T P_31 ; boolean_T
P_32 ; } ; struct bfzhrgxl1h { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 8 ] ; int32_T * vardimsAddress [ 8
] ; RTWLoggingFcnPtr loggingPtrs [ 8 ] ; sysRanDType * systemRan [ 2 ] ;
int_T systemTid [ 2 ] ; } DataMapInfo ; struct { int_T mdlref_GlobalTID [ 1 ]
; } Timing ; } ; typedef struct { iv0sgoigmm rtb ; cpo2zckue3 rtdw ;
fmlk1c5hb5 rtm ; ky1sb5be3z rtzce ; } pqgg0s5mnwe ; extern void gqkdhuz13j (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , fmlk1c5hb5 * const dx5hgjdh4m
, iv0sgoigmm * localB , cpo2zckue3 * localDW , ky1sb5be3z * localZCE , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern
void mr_Idq_core_control_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_Idq_core_control_GetDWork
( const pqgg0s5mnwe * mdlrefDW ) ; extern void mr_Idq_core_control_SetDWork (
pqgg0s5mnwe * mdlrefDW , const mxArray * ssDW ) ; extern void
mr_Idq_core_control_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_Idq_core_control_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Idq_core_control_GetCAPIStaticMap ( void ) ;
extern void fpnmyyhukc ( cpo2zckue3 * localDW ) ; extern void cfngso15cx (
cpo2zckue3 * localDW ) ; extern void i0vombvibb ( iv0sgoigmm * localB ,
cpo2zckue3 * localDW ) ; extern void Idq_core_control ( const boolean_T *
cs14rbb4zx , const real32_T l3zcfg4pbo [ 3 ] , const real32_T psvu3qnip2 [ 3
] , const real32_T ewmzvpgx0t [ 3 ] , const real32_T l0yl1omkd2 [ 3 ] , const
real32_T hcxtb30d2m [ 3 ] , const real32_T jn14fz3rza [ 3 ] , const real32_T
cvck5zynsj [ 3 ] , const real32_T jn1juyx1qb [ 3 ] , real32_T fl0pmgxtbx [ 3
] , real32_T dwr43n5nz1 [ 3 ] , iv0sgoigmm * localB , cpo2zckue3 * localDW ,
ky1sb5be3z * localZCE ) ; extern void l242pzq2ig ( fmlk1c5hb5 * const
dx5hgjdh4m ) ;
#endif
