#ifndef RTW_HEADER_LC_core_control_cap_host_h__
#define RTW_HEADER_LC_core_control_cap_host_h__
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap_simtarget.h"
#include "CB_core_control_capi_host.h"
#include "PF_core_control_capi_host.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMappingInfo *
childMMI [ 2 ] ; CB_core_control_host_DataMapInfo_T child0 ;
PF_core_control_host_DataMapInfo_T child1 ; }
LC_core_control_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void LC_core_control_host_InitializeDataMapInfo (
LC_core_control_host_DataMapInfo_T * dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
