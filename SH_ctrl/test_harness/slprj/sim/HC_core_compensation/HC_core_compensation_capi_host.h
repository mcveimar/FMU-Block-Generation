#ifndef RTW_HEADER_HC_core_compensation_cap_host_h__
#define RTW_HEADER_HC_core_compensation_cap_host_h__
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap_simtarget.h"
#include "HC_core_control_capi_host.h"
#include "HC_core_demand_capi_host.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMappingInfo *
childMMI [ 2 ] ; HC_core_control_host_DataMapInfo_T child0 ;
HC_core_demand_host_DataMapInfo_T child1 ; }
HC_core_compensation_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void HC_core_compensation_host_InitializeDataMapInfo (
HC_core_compensation_host_DataMapInfo_T * dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
