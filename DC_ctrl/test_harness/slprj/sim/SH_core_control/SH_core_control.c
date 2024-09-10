#include "SH_core_control.h"
#include "rtwtypes.h"
#include "SH_core_control_private.h"
#include <string.h>
#include "SH_core_control_capi.h"
#include "LC_core_control.h"
#include "I_core_limit.h"
#include "DC_core_control.h"
#include "HC_core_compensation_all.h"
#include "rt_nonfinite.h"
static RegMdlInfo rtMdlInfo_SH_core_control [ 49 ] = { { "ooosbidteo0" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "SH_core_control" } , {
"bxvfee4ud3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SH_core_control" } , { "gwp3lygdy1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SH_core_control" } , { "l12pkghlbr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SH_core_control" } ,
{ "boarypui4x" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SH_core_control" } , { "m4ecvua3v5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SH_core_control" } , { "b1x11naxta" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SH_core_control" } ,
{ "hldhjhc133" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SH_core_control" } , { "gypk3ddqyp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SH_core_control" } , { "gqxslduwvz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SH_core_control" } ,
{ "mth5y3thyb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SH_core_control" } , { "c1utqsary3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SH_core_control" } , { "o0dgt5t3tx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SH_core_control" } ,
{ "ftsh5sbept" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SH_core_control" } , { "ihdwzm0kcx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SH_core_control" } , { "bl0nzwyhlh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SH_core_control" } ,
{ "gd2n2uwyxp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SH_core_control" } , { "bsppiyrk1l" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SH_core_control" } , { "ktdw0mx3kq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SH_core_control" } ,
{ "pvt2bnlwf0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SH_core_control" } , { "few0m1phgt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SH_core_control" } , { "pz102t5nqf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SH_core_control" } ,
{ "nrb52ovgbk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SH_core_control" } , { "hdmvvaek51" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SH_core_control" } , { "SH_core_control" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "mmfotkqm1a" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "SH_core_control" } ,
{ "hl2sq3vqmq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"SH_core_control" } , { "g0zk2atzxj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "SH_core_control" } , { "otekkx3ztfm" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_CGpT4gwUGij2SH370sAOtB" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_fgQpcmTKTqImFW8cOMYy2C" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "struct_QhSrPys7qlAZiRmzX2mo5F" , MDL_INFO_ID_DATA_TYPE , 0 , -
1 , ( NULL ) } , { "go5yews2a2e" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "gu5dd3cd3nc" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"jfe402omtci" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_SH_core_control_GetSimStateDisallowedBlocks" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "SH_core_control" } , {
"mr_SH_core_control_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "SH_core_control" } , {
"mr_SH_core_control_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "SH_core_control" } , {
"mr_SH_core_control_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "SH_core_control" } , {
"mr_SH_core_control_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "SH_core_control" } , {
"mr_SH_core_control_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "SH_core_control" } , {
"mr_SH_core_control_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "SH_core_control" } , {
"mr_SH_core_control_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "SH_core_control" } , {
"mr_SH_core_control_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "SH_core_control" } , {
"mr_SH_core_control_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "SH_core_control" } , { "mr_SH_core_control_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "SH_core_control" } , {
"mr_SH_core_control_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void
* ) "SH_core_control" } , { "SH_core_control.h" , MDL_INFO_MODEL_FILENAME , 0
, - 1 , ( NULL ) } , { "SH_core_control.c" , MDL_INFO_MODEL_FILENAME , 0 , -
1 , ( void * ) "SH_core_control" } } ; oywvaua2qy2 oywvaua2qy = { 0.0F , 0.0F
, 0.0F } ; void few0m1phgt ( ftsh5sbept * localB , o0dgt5t3tx * localDW ) {
int32_T i ; for ( i = 0 ; i < 18 ; i ++ ) { localDW -> nng2bawhua [ i ] =
oywvaua2qy . P_2 ; } localDW -> aa5ydd4hrb [ 0 ] = oywvaua2qy . P_3 ; localDW
-> dutdlgd5uj [ 0 ] = oywvaua2qy . P_4 ; localDW -> aa5ydd4hrb [ 1 ] =
oywvaua2qy . P_3 ; localDW -> dutdlgd5uj [ 1 ] = oywvaua2qy . P_4 ; localDW
-> aa5ydd4hrb [ 2 ] = oywvaua2qy . P_3 ; localDW -> dutdlgd5uj [ 2 ] =
oywvaua2qy . P_4 ; oy0qujxpgs ( & ( localDW -> etqgqqb2ch . rtdw ) ) ;
gjjqaawgpo ( & ( localDW -> fj2mqrj3is . rtm ) , & ( localDW -> fj2mqrj3is .
rtdw ) ) ; k1zlgnkq11 ( & ( localDW -> ceec0oyspz . rtdw ) ) ; ft0mlz22gp ( &
localB -> p4unsei2vn [ 0 ] , & localB -> ibcsd1wssl [ 0 ] , & ( localDW ->
piei4df4ag . rtb ) , & ( localDW -> piei4df4ag . rtdw ) ) ; } void pvt2bnlwf0
( o0dgt5t3tx * localDW ) { int32_T i ; for ( i = 0 ; i < 18 ; i ++ ) {
localDW -> nng2bawhua [ i ] = oywvaua2qy . P_2 ; } localDW -> aa5ydd4hrb [ 0
] = oywvaua2qy . P_3 ; localDW -> dutdlgd5uj [ 0 ] = oywvaua2qy . P_4 ;
localDW -> aa5ydd4hrb [ 1 ] = oywvaua2qy . P_3 ; localDW -> dutdlgd5uj [ 1 ]
= oywvaua2qy . P_4 ; localDW -> aa5ydd4hrb [ 2 ] = oywvaua2qy . P_3 ; localDW
-> dutdlgd5uj [ 2 ] = oywvaua2qy . P_4 ; ekvlsf2l1w ( & ( localDW ->
etqgqqb2ch . rtdw ) ) ; kzeaax43ft ( & ( localDW -> fj2mqrj3is . rtm ) , & (
localDW -> fj2mqrj3is . rtdw ) ) ; d0i35w3ede ( & ( localDW -> ceec0oyspz .
rtdw ) ) ; } void bsppiyrk1l ( ftsh5sbept * localB , o0dgt5t3tx * localDW ) {
g1dg5uroo3 ( & localB -> ibcsd1wssl [ 0 ] , & ( localDW -> piei4df4ag . rtb )
, & ( localDW -> piei4df4ag . rtdw ) ) ; } void nrb52ovgbk ( o0dgt5t3tx *
localDW ) { hefhsp2lgr ( & ( localDW -> etqgqqb2ch . rtdw ) ) ; plud4shqa4 (
& ( localDW -> piei4df4ag . rtb ) ) ; kbadssudxg ( & ( localDW -> fj2mqrj3is
. rtb ) ) ; i5ltjfz1ee ( & ( localDW -> ceec0oyspz . rtdw ) ) ; } void
SH_core_control ( g0zk2atzxj * const ob2yydonjz , const real32_T eqhwqmkirz [
3 ] , const boolean_T * hf3ixuspm0 , const real32_T krb0v5ajkv [ 3 ] , const
boolean_T * f5cfhvhrbc , const real32_T * ovryma2hyb , const real32_T *
jfi3kzdglc , const boolean_T * ol11pn4kwk , const boolean_T * jb0o103acl ,
const real32_T cpyvmcwh5j [ 18 ] , const real32_T lawg0znqbs [ 18 ] , const
real32_T flqoyfer1o [ 18 ] , const real32_T gegp3clne1 [ 18 ] , real32_T
mw0f2npwk2 [ 3 ] , real32_T pthxvra2sf [ 3 ] , ftsh5sbept * localB ,
o0dgt5t3tx * localDW ) { real32_T c4xjppb3oj [ 3 ] ; real32_T dqkmetmqvr [ 3
] ; real32_T fvbzh3gsk4 ; real32_T ntsmje4sfp ; real32_T m4pcihdcqz ;
real32_T bkdexoc50i [ 18 ] ; real32_T galdxrtj1b [ 18 ] ; real32_T dcnke0rxu3
[ 18 ] ; real32_T dtx5qpd52x [ 3 ] ; if ( rtmIsSampleHit ( ob2yydonjz , 1 , 0
) ) { memcpy ( & localB -> dgg0ublhbc [ 0 ] , & localDW -> nng2bawhua [ 0 ] ,
18U * sizeof ( real32_T ) ) ; localB -> lqqbomot3p [ 0 ] = localDW ->
aa5ydd4hrb [ 0 ] ; localB -> lqqbomot3p [ 1 ] = localDW -> aa5ydd4hrb [ 1 ] ;
localB -> lqqbomot3p [ 2 ] = localDW -> aa5ydd4hrb [ 2 ] ; localB ->
m1dnlxpmmu [ 0 ] = localDW -> dutdlgd5uj [ 0 ] ; localB -> m1dnlxpmmu [ 1 ] =
localDW -> dutdlgd5uj [ 1 ] ; localB -> m1dnlxpmmu [ 2 ] = localDW ->
dutdlgd5uj [ 2 ] ; LC_core_control ( & eqhwqmkirz [ 0 ] , & localB ->
lqqbomot3p [ 0 ] , hf3ixuspm0 , & krb0v5ajkv [ 0 ] , & localB -> m1dnlxpmmu [
0 ] , f5cfhvhrbc , & localB -> f3jjb1zpk0 [ 0 ] , & c4xjppb3oj [ 0 ] , &
pthxvra2sf [ 0 ] , & dqkmetmqvr [ 0 ] , & ( localDW -> etqgqqb2ch . rtdw ) )
; } DC_core_control ( ovryma2hyb , jfi3kzdglc , ol11pn4kwk , & fvbzh3gsk4 , &
ntsmje4sfp , & m4pcihdcqz , & ( localDW -> fj2mqrj3is . rtb ) , & ( localDW
-> fj2mqrj3is . rtdw ) ) ; if ( * ol11pn4kwk ) { localB -> a5priwfmpr [ 0 ] =
m4pcihdcqz ; localB -> a5priwfmpr [ 1 ] = m4pcihdcqz ; localB -> a5priwfmpr [
2 ] = m4pcihdcqz ; } else { localB -> a5priwfmpr [ 0 ] = 0.0F ; localB ->
a5priwfmpr [ 1 ] = 0.0F ; localB -> a5priwfmpr [ 2 ] = 0.0F ; } if (
rtmIsSampleHit ( ob2yydonjz , 1 , 0 ) ) { HC_core_compensation_all ( &
cpyvmcwh5j [ 0 ] , & flqoyfer1o [ 0 ] , jb0o103acl , &
rtP__shuntHarmonicsCorrected2f2fmuGenerationDictionay_sldd_ [ 0 ] , &
lawg0znqbs [ 0 ] , & gegp3clne1 [ 0 ] , & localB -> dgg0ublhbc [ 0 ] , &
bkdexoc50i [ 0 ] , & galdxrtj1b [ 0 ] , & dcnke0rxu3 [ 0 ] , & ( localDW ->
ceec0oyspz . rtb ) , & ( localDW -> ceec0oyspz . rtdw ) ) ; I_core_limit ( &
( localDW -> piei4df4ag . rtm ) , & localB -> a5priwfmpr [ 0 ] , & c4xjppb3oj
[ 0 ] , & dqkmetmqvr [ 0 ] , & dcnke0rxu3 [ 0 ] , & localB -> p4unsei2vn [ 0
] , & localB -> ibcsd1wssl [ 0 ] , & localB -> gn3eogbz4c [ 0 ] , &
dtx5qpd52x [ 0 ] , & ( localDW -> piei4df4ag . rtb ) , & ( localDW ->
piei4df4ag . rtdw ) ) ; } mw0f2npwk2 [ 0 ] = localB -> a5priwfmpr [ 0 ] +
localB -> f3jjb1zpk0 [ 0 ] ; mw0f2npwk2 [ 1 ] = localB -> a5priwfmpr [ 1 ] +
localB -> f3jjb1zpk0 [ 1 ] ; mw0f2npwk2 [ 2 ] = localB -> a5priwfmpr [ 2 ] +
localB -> f3jjb1zpk0 [ 2 ] ; } void SH_core_controlTID2 ( o0dgt5t3tx *
localDW ) { LC_core_controlTID1 ( & ( localDW -> etqgqqb2ch . rtdw ) ) ;
I_core_limitTID1 ( & ( localDW -> piei4df4ag . rtb ) , & ( localDW ->
piei4df4ag . rtdw ) ) ; DC_core_controlTID1 ( & ( localDW -> fj2mqrj3is . rtb
) ) ; } void ktdw0mx3kq ( g0zk2atzxj * const ob2yydonjz , const boolean_T *
ol11pn4kwk , ftsh5sbept * localB , o0dgt5t3tx * localDW ) { if (
rtmIsSampleHit ( ob2yydonjz , 1 , 0 ) ) { memcpy ( & localDW -> nng2bawhua [
0 ] , & localB -> p4unsei2vn [ 0 ] , 18U * sizeof ( real32_T ) ) ; localDW ->
aa5ydd4hrb [ 0 ] = localB -> ibcsd1wssl [ 0 ] ; localDW -> aa5ydd4hrb [ 1 ] =
localB -> ibcsd1wssl [ 1 ] ; localDW -> aa5ydd4hrb [ 2 ] = localB ->
ibcsd1wssl [ 2 ] ; localDW -> dutdlgd5uj [ 0 ] = localB -> gn3eogbz4c [ 0 ] ;
localDW -> dutdlgd5uj [ 1 ] = localB -> gn3eogbz4c [ 1 ] ; localDW ->
dutdlgd5uj [ 2 ] = localB -> gn3eogbz4c [ 2 ] ; kstupqmgsy ( & ( localDW ->
etqgqqb2ch . rtdw ) ) ; } jek00gbgan ( ol11pn4kwk , & ( localDW -> fj2mqrj3is
. rtb ) , & ( localDW -> fj2mqrj3is . rtdw ) ) ; if ( rtmIsSampleHit (
ob2yydonjz , 1 , 0 ) ) { d5cxoj21dh ( & ( localDW -> ceec0oyspz . rtdw ) ) ;
} } void bl0nzwyhlh ( o0dgt5t3tx * localDW , g0zk2atzxj * const ob2yydonjz )
{ nan4o5p35k ( & ( localDW -> etqgqqb2ch . rtdw ) , & ( localDW -> etqgqqb2ch
. rtm ) ) ; mxg05prz3j ( & ( localDW -> piei4df4ag . rtm ) ) ; ksotd3pkgl ( &
( localDW -> fj2mqrj3is . rtm ) ) ; gefkexhyzf ( & ( localDW -> ceec0oyspz .
rtdw ) , & ( localDW -> ceec0oyspz . rtm ) ) ; if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( ob2yydonjz ->
_mdlRefSfcnS , "SH_core_control" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void pz102t5nqf (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , g0zk2atzxj * const ob2yydonjz , ftsh5sbept * localB ,
o0dgt5t3tx * localDW , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN ( sizeof ( real_T )
) ; ( void ) memset ( ( void * ) ob2yydonjz , 0 , sizeof ( g0zk2atzxj ) ) ;
ob2yydonjz -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; ob2yydonjz ->
Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; ob2yydonjz -> Timing .
mdlref_GlobalTID [ 2 ] = mdlref_TID2 ; ob2yydonjz -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( ob2yydonjz -> _mdlRefSfcnS , "SH_core_control" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { int32_T i ; for ( i = 0 ; i
< 18 ; i ++ ) { localB -> dgg0ublhbc [ i ] = 0.0F ; } for ( i = 0 ; i < 18 ;
i ++ ) { localB -> p4unsei2vn [ i ] = 0.0F ; } localB -> lqqbomot3p [ 0 ] =
0.0F ; localB -> lqqbomot3p [ 1 ] = 0.0F ; localB -> lqqbomot3p [ 2 ] = 0.0F
; localB -> m1dnlxpmmu [ 0 ] = 0.0F ; localB -> m1dnlxpmmu [ 1 ] = 0.0F ;
localB -> m1dnlxpmmu [ 2 ] = 0.0F ; localB -> f3jjb1zpk0 [ 0 ] = 0.0F ;
localB -> f3jjb1zpk0 [ 1 ] = 0.0F ; localB -> f3jjb1zpk0 [ 2 ] = 0.0F ;
localB -> a5priwfmpr [ 0 ] = 0.0F ; localB -> a5priwfmpr [ 1 ] = 0.0F ;
localB -> a5priwfmpr [ 2 ] = 0.0F ; localB -> ibcsd1wssl [ 0 ] = 0.0F ;
localB -> ibcsd1wssl [ 1 ] = 0.0F ; localB -> ibcsd1wssl [ 2 ] = 0.0F ;
localB -> gn3eogbz4c [ 0 ] = 0.0F ; localB -> gn3eogbz4c [ 1 ] = 0.0F ;
localB -> gn3eogbz4c [ 2 ] = 0.0F ; } ( void ) memset ( ( void * ) localDW ,
0 , sizeof ( o0dgt5t3tx ) ) ; { int32_T i ; for ( i = 0 ; i < 18 ; i ++ ) {
localDW -> nng2bawhua [ i ] = 0.0F ; } } localDW -> aa5ydd4hrb [ 0 ] = 0.0F ;
localDW -> aa5ydd4hrb [ 1 ] = 0.0F ; localDW -> aa5ydd4hrb [ 2 ] = 0.0F ;
localDW -> dutdlgd5uj [ 0 ] = 0.0F ; localDW -> dutdlgd5uj [ 1 ] = 0.0F ;
localDW -> dutdlgd5uj [ 2 ] = 0.0F ; SH_core_control_InitializeDataMapInfo (
ob2yydonjz , localDW , sysRanPtr , contextTid ) ; fhctpdvbbm ( _mdlRefSfcnS ,
mdlref_TID1 , mdlref_TID2 , & ( localDW -> etqgqqb2ch . rtm ) , & ( localDW
-> etqgqqb2ch . rtdw ) , ob2yydonjz -> DataMapInfo . systemRan [ 0 ] ,
ob2yydonjz -> DataMapInfo . systemTid [ 0 ] , & ( ob2yydonjz -> DataMapInfo .
mmi ) , "SH_core_control/FLC_Model" , 0 , - 1 ) ; etkjludo35 ( _mdlRefSfcnS ,
mdlref_TID1 , mdlref_TID2 , & ( localDW -> piei4df4ag . rtm ) , & ( localDW
-> piei4df4ag . rtb ) , & ( localDW -> piei4df4ag . rtdw ) , ob2yydonjz ->
DataMapInfo . systemRan [ 0 ] , ob2yydonjz -> DataMapInfo . systemTid [ 0 ] ,
& ( ob2yydonjz -> DataMapInfo . mmi ) , "SH_core_control/Model" , 1 , - 1 ) ;
fjqwd4jqxv ( _mdlRefSfcnS , mdlref_TID0 , mdlref_TID2 , & ( localDW ->
fj2mqrj3is . rtm ) , & ( localDW -> fj2mqrj3is . rtb ) , & ( localDW ->
fj2mqrj3is . rtdw ) , ob2yydonjz -> DataMapInfo . systemRan [ 0 ] ,
ob2yydonjz -> DataMapInfo . systemTid [ 0 ] , & ( ob2yydonjz -> DataMapInfo .
mmi ) , "SH_core_control/Model1" , 2 , - 1 ) ; cezqaqh0pi ( _mdlRefSfcnS ,
mdlref_TID1 , mdlref_TID2 , & ( localDW -> ceec0oyspz . rtm ) , & ( localDW
-> ceec0oyspz . rtb ) , & ( localDW -> ceec0oyspz . rtdw ) , ob2yydonjz ->
DataMapInfo . systemRan [ 0 ] , ob2yydonjz -> DataMapInfo . systemTid [ 0 ] ,
& ( ob2yydonjz -> DataMapInfo . mmi ) , "SH_core_control/Model2" , 3 , - 1 )
; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL ) ) ) {
rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & ( ob2yydonjz ->
DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( ob2yydonjz -> DataMapInfo . mmi ,
rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex ( ob2yydonjz ->
DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void
mr_SH_core_control_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo
= false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ;
if ( regSubmodelsMdlinfo ) { mr_LC_core_control_MdlInfoRegFcn ( mdlRefSfcnS ,
"LC_core_control" , retVal ) ; if ( * retVal == 0 ) return ; * retVal = 0 ;
mr_I_core_limit_MdlInfoRegFcn ( mdlRefSfcnS , "I_core_limit" , retVal ) ; if
( * retVal == 0 ) return ; * retVal = 0 ; mr_DC_core_control_MdlInfoRegFcn (
mdlRefSfcnS , "DC_core_control" , retVal ) ; if ( * retVal == 0 ) return ; *
retVal = 0 ; mr_HC_core_compensation_all_MdlInfoRegFcn ( mdlRefSfcnS ,
"HC_core_compensation_all" , retVal ) ; if ( * retVal == 0 ) return ; *
retVal = 0 ; } } * retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS ,
modelName , rtMdlInfo_SH_core_control , 49 ) ; * retVal = 1 ; } static void
mr_SH_core_control_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int
j , const void * srcData , size_t numBytes ) ; static void
mr_SH_core_control_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int
j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_SH_core_control_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_SH_core_control_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_SH_core_control_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) ; static void
mr_SH_core_control_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_SH_core_control_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_SH_core_control_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_SH_core_control_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_SH_core_control_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_SH_core_control_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_SH_core_control_restoreDataFromMxArrayWithOffset
( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_SH_core_control_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_SH_core_control_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_SH_core_control_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_SH_core_control_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_SH_core_control_GetDWork ( const
ooosbidteo0 * mdlrefDW ) { static const char_T * ssDWFieldNames [ 3 ] = {
"rtb" , "rtdw" , "NULL->rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix (
1 , 1 , 3 , ssDWFieldNames ) ; mr_SH_core_control_cacheDataAsMxArray ( ssDW ,
0 , 0 , ( const void * ) & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) )
; { static const char_T * rtdwDataFieldNames [ 7 ] = {
"mdlrefDW->rtdw.etqgqqb2ch" , "mdlrefDW->rtdw.fj2mqrj3is" ,
"mdlrefDW->rtdw.ceec0oyspz" , "mdlrefDW->rtdw.piei4df4ag" ,
"mdlrefDW->rtdw.nng2bawhua" , "mdlrefDW->rtdw.aa5ydd4hrb" ,
"mdlrefDW->rtdw.dutdlgd5uj" , } ; mxArray * rtdwData = mxCreateStructMatrix (
1 , 1 , 7 , rtdwDataFieldNames ) ; { mxArray * varData =
mr_LC_core_control_GetDWork ( & ( mdlrefDW -> rtdw . etqgqqb2ch ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 0 , varData ) ; } { mxArray * varData =
mr_DC_core_control_GetDWork ( & ( mdlrefDW -> rtdw . fj2mqrj3is ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 1 , varData ) ; } { mxArray * varData =
mr_HC_core_compensation_all_GetDWork ( & ( mdlrefDW -> rtdw . ceec0oyspz ) )
; mxSetFieldByNumber ( rtdwData , 0 , 2 , varData ) ; } { mxArray * varData =
mr_I_core_limit_GetDWork ( & ( mdlrefDW -> rtdw . piei4df4ag ) ) ;
mxSetFieldByNumber ( rtdwData , 0 , 3 , varData ) ; }
mr_SH_core_control_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * ) &
( mdlrefDW -> rtdw . nng2bawhua ) , sizeof ( mdlrefDW -> rtdw . nng2bawhua )
) ; mr_SH_core_control_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void *
) & ( mdlrefDW -> rtdw . aa5ydd4hrb ) , sizeof ( mdlrefDW -> rtdw .
aa5ydd4hrb ) ) ; mr_SH_core_control_cacheDataAsMxArray ( rtdwData , 0 , 6 , (
const void * ) & ( mdlrefDW -> rtdw . dutdlgd5uj ) , sizeof ( mdlrefDW ->
rtdw . dutdlgd5uj ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } (
void ) mdlrefDW ; return ssDW ; } void mr_SH_core_control_SetDWork (
ooosbidteo0 * mdlrefDW , const mxArray * ssDW ) { ( void ) ssDW ; ( void )
mdlrefDW ; mr_SH_core_control_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtb ) , ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const
mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_LC_core_control_SetDWork ( & ( mdlrefDW -> rtdw . etqgqqb2ch ) ,
mxGetFieldByNumber ( rtdwData , 0 , 0 ) ) ; mr_DC_core_control_SetDWork ( & (
mdlrefDW -> rtdw . fj2mqrj3is ) , mxGetFieldByNumber ( rtdwData , 0 , 1 ) ) ;
mr_HC_core_compensation_all_SetDWork ( & ( mdlrefDW -> rtdw . ceec0oyspz ) ,
mxGetFieldByNumber ( rtdwData , 0 , 2 ) ) ; mr_I_core_limit_SetDWork ( & (
mdlrefDW -> rtdw . piei4df4ag ) , mxGetFieldByNumber ( rtdwData , 0 , 3 ) ) ;
mr_SH_core_control_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
nng2bawhua ) , rtdwData , 0 , 4 , sizeof ( mdlrefDW -> rtdw . nng2bawhua ) )
; mr_SH_core_control_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. aa5ydd4hrb ) , rtdwData , 0 , 5 , sizeof ( mdlrefDW -> rtdw . aa5ydd4hrb )
) ; mr_SH_core_control_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . dutdlgd5uj ) , rtdwData , 0 , 6 , sizeof ( mdlrefDW -> rtdw .
dutdlgd5uj ) ) ; } } void mr_SH_core_control_RegisterSimStateChecksum (
SimStruct * S ) { const uint32_T chksum [ 4 ] = { 1050961172U , 2953030208U ,
1782951433U , 3043424590U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"SH_core_control" , & chksum [ 0 ] ) ;
mr_DC_core_control_RegisterSimStateChecksum ( S ) ;
mr_HC_core_compensation_all_RegisterSimStateChecksum ( S ) ;
mr_I_core_limit_RegisterSimStateChecksum ( S ) ;
mr_LC_core_control_RegisterSimStateChecksum ( S ) ; } mxArray *
mr_SH_core_control_GetSimStateDisallowedBlocks ( ) { mxArray * data = NULL ;
size_t numChildrenWithDisallowedBlocks = 0 ; size_t numBlocks = 0 ; mxArray *
disallowedBlocksInChild [ 4 ] ; disallowedBlocksInChild [ 0 ] =
mr_DC_core_control_GetSimStateDisallowedBlocks ( ) ; disallowedBlocksInChild
[ 1 ] = mr_HC_core_compensation_all_GetSimStateDisallowedBlocks ( ) ;
disallowedBlocksInChild [ 2 ] = mr_I_core_limit_GetSimStateDisallowedBlocks (
) ; disallowedBlocksInChild [ 3 ] =
mr_LC_core_control_GetSimStateDisallowedBlocks ( ) ; { size_t i ; for ( i = 0
; i < 4 ; ++ i ) { mxArray * data_i = disallowedBlocksInChild [ i ] ; if ( (
NULL ) != data_i ) { if ( 0 == numChildrenWithDisallowedBlocks ++ ) { data =
data_i ; } numBlocks += mxGetM ( data_i ) ; } } } if (
numChildrenWithDisallowedBlocks > 1 ) { mwIndex subs [ 2 ] , offset ; data =
mxCreateCellMatrix ( numBlocks , 3 ) ; subs [ 0 ] = 0 ; { size_t i ; for ( i
= 0 ; i < 4 ; ++ i ) { mxArray * data_i = disallowedBlocksInChild [ i ] ; if
( ( NULL ) != data_i ) { mwIndex subs_i [ 2 ] , offset_i ; const mwIndex
numRows_i = ( mwIndex ) mxGetM ( data_i ) ; for ( subs_i [ 0 ] = 0 ; subs_i [
0 ] < numRows_i ; ++ ( subs_i [ 0 ] ) ) { mwIndex j ; for ( j = 0 ; j < 3 ;
++ j ) { mxArray * data_ij ; subs_i [ 1 ] = j ; offset_i =
mxCalcSingleSubscript ( data_i , 2 , subs_i ) ; data_ij = mxGetCell ( data_i
, offset_i ) ; data_ij = mxDuplicateArray ( data_ij ) ; subs [ 1 ] = j ;
offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , data_ij ) ; } ++ ( subs [ 0 ] ) ; } mxDestroyArray ( data_i ) ; } }
} } return data ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
