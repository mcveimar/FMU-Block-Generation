#ifndef RTW_HEADER_SH_core_control_h_
#define RTW_HEADER_SH_core_control_h_
#ifndef SH_core_control_COMMON_INCLUDES_
#define SH_core_control_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "SH_core_control_types.h"
#include "LC_core_control.h"
#include "DC_core_control.h"
#include "HC_core_compensation_all.h"
#include "I_core_limit.h"
#include "rtGetInf.h"
#include "model_reference_types.h"
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include "rt_nonfinite.h"
#include <stddef.h>
typedef struct { real32_T dgg0ublhbc [ 18 ] ; real32_T lqqbomot3p [ 3 ] ;
real32_T m1dnlxpmmu [ 3 ] ; real32_T f3jjb1zpk0 [ 3 ] ; real32_T a5priwfmpr [
3 ] ; real32_T p4unsei2vn [ 18 ] ; real32_T ibcsd1wssl [ 3 ] ; real32_T
gn3eogbz4c [ 3 ] ; } ftsh5sbept ; typedef struct { real32_T nng2bawhua [ 18 ]
; real32_T aa5ydd4hrb [ 3 ] ; real32_T dutdlgd5uj [ 3 ] ; jfe402omtci
etqgqqb2ch ; go5yews2a2e fj2mqrj3is ; otekkx3ztfm ceec0oyspz ; gu5dd3cd3nc
piei4df4ag ; } o0dgt5t3tx ; struct oywvaua2qy2_ { real32_T P_2 ; real32_T P_3
; real32_T P_4 ; } ; struct hl2sq3vqmq { struct SimStruct_tag * _mdlRefSfcnS
; const rtTimingBridge * timingBridge ; struct { rtwCAPI_ModelMappingInfo mmi
; rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; void * dataAddress
[ 3 ] ; int32_T * vardimsAddress [ 3 ] ; RTWLoggingFcnPtr loggingPtrs [ 3 ] ;
rtwCAPI_ModelMappingInfo * childMMI [ 4 ] ; sysRanDType * systemRan [ 2 ] ;
int_T systemTid [ 2 ] ; } DataMapInfo ; struct { uint8_T rtmDbBufReadBuf2 ;
uint8_T rtmDbBufWriteBuf2 ; boolean_T rtmDbBufLastBufWr2 ; uint32_T
rtmDbBufClockTick2 [ 2 ] ; int_T mdlref_GlobalTID [ 3 ] ; } Timing ; } ;
typedef struct { ftsh5sbept rtb ; o0dgt5t3tx rtdw ; g0zk2atzxj rtm ; }
ooosbidteo0 ; extern real32_T
rtP__shuntHarmonicsCorrected2f2fmuGenerationDictionay_sldd_ [ 6 ] ; extern
real32_T rtP__shuntMaxRequestedCurrentrms2f2fmuGenerationDictionay_sldd_ ;
extern void pz102t5nqf ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T
mdlref_TID1 , int_T mdlref_TID2 , g0zk2atzxj * const ob2yydonjz , ftsh5sbept
* localB , o0dgt5t3tx * localDW , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_SH_core_control_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_SH_core_control_GetDWork (
const ooosbidteo0 * mdlrefDW ) ; extern void mr_SH_core_control_SetDWork (
ooosbidteo0 * mdlrefDW , const mxArray * ssDW ) ; extern void
mr_SH_core_control_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_SH_core_control_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * SH_core_control_GetCAPIStaticMap ( void ) ;
extern void few0m1phgt ( ftsh5sbept * localB , o0dgt5t3tx * localDW ) ;
extern void pvt2bnlwf0 ( o0dgt5t3tx * localDW ) ; extern void nrb52ovgbk (
o0dgt5t3tx * localDW ) ; extern void bsppiyrk1l ( ftsh5sbept * localB ,
o0dgt5t3tx * localDW ) ; extern void ktdw0mx3kq ( g0zk2atzxj * const
ob2yydonjz , const boolean_T * ol11pn4kwk , ftsh5sbept * localB , o0dgt5t3tx
* localDW ) ; extern void SH_core_control ( g0zk2atzxj * const ob2yydonjz ,
const real32_T eqhwqmkirz [ 3 ] , const boolean_T * hf3ixuspm0 , const
real32_T krb0v5ajkv [ 3 ] , const boolean_T * f5cfhvhrbc , const real32_T *
ovryma2hyb , const real32_T * jfi3kzdglc , const boolean_T * ol11pn4kwk ,
const boolean_T * jb0o103acl , const real32_T cpyvmcwh5j [ 18 ] , const
real32_T lawg0znqbs [ 18 ] , const real32_T flqoyfer1o [ 18 ] , const
real32_T gegp3clne1 [ 18 ] , real32_T mw0f2npwk2 [ 3 ] , real32_T pthxvra2sf
[ 3 ] , ftsh5sbept * localB , o0dgt5t3tx * localDW ) ; extern void
SH_core_controlTID2 ( o0dgt5t3tx * localDW ) ; extern void bl0nzwyhlh (
o0dgt5t3tx * localDW , g0zk2atzxj * const ob2yydonjz ) ;
#endif
