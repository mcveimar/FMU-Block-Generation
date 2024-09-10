#ifndef RTW_HEADER_CB_core_control_h_
#define RTW_HEADER_CB_core_control_h_
#ifndef CB_core_control_COMMON_INCLUDES_
#define CB_core_control_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "CB_core_control_types.h"
#include "model_reference_types.h"
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include "rt_nonfinite.h"
#include <stddef.h>
typedef struct { real32_T clowlyacfy [ 2 ] ; real32_T ephjadtbu4 [ 3 ] ;
boolean_T mdupfrno3v ; boolean_T jzq0p0pnmo ; } mcp2cnxzhw ; typedef struct {
real32_T prapkqmbhn [ 3 ] ; int8_T cgtgt4zn0n ; uint8_T bd4e0eq5em ; }
jombyeybf4 ; struct duii3t1wgqn_ { real_T P_0 ; real_T P_1 ; real_T P_2 ;
real32_T P_3 ; real32_T P_4 ; real32_T P_5 ; real32_T P_6 ; real32_T P_7 ;
real32_T P_8 ; real32_T P_9 ; real32_T P_10 ; real32_T P_11 ; real32_T P_12 [
3 ] ; } ; struct ljanbhxhkp { struct SimStruct_tag * _mdlRefSfcnS ; const
rtTimingBridge * timingBridge ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress [
1 ] ; int32_T * vardimsAddress [ 1 ] ; RTWLoggingFcnPtr loggingPtrs [ 1 ] ;
sysRanDType * systemRan [ 3 ] ; int_T systemTid [ 3 ] ; } DataMapInfo ;
struct { int_T mdlref_GlobalTID [ 2 ] ; } Timing ; } ; typedef struct {
mcp2cnxzhw rtb ; jombyeybf4 rtdw ; g300xrfxoz rtm ; } bh3neqetwem ; extern
void m3e4cqcnxy ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T
mdlref_TID1 , g300xrfxoz * const k1irebyn4b , mcp2cnxzhw * localB ,
jombyeybf4 * localDW , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_CB_core_control_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_CB_core_control_GetDWork (
const bh3neqetwem * mdlrefDW ) ; extern void mr_CB_core_control_SetDWork (
bh3neqetwem * mdlrefDW , const mxArray * ssDW ) ; extern void
mr_CB_core_control_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_CB_core_control_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * CB_core_control_GetCAPIStaticMap ( void ) ;
extern void jwkq2zcfvb ( g300xrfxoz * const k1irebyn4b , jombyeybf4 * localDW
) ; extern void fviyn2acc5 ( g300xrfxoz * const k1irebyn4b , jombyeybf4 *
localDW ) ; extern void mp1ci1jqga ( mcp2cnxzhw * localB ) ; extern void
idvm0hwalp ( mcp2cnxzhw * localB , jombyeybf4 * localDW ) ; extern void
CB_core_control ( const real32_T ek0p5zzs5m [ 3 ] , const real32_T hdefei1dzg
[ 3 ] , const boolean_T * hfeqs2nxke , real32_T b4ij5hmki2 [ 3 ] , real32_T
k40tz4mu1w [ 3 ] , mcp2cnxzhw * localB , jombyeybf4 * localDW ) ; extern void
CB_core_controlTID1 ( mcp2cnxzhw * localB ) ; extern void giuyfjohpx (
g300xrfxoz * const k1irebyn4b ) ;
#endif
