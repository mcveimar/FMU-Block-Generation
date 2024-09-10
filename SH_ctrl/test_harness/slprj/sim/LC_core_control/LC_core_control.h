#ifndef RTW_HEADER_LC_core_control_h_
#define RTW_HEADER_LC_core_control_h_
#ifndef LC_core_control_COMMON_INCLUDES_
#define LC_core_control_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "LC_core_control_types.h"
#include "CB_core_control.h"
#include "PF_core_control.h"
#include "rtGetInf.h"
#include "model_reference_types.h"
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include "rt_nonfinite.h"
#include <stddef.h>
typedef struct { bh3neqetwem ipgchh23nu ; ckurqr25mlp hcpmcentc5 ; }
ldkbugvmsi ; struct plg1g1kska { struct SimStruct_tag * _mdlRefSfcnS ; const
rtTimingBridge * timingBridge ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ;
rtwCAPI_ModelMappingInfo * childMMI [ 2 ] ; sysRanDType * systemRan [ 2 ] ;
int_T systemTid [ 2 ] ; } DataMapInfo ; struct { int_T mdlref_GlobalTID [ 2 ]
; } Timing ; } ; typedef struct { ldkbugvmsi rtdw ; h12xxmkjhw rtm ; }
jfe402omtci ; extern void fhctpdvbbm ( SimStruct * _mdlRefSfcnS , int_T
mdlref_TID0 , int_T mdlref_TID1 , h12xxmkjhw * const pkdnbyzfyn , ldkbugvmsi
* localDW , void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo *
rt_ParentMMI , const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T
rt_CSTATEIdx ) ; extern void mr_LC_core_control_MdlInfoRegFcn ( SimStruct *
mdlRefSfcnS , char_T * modelName , int_T * retVal ) ; extern mxArray *
mr_LC_core_control_GetDWork ( const jfe402omtci * mdlrefDW ) ; extern void
mr_LC_core_control_SetDWork ( jfe402omtci * mdlrefDW , const mxArray * ssDW )
; extern void mr_LC_core_control_RegisterSimStateChecksum ( SimStruct * S ) ;
extern mxArray * mr_LC_core_control_GetSimStateDisallowedBlocks ( ) ; extern
const rtwCAPI_ModelMappingStaticInfo * LC_core_control_GetCAPIStaticMap (
void ) ; extern void oy0qujxpgs ( ldkbugvmsi * localDW ) ; extern void
ekvlsf2l1w ( ldkbugvmsi * localDW ) ; extern void hefhsp2lgr ( ldkbugvmsi *
localDW ) ; extern void kstupqmgsy ( ldkbugvmsi * localDW ) ; extern void
LC_core_control ( const real32_T fkbfutvxow [ 3 ] , const real32_T kuj52o20fb
[ 3 ] , const boolean_T * d4atsxkvm0 , const real32_T foizhxqcy4 [ 3 ] ,
const real32_T dpdxvxlf2m [ 3 ] , const boolean_T * ds2fqp4qpb , real32_T
aosb3sxbjw [ 3 ] , real32_T lp5bmwtntp [ 3 ] , real32_T elwj4znp4s [ 3 ] ,
real32_T o0xehaf555 [ 3 ] , ldkbugvmsi * localDW ) ; extern void
LC_core_controlTID1 ( ldkbugvmsi * localDW ) ; extern void nan4o5p35k (
ldkbugvmsi * localDW , h12xxmkjhw * const pkdnbyzfyn ) ;
#endif
