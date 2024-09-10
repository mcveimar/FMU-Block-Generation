#ifndef RTW_HEADER_SH_core_control_cap_host_h__
#define RTW_HEADER_SH_core_control_cap_host_h__
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap_simtarget.h"
#include "LC_core_control_capi_host.h"
#include "I_core_limit_capi_host.h"
#include "DC_core_control_capi_host.h"
#include "HC_core_compensation_all_capi_host.h"
#include "Idq_core_control_capi_host.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMappingInfo *
childMMI [ 5 ] ; LC_core_control_host_DataMapInfo_T child0 ;
I_core_limit_host_DataMapInfo_T child1 ; DC_core_control_host_DataMapInfo_T
child2 ; HC_core_compensation_all_host_DataMapInfo_T child3 ;
Idq_core_control_host_DataMapInfo_T child4 ; }
SH_core_control_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void SH_core_control_host_InitializeDataMapInfo (
SH_core_control_host_DataMapInfo_T * dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
