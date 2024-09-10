#include <stddef.h>
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "PF_core_control_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 17
#endif
#ifndef SS_INT64
#define SS_INT64 18
#endif
#else
#include "builtin_typeid_types.h"
#include "PF_core_control.h"
#include "PF_core_control_capi.h"
#include "PF_core_control_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , - 1
, TARGET_STRING (
"PF_core_control/LPF1/Integrator\n(Discrete or Continuous)/Discrete/Integrator"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 0 , - 1
, ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
static int_T rt_LoggedStateIdxList [ ] = { 0 } ;
#ifndef HOST_CAPI_BUILD
static void PF_core_control_InitializeDataAddr ( void * dataAddr [ ] ,
kffoxsxgi3 * localDW ) { dataAddr [ 0 ] = ( void * ) ( & localDW ->
o01vp0xlcb [ 0 ] ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void PF_core_control_InitializeVarDimsAddr ( int32_T * vardimsAddr [ ]
) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void PF_core_control_InitializeLoggingFunctions ( RTWLoggingFcnPtr
loggingPtrs [ ] ) { loggingPtrs [ 0 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "float" ,
"real32_T" , 0 , 0 , sizeof ( real32_T ) , ( uint8_T ) SS_SINGLE , 0 , 0 , 0
} } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 3 , 1
} ; static const real_T rtcapiStoredFloats [ ] = { 0.00853344 , 0.0 } ;
static rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , (
int8_T ) 0 , ( uint8_T ) 0 } } ; static int_T rtContextSystems [ 3 ] ; static
rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ] = { { 0 , 0 , "" , 0 } } ; static
rtwCAPI_ModelMapLoggingStaticInfo mmiStaticInfoLogging = { 3 ,
rtContextSystems , loggingMetaInfo , 0 , ( NULL ) , { 0 , ( NULL ) , ( NULL )
} , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo mmiStatic = { {
rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL ) , 0 , ( NULL
) , 0 } , { rtBlockStates , 1 } , { rtDataTypeMap , rtDimensionMap ,
rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float" ,
{ 1186719389U , 1625562389U , 2028253177U , 2534253726U } , &
mmiStaticInfoLogging , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * PF_core_control_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void PF_core_control_InitializeSystemRan ( drx5qpwp11 * const
ihatqynl0w , sysRanDType * systemRan [ ] , kffoxsxgi3 * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER (
ihatqynl0w ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType
* ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemRan [ 2 ] = ( NULL ) ;
systemTid [ 1 ] = ihatqynl0w -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [
2 ] = ihatqynl0w -> Timing . mdlref_GlobalTID [ 0 ] ; systemTid [ 0 ] =
rootTid ; rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ;
rtContextSystems [ 2 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void PF_core_control_InitializeDataMapInfo ( drx5qpwp11 * const ihatqynl0w ,
kffoxsxgi3 * localDW , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( ihatqynl0w -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( ihatqynl0w -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ihatqynl0w -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; PF_core_control_InitializeDataAddr ( ihatqynl0w ->
DataMapInfo . dataAddress , localDW ) ; rtwCAPI_SetDataAddressMap (
ihatqynl0w -> DataMapInfo . mmi , ihatqynl0w -> DataMapInfo . dataAddress ) ;
PF_core_control_InitializeVarDimsAddr ( ihatqynl0w -> DataMapInfo .
vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( ihatqynl0w -> DataMapInfo .
mmi , ihatqynl0w -> DataMapInfo . vardimsAddress ) ; rtwCAPI_SetPath (
ihatqynl0w -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetFullPath (
ihatqynl0w -> DataMapInfo . mmi , ( NULL ) ) ;
PF_core_control_InitializeLoggingFunctions ( ihatqynl0w -> DataMapInfo .
loggingPtrs ) ; rtwCAPI_SetLoggingPtrs ( ihatqynl0w -> DataMapInfo . mmi ,
ihatqynl0w -> DataMapInfo . loggingPtrs ) ; rtwCAPI_SetInstanceLoggingInfo (
ihatqynl0w -> DataMapInfo . mmi , & ihatqynl0w -> DataMapInfo .
mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray ( ihatqynl0w -> DataMapInfo .
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( ihatqynl0w -> DataMapInfo .
mmi , 0 ) ; PF_core_control_InitializeSystemRan ( ihatqynl0w , ihatqynl0w ->
DataMapInfo . systemRan , localDW , ihatqynl0w -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( ihatqynl0w -> DataMapInfo .
mmi , ihatqynl0w -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
ihatqynl0w -> DataMapInfo . mmi , ihatqynl0w -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( ihatqynl0w -> DataMapInfo . mmi , & ihatqynl0w ->
Timing . mdlref_GlobalTID [ 0 ] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void PF_core_control_host_InitializeDataMapInfo (
PF_core_control_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
