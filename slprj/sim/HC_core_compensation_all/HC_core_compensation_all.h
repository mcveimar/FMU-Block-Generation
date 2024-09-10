#ifndef RTW_HEADER_HC_core_compensation_all_h_
#define RTW_HEADER_HC_core_compensation_all_h_
#ifndef HC_core_compensation_all_COMMON_INCLUDES_
#define HC_core_compensation_all_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "HC_core_compensation_all_types.h"
#include "HC_core_compensation.h"
#include "rtGetInf.h"
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include "rt_nonfinite.h"
#include <stddef.h>
typedef struct { real32_T fx0gfp3nke [ 3 ] ; real32_T aamyhuxxoj [ 3 ] ;
real32_T fpftiibehl ; real32_T oau1ofzwtn [ 3 ] ; real32_T m3cpqt3i5b [ 3 ] ;
real32_T d33ltxdoyt [ 3 ] ; } g5ibclfkll ; typedef struct { blwxvi3q3iv
iidxja3ddi ; } iqohuogald ; struct gkk1xkyog0o_ { real_T P_1 ; real_T P_2 ;
real_T P_3 ; real_T P_4 ; real_T P_5 ; real_T P_6 ; real32_T P_7 [ 3 ] ;
real32_T P_8 [ 3 ] ; real32_T P_9 [ 3 ] ; } ; struct ptdmzjsaqi { struct
SimStruct_tag * _mdlRefSfcnS ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ;
rtwCAPI_ModelMappingInfo * childMMI [ 1 ] ; sysRanDType * systemRan [ 2 ] ;
int_T systemTid [ 2 ] ; } DataMapInfo ; struct { int_T mdlref_GlobalTID [ 2 ]
; } Timing ; } ; typedef struct { g5ibclfkll rtb ; iqohuogald rtdw ;
m4hx0ogpuj rtm ; } otekkx3ztfm ; extern real32_T
rtP__shuntMaxRequestedCurrentrms2f2fmuGenerationDictionay_sldd_ ; extern void
cezqaqh0pi ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1
, m4hx0ogpuj * const hyvlkreenb , g5ibclfkll * localB , iqohuogald * localDW
, void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI
, const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ;
extern void mr_HC_core_compensation_all_MdlInfoRegFcn ( SimStruct *
mdlRefSfcnS , char_T * modelName , int_T * retVal ) ; extern mxArray *
mr_HC_core_compensation_all_GetDWork ( const otekkx3ztfm * mdlrefDW ) ;
extern void mr_HC_core_compensation_all_SetDWork ( otekkx3ztfm * mdlrefDW ,
const mxArray * ssDW ) ; extern void
mr_HC_core_compensation_all_RegisterSimStateChecksum ( SimStruct * S ) ;
extern mxArray * mr_HC_core_compensation_all_GetSimStateDisallowedBlocks ( )
; extern const rtwCAPI_ModelMappingStaticInfo *
HC_core_compensation_all_GetCAPIStaticMap ( void ) ; extern void k1zlgnkq11 (
iqohuogald * localDW ) ; extern void d0i35w3ede ( iqohuogald * localDW ) ;
extern void i5ltjfz1ee ( iqohuogald * localDW ) ; extern void d5cxoj21dh (
iqohuogald * localDW ) ; extern void HC_core_compensation_all ( const
real32_T czqfmvasis [ 18 ] , const real32_T ikgpjxcg4s [ 18 ] , const
boolean_T * chbt35xqh3 , const real32_T m41oqd0qya [ 6 ] , const real32_T
lxdhuayasc [ 18 ] , const real32_T l4fduq3gdp [ 18 ] , const real32_T
gvubshexmp [ 18 ] , real32_T pi0vgdlbia [ 18 ] , real32_T jajrmlhuvb [ 18 ] ,
real32_T kwvrvlc1lg [ 18 ] , g5ibclfkll * localB , iqohuogald * localDW ) ;
extern void gefkexhyzf ( iqohuogald * localDW , m4hx0ogpuj * const hyvlkreenb
) ;
#endif
