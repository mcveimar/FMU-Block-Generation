#if !defined(S_FUNCTION_NAME)
#define S_FUNCTION_NAME Idq_core_control_msf
#endif
#define S_FUNCTION_LEVEL 2
#if !defined(RTW_GENERATED_S_FUNCTION)
#define RTW_GENERATED_S_FUNCTION
#endif
#include <stdio.h>
#include <math.h>
#include "simstruc.h"
#include "fixedpoint.h"
#include "mwstringutil.h"
#define rt_logging_h
#include "Idq_core_control_types.h"
#include "Idq_core_control.h"
#include "Idq_core_control_private.h"
const char * rt_GetMatSignalLoggingFileName ( void ) { return NULL ; } const
char * rt_GetMatSigLogSelectorFileName ( void ) { return NULL ; } void *
rt_GetOSigstreamManager ( void ) { return NULL ; } void * rt_slioCatalogue (
void ) { return NULL ; } void * rtwGetPointerFromUniquePtr ( void * uniquePtr
) { return NULL ; } void * CreateDiagnosticAsVoidPtr ( const char * id , int
nargs , ... ) { void * voidPtrDiagnostic = NULL ; va_list args ; va_start (
args , nargs ) ; slmrCreateDiagnostic ( id , nargs , args , &
voidPtrDiagnostic ) ; va_end ( args ) ; return voidPtrDiagnostic ; } void
rt_ssSet_slErrMsg ( void * S , void * diag ) { SimStruct * simStrcut = (
SimStruct * ) S ; if ( ! _ssIsErrorStatusAslErrMsg ( simStrcut ) ) {
_ssSet_slLocalErrMsg ( simStrcut , diag ) ; } else { _ssDiscardDiagnostic (
simStrcut , diag ) ; } } void rt_ssReportDiagnosticAsWarning ( void * S ,
void * diag ) { _ssReportDiagnosticAsWarning ( ( SimStruct * ) S , diag ) ; }
void rt_ssReportDiagnosticAsInfo ( void * S , void * diag ) {
_ssReportDiagnosticAsInfo ( ( SimStruct * ) S , diag ) ; } const char *
rt_CreateFullPathToTop ( const char * toppath , const char * subpath ) { char
* fullpath = NULL ; slmrCreateFullPathToTop ( toppath , subpath , & fullpath
) ; return fullpath ; } boolean_T slIsRapidAcceleratorSimulating ( void ) {
return false ; } void rt_RAccelReplaceFromFilename ( const char * blockpath ,
char * fileName ) { ( void ) blockpath ; ( void ) fileName ; } void
rt_RAccelReplaceToFilename ( const char * blockpath , char * fileName ) { (
void ) blockpath ; ( void ) fileName ; } void * slsa_malloc ( size_t s ) {
return malloc ( s ) ; } void slsa_free ( void * ptr ) { free ( ptr ) ; } void
slsaCacheDWorkPointerForSimTargetOP ( void * ss , void * * ptr ) { ( void )
ss ; ( void ) ptr ; } void slsaCacheDWorkDataForSimTargetOP ( void * ss ,
void * ptr , unsigned int sizeInBytes ) { ( void ) ss ; ( void ) ptr ; ( void
) sizeInBytes ; } void slsaSaveRawMemoryForSimTargetOP ( void * ss , const
char * key , void * * ptr , unsigned int sizeInBytes , void * ( *
customOPSaveFcn ) ( void * dworkPtr , unsigned int * sizeInBytes ) , void ( *
customOPRestoreFcn ) ( void * dworkPtr , const void * data , unsigned int
sizeInBytes ) ) { ( void ) ss ; ( void ) key ; ( void ) ptr ; ( void )
sizeInBytes ; ( void ) customOPSaveFcn ; ( void ) customOPRestoreFcn ; }
static void mdlInitializeConditions ( SimStruct * S ) { pqgg0s5mnwe * dw = (
pqgg0s5mnwe * ) ssGetDWork ( S , 0 ) ; fpnmyyhukc ( & ( dw -> rtdw ) ) ; }
static void mdlReset ( SimStruct * S ) { pqgg0s5mnwe * dw = ( pqgg0s5mnwe * )
ssGetDWork ( S , 0 ) ; cfngso15cx ( & ( dw -> rtdw ) ) ; } static void
mdlPeriodicOutputUpdate ( SimStruct * S , int_T tid ) { pqgg0s5mnwe * dw = (
pqgg0s5mnwe * ) ssGetDWork ( S , 0 ) ; boolean_T const * i_hlhofn2afl = (
boolean_T * ) ssGetInputPortSignal ( S , 0 ) ; real32_T const * i_iukyf43nut
= ( real32_T * ) ssGetInputPortSignal ( S , 1 ) ; real32_T const *
i_agptw1ngbq = ( real32_T * ) ssGetInputPortSignal ( S , 2 ) ; real32_T const
* i_gzcthx5rqv = ( real32_T * ) ssGetInputPortSignal ( S , 3 ) ; real32_T
const * i_beac414od4 = ( real32_T * ) ssGetInputPortSignal ( S , 4 ) ;
real32_T const * i_mj2hgsewf4 = ( real32_T * ) ssGetInputPortSignal ( S , 5 )
; real32_T const * i_evyle1x0p4 = ( real32_T * ) ssGetInputPortSignal ( S , 6
) ; real32_T const * i_jjpjyufdzr = ( real32_T * ) ssGetInputPortSignal ( S ,
7 ) ; real32_T const * i_bqmzrg0rsd = ( real32_T * ) ssGetInputPortSignal ( S
, 8 ) ; real32_T * o_B_1_1 = ( real32_T * ) ssGetOutputPortSignal ( S , 0 ) ;
real32_T * o_B_1_2 = ( real32_T * ) ssGetOutputPortSignal ( S , 1 ) ; if (
tid == 0 ) { Idq_core_control ( i_hlhofn2afl , i_iukyf43nut , i_agptw1ngbq ,
i_gzcthx5rqv , i_beac414od4 , i_mj2hgsewf4 , i_evyle1x0p4 , i_jjpjyufdzr ,
i_bqmzrg0rsd , o_B_1_1 , o_B_1_2 , & ( dw -> rtb ) , & ( dw -> rtdw ) , & (
dw -> rtzce ) ) ; i0vombvibb ( & ( dw -> rtb ) , & ( dw -> rtdw ) ) ; } }
static void mdlInitializeSizes ( SimStruct * S ) { if ( ( S -> mdlInfo ->
genericFcn != ( NULL ) ) && ( ! ( S -> mdlInfo -> genericFcn ) ( S ,
GEN_FCN_CHK_MODELREF_SFUN_HAS_MODEL_BLOCK , - 1 , ( NULL ) ) ) ) { return ; }
ssSetNumSFcnParams ( S , 0 ) ; ssFxpSetU32BitRegionCompliant ( S , 1 ) ;
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; if ( S -> mdlInfo -> genericFcn != (
NULL ) ) { _GenericFcn fcn = S -> mdlInfo -> genericFcn ; }
ssSetRTWGeneratedSFcn ( S , 2 ) ; ssSetNumContStates ( S , 0 ) ;
ssSetNumDiscStates ( S , 0 ) ; ssSetSymbolicDimsSupport ( S , true ) ;
slmrInitializeIOPortDataVectors ( S , 9 , 2 ) ; if ( ! ssSetNumInputPorts ( S
, 9 ) ) return ; if ( ! ssSetInputPortVectorDimension ( S , 0 , 1 ) ) return
; ssSetInputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 0 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 0 , SS_BOOLEAN )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 0 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 0 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 0 , 1 ) ; ssSetInputPortOptimOpts ( S
, 0 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 0 ,
false ) ; ssSetInputPortSampleTime ( S , 0 , 0.00026667 ) ;
ssSetInputPortOffsetTime ( S , 0 , 0.0 ) ; if ( !
ssSetInputPortVectorDimension ( S , 1 , 3 ) ) return ;
ssSetInputPortDimensionsMode ( S , 1 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 1 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 1 , SS_SINGLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 1 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 1 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 1 , 1 ) ; ssSetInputPortOptimOpts ( S
, 1 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 1 ,
false ) ; ssSetInputPortSampleTime ( S , 1 , 0.00026667 ) ;
ssSetInputPortOffsetTime ( S , 1 , 0.0 ) ; if ( !
ssSetInputPortVectorDimension ( S , 2 , 3 ) ) return ;
ssSetInputPortDimensionsMode ( S , 2 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 2 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 2 , SS_SINGLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 2 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 2 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 2 , 1 ) ; ssSetInputPortOptimOpts ( S
, 2 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 2 ,
false ) ; ssSetInputPortSampleTime ( S , 2 , 0.00026667 ) ;
ssSetInputPortOffsetTime ( S , 2 , 0.0 ) ; if ( !
ssSetInputPortVectorDimension ( S , 3 , 3 ) ) return ;
ssSetInputPortDimensionsMode ( S , 3 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 3 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 3 , SS_SINGLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 3 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 3 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 3 , 1 ) ; ssSetInputPortOptimOpts ( S
, 3 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 3 ,
false ) ; ssSetInputPortSampleTime ( S , 3 , 0.00026667 ) ;
ssSetInputPortOffsetTime ( S , 3 , 0.0 ) ; if ( !
ssSetInputPortVectorDimension ( S , 4 , 3 ) ) return ;
ssSetInputPortDimensionsMode ( S , 4 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 4 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 4 , SS_SINGLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 4 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 4 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 4 , 1 ) ; ssSetInputPortOptimOpts ( S
, 4 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 4 ,
false ) ; ssSetInputPortSampleTime ( S , 4 , 0.00026667 ) ;
ssSetInputPortOffsetTime ( S , 4 , 0.0 ) ; if ( !
ssSetInputPortVectorDimension ( S , 5 , 3 ) ) return ;
ssSetInputPortDimensionsMode ( S , 5 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 5 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 5 , SS_SINGLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 5 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 5 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 5 , 1 ) ; ssSetInputPortOptimOpts ( S
, 5 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 5 ,
false ) ; ssSetInputPortSampleTime ( S , 5 , 0.00026667 ) ;
ssSetInputPortOffsetTime ( S , 5 , 0.0 ) ; if ( !
ssSetInputPortVectorDimension ( S , 6 , 3 ) ) return ;
ssSetInputPortDimensionsMode ( S , 6 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 6 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 6 , SS_SINGLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 6 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 6 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 6 , 1 ) ; ssSetInputPortOptimOpts ( S
, 6 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 6 ,
false ) ; ssSetInputPortSampleTime ( S , 6 , 0.00026667 ) ;
ssSetInputPortOffsetTime ( S , 6 , 0.0 ) ; if ( !
ssSetInputPortVectorDimension ( S , 7 , 3 ) ) return ;
ssSetInputPortDimensionsMode ( S , 7 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 7 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 7 , SS_SINGLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 7 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 7 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 7 , 1 ) ; ssSetInputPortOptimOpts ( S
, 7 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 7 ,
false ) ; ssSetInputPortSampleTime ( S , 7 , 0.00026667 ) ;
ssSetInputPortOffsetTime ( S , 7 , 0.0 ) ; if ( !
ssSetInputPortVectorDimension ( S , 8 , 3 ) ) return ;
ssSetInputPortDimensionsMode ( S , 8 , FIXED_DIMS_MODE ) ;
ssSetInputPortFrameData ( S , 8 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetInputPortDataType ( S , 8 , SS_SINGLE ) ;
} if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetInputPortUnit ( S , 8 ,
unitIdReg ) ;
#endif
} ssSetInputPortDirectFeedThrough ( S , 8 , 1 ) ;
ssSetInputPortRequiredContiguous ( S , 8 , 1 ) ; ssSetInputPortOptimOpts ( S
, 8 , SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetInputPortOverWritable ( S , 8 ,
false ) ; ssSetInputPortSampleTime ( S , 8 , 0.00026667 ) ;
ssSetInputPortOffsetTime ( S , 8 , 0.0 ) ; if ( ! ssSetNumOutputPorts ( S , 2
) ) return ; if ( ! ssSetOutputPortVectorDimension ( S , 0 , 3 ) ) return ;
ssSetOutputPortDimensionsMode ( S , 0 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 0 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 0 , SS_SINGLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 0 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 0 , 0.00026667 ) ;
ssSetOutputPortOffsetTime ( S , 0 , 0.0 ) ;
ssSetOutputPortDiscreteValuedOutput ( S , 0 , 0 ) ; ssSetOutputPortOkToMerge
( S , 0 , SS_OK_TO_MERGE_CONDITIONAL ) ; ssSetOutputPortICAttributes ( S , 0
, false , false , false ) ; ssSetOutputPortOptimOpts ( S , 0 ,
SS_NOT_REUSABLE_AND_LOCAL ) ; if ( ! ssSetOutputPortVectorDimension ( S , 1 ,
3 ) ) return ; ssSetOutputPortDimensionsMode ( S , 1 , FIXED_DIMS_MODE ) ;
ssSetOutputPortFrameData ( S , 1 , FRAME_NO ) ; if ( ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { ssSetOutputPortDataType ( S , 1 , SS_SINGLE )
; } if ( ssGetSimMode ( S ) != SS_SIMMODE_SIZES_CALL_ONLY ) {
#if defined (MATLAB_MEX_FILE)
UnitId unitIdReg ; ssRegisterUnitFromExpr ( S , "" , & unitIdReg ) ; if (
unitIdReg == INVALID_UNIT_ID ) return ; ssSetOutputPortUnit ( S , 1 ,
unitIdReg ) ;
#endif
} ssSetOutputPortSampleTime ( S , 1 , 0.00026667 ) ;
ssSetOutputPortOffsetTime ( S , 1 , 0.0 ) ;
ssSetOutputPortDiscreteValuedOutput ( S , 1 , 0 ) ; ssSetOutputPortOkToMerge
( S , 1 , SS_OK_TO_MERGE_CONDITIONAL ) ; ssSetOutputPortICAttributes ( S , 1
, false , false , false ) ; ssSetOutputPortOptimOpts ( S , 1 ,
SS_NOT_REUSABLE_AND_LOCAL ) ; ssSetSimStateCompliance ( S ,
USE_CUSTOM_SIM_STATE ) ; mr_Idq_core_control_RegisterSimStateChecksum ( S ) ;
ssSetNumSampleTimes ( S , PORT_BASED_SAMPLE_TIMES ) ;
ssSetParameterTuningCompliance ( S , true ) ; ssSetNumRWork ( S , 0 ) ;
ssSetNumIWork ( S , 0 ) ; ssSetNumPWork ( S , 0 ) ; ssSetNumModes ( S , 0 ) ;
{ int_T zcsIdx = 0 ; zcsIdx = ssCreateAndAddZcSignalInfo ( S ) ;
ssSetZcSignalWidth ( S , zcsIdx , 1 ) ; ssSetZcSignalName ( S , zcsIdx ,
"Reset" ) ; ssSetZcSignalType ( S , zcsIdx , SL_ZCS_TYPE_DISC ) ;
ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_ALL ) ;
ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Reset" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_DISC ) ; ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_ALL
) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Reset" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_DISC ) ; ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_ALL
) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Reset" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_DISC ) ; ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_ALL
) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Reset" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_DISC ) ; ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_ALL
) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; zcsIdx =
ssCreateAndAddZcSignalInfo ( S ) ; ssSetZcSignalWidth ( S , zcsIdx , 1 ) ;
ssSetZcSignalName ( S , zcsIdx , "Reset" ) ; ssSetZcSignalType ( S , zcsIdx ,
SL_ZCS_TYPE_DISC ) ; ssSetZcSignalZcEventType ( S , zcsIdx , SL_ZCS_EVENT_ALL
) ; ssSetZcSignalNeedsEventNotification ( S , zcsIdx , 0 ) ; }
ssSetOutputPortIsNonContinuous ( S , 0 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 0 , 0 ) ;
ssSetOutputPortIsNonContinuous ( S , 1 , 0 ) ;
ssSetOutputPortIsFedByBlockWithModesNoZCs ( S , 1 , 0 ) ;
ssSetInputPortIsNotDerivPort ( S , 0 , 1 ) ; ssSetInputPortIsNotDerivPort ( S
, 1 , 1 ) ; ssSetInputPortIsNotDerivPort ( S , 2 , 1 ) ;
ssSetInputPortIsNotDerivPort ( S , 3 , 1 ) ; ssSetInputPortIsNotDerivPort ( S
, 4 , 1 ) ; ssSetInputPortIsNotDerivPort ( S , 5 , 1 ) ;
ssSetInputPortIsNotDerivPort ( S , 6 , 1 ) ; ssSetInputPortIsNotDerivPort ( S
, 7 , 1 ) ; ssSetInputPortIsNotDerivPort ( S , 8 , 1 ) ;
ssSetModelReferenceSampleTimeInheritanceRule ( S ,
DISALLOW_SAMPLE_TIME_INHERITANCE ) ; ssSetRuntimeThreadSafetyCompliance ( S ,
RUNTIME_THREAD_SAFETY_COMPLIANCE_TRUE ) ; ssSetAcceptsFcnCallInputs ( S ) ;
ssSetModelReferenceNormalModeSupport ( S ,
MDL_START_AND_MDL_PROCESS_PARAMS_OK ) ; ssSupportsMultipleExecInstances ( S ,
false ) ; ssRegisterMsgForNotSupportingMultiExecInst ( S ,
 "<diag_root><diag id=\"Simulink:blocks:ImplicitIterSS_AnalysisPointNotSupportedInside\" pr=\"d\"><arguments><arg type=\"encoded\">PABfAF8AaQBpAFMAUwBfAF8APgA8AC8AXwBfAGkAaQBTAFMAXwBfAD4AAAA=</arg><arg type=\"encoded\">PABfAF8AaQB0AGUAcgBCAGwAawBfAF8APgA8AC8AXwBfAGkAdABlAHIAQgBsAGsAXwBfAD4AAAA=</arg><arg type=\"numeric\">1</arg><arg type=\"encoded\">SQBkAHEAXwBjAG8AcgBlAF8AYwBvAG4AdAByAG8AbAAvAGMAdQByAHIAZQBuAHQAQwBvAG4AdAByAG8AbABXAGkAdABoAEYARgBfAGQALwBGAGkAcgBzAHQALQBPAHIAZABlAHIAIABGAGkAbAB0AGUAcgAAAA==</arg></arguments><hs><h>AAAAYAy8mkDr</h></hs></diag></diag_root>"
) ; ssHasStateInsideForEachSS ( S , false ) ; ssSetOptions ( S ,
SS_OPTION_SUPPORTS_ALIAS_DATA_TYPES | SS_OPTION_DISALLOW_CONSTANT_SAMPLE_TIME
| SS_OPTION_EXCEPTION_FREE_CODE | SS_OPTION_WORKS_WITH_CODE_REUSE ) ;
#if SS_SFCN_FOR_SIM
if ( S -> mdlInfo -> genericFcn != ( NULL ) && ssGetSimMode ( S ) !=
SS_SIMMODE_SIZES_CALL_ONLY ) { int_T retVal = 1 ;
mr_Idq_core_control_MdlInfoRegFcn ( S , "Idq_core_control" , & retVal ) ; if
( ! retVal ) return ; }
#endif
#if SS_SFCN_FOR_SIM
if ( ssSetNumDWork ( S , 1 ) ) { int mdlrefDWTypeId ; ssRegMdlRefDWorkType (
S , & mdlrefDWTypeId ) ; if ( mdlrefDWTypeId == INVALID_DTYPE_ID ) return ;
if ( ! ssSetDataTypeSize ( S , mdlrefDWTypeId , sizeof ( pqgg0s5mnwe ) ) )
return ; ssSetDWorkDataType ( S , 0 , mdlrefDWTypeId ) ; ssSetDWorkWidth ( S
, 0 , 1 ) ; }
#else
if ( ! ssSetNumDWork ( S , 1 ) ) { return ; }
#endif
slmrRegisterSystemInitializeMethod ( S , mdlInitializeConditions ) ;
slmrRegisterSystemResetMethod ( S , mdlReset ) ;
slmrRegisterPeriodicOutputUpdateMethod ( S , mdlPeriodicOutputUpdate ) ;
ssSetSimulinkVersionGeneratedIn ( S , "23.2" ) ; } static void
mdlInitializeSampleTimes ( SimStruct * S ) { return ; }
#define MDL_SET_WORK_WIDTHS
static void mdlSetWorkWidths ( SimStruct * S ) { if ( S -> mdlInfo ->
genericFcn != ( NULL ) ) { _GenericFcn fcn = S -> mdlInfo -> genericFcn ;
ssSetSignalSizesComputeType ( S , SS_VARIABLE_SIZE_FROM_INPUT_VALUE_AND_SIZE
) ; } { static const char * toFileNames [ ] = { "" } ; static const char *
fromFileNames [ ] = { "" } ; if ( ! ssSetModelRefFromFiles ( S , 0 ,
fromFileNames ) ) return ; if ( ! ssSetModelRefToFiles ( S , 0 , toFileNames
) ) return ; } }
#define MDL_SETUP_RUNTIME_RESOURCES
static void mdlSetupRuntimeResources ( SimStruct * S ) { pqgg0s5mnwe * dw = (
pqgg0s5mnwe * ) ssGetDWork ( S , 0 ) ; void * sysRanPtr = ( NULL ) ; int
sysTid = 0 ; ssGetContextSysRanBCPtr ( S , & sysRanPtr ) ; ssGetContextSysTid
( S , & sysTid ) ; if ( sysTid == CONSTANT_TID ) { sysTid = 0 ; } gqkdhuz13j
( S , slmrGetTopTidFromMdlRefChildTid ( S , 0 , false ) , & ( dw -> rtm ) , &
( dw -> rtb ) , & ( dw -> rtdw ) , & ( dw -> rtzce ) , sysRanPtr , sysTid , (
( NULL ) ) , ( ( NULL ) ) , 0 , - 1 ) ; ssSetModelMappingInfoPtr ( S , & ( dw
-> rtm . DataMapInfo . mmi ) ) ; if ( S -> mdlInfo -> genericFcn != ( NULL )
) { _GenericFcn fcn = S -> mdlInfo -> genericFcn ; } }
#define MDL_START
static void mdlStart ( SimStruct * S ) { } static void mdlOutputs ( SimStruct
* S , int_T tid ) { pqgg0s5mnwe * dw = ( pqgg0s5mnwe * ) ssGetDWork ( S , 0 )
; boolean_T const * i_hlhofn2afl = ( boolean_T * ) ssGetInputPortSignal ( S ,
0 ) ; real32_T const * i_iukyf43nut = ( real32_T * ) ssGetInputPortSignal ( S
, 1 ) ; real32_T const * i_agptw1ngbq = ( real32_T * ) ssGetInputPortSignal (
S , 2 ) ; real32_T const * i_gzcthx5rqv = ( real32_T * ) ssGetInputPortSignal
( S , 3 ) ; real32_T const * i_beac414od4 = ( real32_T * )
ssGetInputPortSignal ( S , 4 ) ; real32_T const * i_mj2hgsewf4 = ( real32_T *
) ssGetInputPortSignal ( S , 5 ) ; real32_T const * i_evyle1x0p4 = ( real32_T
* ) ssGetInputPortSignal ( S , 6 ) ; real32_T const * i_jjpjyufdzr = (
real32_T * ) ssGetInputPortSignal ( S , 7 ) ; real32_T const * i_bqmzrg0rsd =
( real32_T * ) ssGetInputPortSignal ( S , 8 ) ; real32_T * o_B_1_1 = (
real32_T * ) ssGetOutputPortSignal ( S , 0 ) ; real32_T * o_B_1_2 = (
real32_T * ) ssGetOutputPortSignal ( S , 1 ) ; if ( tid != CONSTANT_TID &&
tid != PARAMETER_TUNING_TID ) { Idq_core_control ( i_hlhofn2afl ,
i_iukyf43nut , i_agptw1ngbq , i_gzcthx5rqv , i_beac414od4 , i_mj2hgsewf4 ,
i_evyle1x0p4 , i_jjpjyufdzr , i_bqmzrg0rsd , o_B_1_1 , o_B_1_2 , & ( dw ->
rtb ) , & ( dw -> rtdw ) , & ( dw -> rtzce ) ) ; } }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { pqgg0s5mnwe * dw = (
pqgg0s5mnwe * ) ssGetDWork ( S , 0 ) ; i0vombvibb ( & ( dw -> rtb ) , & ( dw
-> rtdw ) ) ; return ; } static void mdlTerminate ( SimStruct * S ) {
pqgg0s5mnwe * dw = ( pqgg0s5mnwe * ) ssGetDWork ( S , 0 ) ; l242pzq2ig ( & (
dw -> rtm ) ) ; return ; }
#define MDL_CLEANUP_RUNTIME_RESOURCES
static void mdlCleanupRuntimeResources ( SimStruct * S ) { }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static mxArray * mdlGetSimState ( SimStruct * S ) { static const char *
simStateFieldNames [ 6 ] = { "localX" , "mdlrefDW" , "disallowedStateData" ,
"tNext" , "tNextTid" , "nonContDerivSigInfoPrevVal" , } ; mxArray * ss =
mxCreateStructMatrix ( 1 , 1 , 6 , simStateFieldNames ) ; { mxArray *
mdlrefDW = mr_Idq_core_control_GetDWork ( ssGetDWork ( S , 0 ) ) ;
mxSetFieldByNumber ( ss , 0 , 1 , mdlrefDW ) ; } { mxArray * data =
mr_Idq_core_control_GetSimStateDisallowedBlocks ( ) ; mxSetFieldByNumber ( ss
, 0 , 2 , data ) ; } ; mxSetFieldByNumber ( ss , 0 , 3 , mxCreateDoubleScalar
( ( double ) ssGetTNext ( S ) ) ) ; mxSetFieldByNumber ( ss , 0 , 4 ,
mxCreateDoubleScalar ( ( double ) ssGetTNextTid ( S ) ) ) ; return ss ; }
#if !defined(MDL_SIM_STATE)
#define MDL_SIM_STATE
#endif
static void mdlSetSimState ( SimStruct * S , const mxArray * ss ) {
mr_Idq_core_control_SetDWork ( ssGetDWork ( S , 0 ) , mxGetFieldByNumber ( ss
, 0 , 1 ) ) ; ssSetTNext ( S , ( time_T ) mxGetScalar ( mxGetFieldByNumber (
ss , 0 , 3 ) ) ) ; ssSetTNextTid ( S , ( int_T ) mxGetScalar (
mxGetFieldByNumber ( ss , 0 , 4 ) ) ) ; }
#ifdef MATLAB_MEX_FILE 
#include "simulink.c"
#include "fixedpoint.c"
#else
#error Assertion failed: file must be compiled as a MEX-file
#endif
