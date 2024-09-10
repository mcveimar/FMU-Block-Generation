#ifndef RTW_HEADER_HC_core_demand_h_
#define RTW_HEADER_HC_core_demand_h_
#ifndef HC_core_demand_COMMON_INCLUDES_
#define HC_core_demand_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "HC_core_demand_types.h"
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include "rt_nonfinite.h"
#include <stddef.h>
typedef struct { real32_T gkjkthrao5 ; real32_T cmkmw2u0ef ; real32_T
lvzteedo4g [ 3 ] ; real32_T f0mlqtnqke [ 3 ] ; real32_T oo2s5ucnfh ; real32_T
desaasq1z0 ; real32_T l232c4xdwi [ 3 ] ; real32_T pkk5muuxvg [ 3 ] ; }
i0jbbxzxhp ; typedef struct { real32_T lzooef1vg0 [ 3 ] ; real32_T jfy4pktyte
[ 3 ] ; real32_T icks32ycfg [ 3 ] ; real32_T fnqc2inubu [ 3 ] ; int8_T
pl2jqaqhbi ; int8_T k43afusiln ; int8_T o03zmxvrq4 ; int8_T hrgjjsvat3 ; }
mubhr0gjvh ; struct l500zl53pvk_ { real_T P_0 ; real_T P_1 ; real32_T P_2 ;
real32_T P_3 ; real32_T P_4 ; real32_T P_5 ; real_T P_6 ; real_T P_7 ; real_T
P_8 ; real_T P_9 ; real32_T P_10 ; real32_T P_11 ; real32_T P_12 ; real32_T
P_13 ; real32_T P_14 ; real32_T P_15 ; real32_T P_16 ; real32_T P_17 ;
real32_T P_18 ; real32_T P_19 ; real32_T P_20 ; real32_T P_21 ; real32_T P_22
; real32_T P_23 ; real32_T P_24 ; real32_T P_25 ; real32_T P_26 ; real32_T
P_27 ; real32_T P_28 ; real32_T P_29 ; real32_T P_30 ; real32_T P_31 ;
real32_T P_32 ; real32_T P_33 ; real32_T P_34 ; real32_T P_35 ; real32_T P_36
; real32_T P_37 ; real32_T P_38 [ 3 ] ; } ; struct cabu3n4tlq { struct
SimStruct_tag * _mdlRefSfcnS ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress [
4 ] ; int32_T * vardimsAddress [ 4 ] ; RTWLoggingFcnPtr loggingPtrs [ 4 ] ;
sysRanDType * systemRan [ 4 ] ; int_T systemTid [ 4 ] ; } DataMapInfo ;
struct { int_T mdlref_GlobalTID [ 2 ] ; } Timing ; } ; typedef struct {
i0jbbxzxhp rtb ; mubhr0gjvh rtdw ; bwqie2cqq2 rtm ; } ed04h1okrzy ; extern
void hfxfypauzg ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T
mdlref_TID1 , bwqie2cqq2 * const bazujgqrv3 , i0jbbxzxhp * localB ,
mubhr0gjvh * localDW , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_HC_core_demand_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_HC_core_demand_GetDWork (
const ed04h1okrzy * mdlrefDW ) ; extern void mr_HC_core_demand_SetDWork (
ed04h1okrzy * mdlrefDW , const mxArray * ssDW ) ; extern void
mr_HC_core_demand_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray
* mr_HC_core_demand_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * HC_core_demand_GetCAPIStaticMap ( void ) ;
extern void o0wlz5cdw2 ( i0jbbxzxhp * localB , mubhr0gjvh * localDW ) ;
extern void jht1q2yrb0 ( i0jbbxzxhp * localB , mubhr0gjvh * localDW ) ;
extern void fsyqt3jfsy ( i0jbbxzxhp * localB ) ; extern void js2osz2qo5 (
i0jbbxzxhp * localB , mubhr0gjvh * localDW ) ; extern void HC_core_demand (
const real32_T mqqyeplicw [ 3 ] , const real32_T dhep1k4opo [ 3 ] , real32_T
ceq1qfoyl4 [ 3 ] , real32_T exzrileqpq [ 3 ] , i0jbbxzxhp * localB ,
mubhr0gjvh * localDW ) ; extern void amz4zilgtp ( bwqie2cqq2 * const
bazujgqrv3 ) ;
#endif
