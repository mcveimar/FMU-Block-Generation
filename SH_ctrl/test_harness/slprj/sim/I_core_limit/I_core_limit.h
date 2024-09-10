#ifndef RTW_HEADER_I_core_limit_h_
#define RTW_HEADER_I_core_limit_h_
#ifndef I_core_limit_COMMON_INCLUDES_
#define I_core_limit_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "I_core_limit_types.h"
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include "rt_nonfinite.h"
#include <stddef.h>
typedef struct { real32_T dtzrhw1fxa [ 3 ] ; } agtr2eeaur ; typedef struct {
int8_T a2jdariv0m ; boolean_T mvzprtw30r ; } knl12usfqr ; typedef struct {
real32_T irirvjqztb [ 3 ] ; real32_T hribxqjivt [ 3 ] ; real32_T mjipmnwnm5 ;
real32_T g53wbqpygy [ 18 ] ; real32_T lc52ez5ulx [ 3 ] ; int32_T epgzmo5eum ;
int32_T lu0m11btb3 ; agtr2eeaur kzdgozbnbw ; agtr2eeaur dw0gqt4egj5 ; }
g03fblis2s ; typedef struct { real32_T ddfom4w1by [ 3 ] ; int32_T ckrotryroj
; int8_T jvb0kq4eut ; int8_T hnpgo2j3qd ; int8_T o1nuyu4eux ; boolean_T
mboceyfxmf ; knl12usfqr kzdgozbnbw ; knl12usfqr dw0gqt4egj5 ; } dg2iue4hq5 ;
typedef struct { const int32_T l4j3jkvhck ; } ncqkkwnbls ; struct hknkbzzfwx_
{ real32_T P_0 ; real32_T P_1 ; real32_T P_2 ; real32_T P_3 ; } ; struct
hljmpnjf5r5_ { int32_T P_2 ; int32_T P_3 ; int32_T P_4 ; int32_T P_5 ;
real32_T P_6 ; real32_T P_7 ; real32_T P_8 ; real32_T P_9 ; real32_T P_10 ;
real32_T P_11 ; real32_T P_12 ; real32_T P_13 ; real32_T P_14 ; real32_T P_15
; real32_T P_16 ; real32_T P_17 [ 3 ] ; real32_T P_18 [ 3 ] ; real32_T P_19 ;
real32_T P_20 ; real32_T P_21 ; real32_T P_22 ; real32_T P_23 ; real32_T P_24
; real32_T P_25 ; real32_T P_26 ; real32_T P_27 ; real32_T P_28 ; real32_T
P_29 [ 3 ] ; real32_T P_30 [ 3 ] ; real32_T P_31 ; hknkbzzfwx kzdgozbnbw ;
hknkbzzfwx dw0gqt4egj5 ; } ; struct otb2zksqjw { struct SimStruct_tag *
_mdlRefSfcnS ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; sysRanDType *
systemRan [ 11 ] ; int_T systemTid [ 11 ] ; } DataMapInfo ; struct { int_T
mdlref_GlobalTID [ 2 ] ; } Timing ; } ; typedef struct { g03fblis2s rtb ;
dg2iue4hq5 rtdw ; fg05pa035r rtm ; } gu5dd3cd3nc ; extern real32_T
rtP__shuntHarmonicsCorrected2f2fmuGenerationDictionay_sldd_ [ 6 ] ; extern
real32_T rtP__shuntMaxRequestedCurrentrms2f2fmuGenerationDictionay_sldd_ ;
extern void etkjludo35 ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T
mdlref_TID1 , fg05pa035r * const ppltozkdmd , g03fblis2s * localB ,
dg2iue4hq5 * localDW , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_I_core_limit_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T * modelName
, int_T * retVal ) ; extern mxArray * mr_I_core_limit_GetDWork ( const
gu5dd3cd3nc * mdlrefDW ) ; extern void mr_I_core_limit_SetDWork ( gu5dd3cd3nc
* mdlrefDW , const mxArray * ssDW ) ; extern void
mr_I_core_limit_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_I_core_limit_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * I_core_limit_GetCAPIStaticMap ( void ) ;
extern void j3yhukyayf ( agtr2eeaur * localB , hknkbzzfwx * localP ) ; extern
void dgzjqfi02u ( agtr2eeaur * localB , knl12usfqr * localDW , hknkbzzfwx *
localP ) ; extern void dw0gqt4egj ( fg05pa035r * const ppltozkdmd , const
boolean_T cm0qjtrc3h [ 3 ] , const real32_T clgnvar1cq [ 3 ] , const real32_T
eozctpazhu [ 3 ] , agtr2eeaur * localB , knl12usfqr * localDW , hknkbzzfwx *
localP ) ; extern void ft0mlz22gp ( real32_T fwtktar1ua [ 18 ] , real32_T
idgov3aatt [ 3 ] , g03fblis2s * localB , dg2iue4hq5 * localDW ) ; extern void
plud4shqa4 ( g03fblis2s * localB ) ; extern void g1dg5uroo3 ( real32_T
idgov3aatt [ 3 ] , g03fblis2s * localB , dg2iue4hq5 * localDW ) ; extern void
I_core_limit ( fg05pa035r * const ppltozkdmd , const real32_T gfy2erbary [ 3
] , const real32_T cla1bn3xgo [ 3 ] , const real32_T ch1n532w1k [ 3 ] , const
real32_T i0b3zlckmm [ 18 ] , real32_T fwtktar1ua [ 18 ] , real32_T idgov3aatt
[ 3 ] , real32_T ilyujys41n [ 3 ] , real32_T cgyphdro11 [ 3 ] , g03fblis2s *
localB , dg2iue4hq5 * localDW ) ; extern void I_core_limitTID1 ( g03fblis2s *
localB , dg2iue4hq5 * localDW ) ; extern void mxg05prz3j ( fg05pa035r * const
ppltozkdmd ) ;
#endif
