#ifndef RTW_HEADER_HC_core_compensation_h_
#define RTW_HEADER_HC_core_compensation_h_
#ifndef HC_core_compensation_COMMON_INCLUDES_
#define HC_core_compensation_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "HC_core_compensation_types.h"
#include "HC_core_demand.h"
#include "HC_core_control.h"
#include "rtGetInf.h"
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include "rt_nonfinite.h"
#include <stddef.h>
typedef struct { real32_T dnxu32g12i [ 3 ] ; real32_T hol3ijwalo [ 3 ] ; }
fjo2zxvios ; typedef struct { ed04h1okrzy c1i3ujcjxf ; gqeccqlb2tn ipmzlyxruy
; } p1qdjfsmjd ; struct ftzqlhqdjr { struct SimStruct_tag * _mdlRefSfcnS ;
struct { rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; rtwCAPI_ModelMappingInfo * childMMI [ 2 ] ; sysRanDType
* systemRan [ 2 ] ; int_T systemTid [ 2 ] ; } DataMapInfo ; struct { int_T
mdlref_GlobalTID [ 2 ] ; } Timing ; } ; typedef struct { fjo2zxvios rtb ;
p1qdjfsmjd rtdw ; cp1r0l5l22 rtm ; } blwxvi3q3iv ; extern real32_T
rtP__shuntMaxRequestedCurrentrms2f2fmuGenerationDictionay_sldd_ ; extern void
itjrbl0ose ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1
, cp1r0l5l22 * const kceqn1azcu , fjo2zxvios * localB , p1qdjfsmjd * localDW
, void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI
, const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ;
extern void mr_HC_core_compensation_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS ,
char_T * modelName , int_T * retVal ) ; extern mxArray *
mr_HC_core_compensation_GetDWork ( const blwxvi3q3iv * mdlrefDW ) ; extern
void mr_HC_core_compensation_SetDWork ( blwxvi3q3iv * mdlrefDW , const
mxArray * ssDW ) ; extern void
mr_HC_core_compensation_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_HC_core_compensation_GetSimStateDisallowedBlocks ( ) ; extern
const rtwCAPI_ModelMappingStaticInfo * HC_core_compensation_GetCAPIStaticMap
( void ) ; extern void lbv5mhn4ns ( p1qdjfsmjd * localDW ) ; extern void
cmy5t3htxp ( p1qdjfsmjd * localDW ) ; extern void pcdmbxaabi ( p1qdjfsmjd *
localDW ) ; extern void cciap5ge1t ( p1qdjfsmjd * localDW ) ; extern void
HC_core_compensation ( const real32_T kdt5zk3tu2 [ 3 ] , const real32_T
l2pn23542t [ 3 ] , const boolean_T * jqnb3yhva2 , const real32_T * adqd5vyxtc
, const real32_T du1tm0eyoh [ 3 ] , const real32_T fbbmkgx1pf [ 3 ] , const
real32_T mgljw4kgun [ 3 ] , real32_T pieeuibtfi [ 3 ] , real32_T hcrijcsx1t [
3 ] , real32_T esjxzfyzyu [ 3 ] , fjo2zxvios * localB , p1qdjfsmjd * localDW
) ; extern void nmlvnzjiku ( p1qdjfsmjd * localDW , cp1r0l5l22 * const
kceqn1azcu ) ;
#endif
