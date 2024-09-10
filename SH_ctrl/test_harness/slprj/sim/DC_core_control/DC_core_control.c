#include "DC_core_control.h"
#include "rtwtypes.h"
#include "DC_core_control_private.h"
#include "mwmathutil.h"
#include "DC_core_control_capi.h"
#include "look1_iflf_binlxpw.h"
#include <string.h>
#include "rt_nonfinite.h"
static RegMdlInfo rtMdlInfo_DC_core_control [ 44 ] = { { "go5yews2a2e" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "DC_core_control" } , {
"cmm3wf4pkg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DC_core_control" } , { "dkq0f05ifj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DC_core_control" } , { "dcshfhxjok" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DC_core_control" } ,
{ "pzqra50qn3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DC_core_control" } , { "mt2oi23qyu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DC_core_control" } , { "jmxianhaqi" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DC_core_control" } ,
{ "naaaauq5rl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DC_core_control" } , { "azhtofxssa" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DC_core_control" } , { "lwvwmxp3a1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DC_core_control" } ,
{ "cq1a1hqngu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DC_core_control" } , { "kaysbnyntq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DC_core_control" } , { "eucybaphjh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DC_core_control" } ,
{ "aijckfrqxd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DC_core_control" } , { "ffbn2vukn5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DC_core_control" } , { "ksotd3pkgl" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DC_core_control" } ,
{ "duaylayw1u" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DC_core_control" } , { "jek00gbgan" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DC_core_control" } , { "kzeaax43ft" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DC_core_control" } ,
{ "gjjqaawgpo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DC_core_control" } , { "fjqwd4jqxv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "DC_core_control" } , { "kbadssudxg" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DC_core_control" } ,
{ "ipeq5wo0if" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DC_core_control" } , { "DC_core_control" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , 0 , ( NULL ) } , { "hkcsg5xhxg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0
, - 1 , ( void * ) "DC_core_control" } , { "nhxng0wf3u" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "DC_core_control" } ,
{ "b1rrm1enxt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"DC_core_control" } , { "struct_QhSrPys7qlAZiRmzX2mo5F" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_fgQpcmTKTqImFW8cOMYy2C" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_CGpT4gwUGij2SH370sAOtB" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "mr_DC_core_control_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DC_core_control" } , {
"mr_DC_core_control_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DC_core_control" } , {
"mr_DC_core_control_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DC_core_control" } , {
"mr_DC_core_control_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DC_core_control" } , {
"mr_DC_core_control_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DC_core_control" } , {
"mr_DC_core_control_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "DC_core_control" } , {
"mr_DC_core_control_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "DC_core_control" } , {
"mr_DC_core_control_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "DC_core_control" } , {
"mr_DC_core_control_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "DC_core_control" } , {
"mr_DC_core_control_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "DC_core_control" } , { "mr_DC_core_control_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "DC_core_control" } , {
"mr_DC_core_control_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void
* ) "DC_core_control" } , { "DC_core_control.h" , MDL_INFO_MODEL_FILENAME , 0
, - 1 , ( NULL ) } , { "DC_core_control.c" , MDL_INFO_MODEL_FILENAME , 0 , -
1 , ( void * ) "DC_core_control" } } ; nr0h43pjsz4 nr0h43pjsz = { 0.2 ,
0.0015915494309189533 , 2.0 , 2.0 , 1.0 , 1.0 , 10.0F , 0.0F , 1.0F , 1.0F ,
- 155.563492F , 2.0F , 155.563492F , 0.0F , 0.0F , 0.0F , { 0.983519435F , -
1.93949258F , 0.983519435F } , { 1.0F , - 1.93949258F , 0.96703887F } , 0.0F
, 0.00026667F , 0.0F , 0.0F , 0.0F , 0.0F , 0.00026667F , 0.0F , 0.0F , 0.0F
, 0.0F , { - 20.0F , - 10.0F , 10.0F , 20.0F } , { - 15.0F , - 10.0F , 10.0F
, 15.0F } , 0.00026667F , - 1.0F , 0.0F , 1 , - 1 , 1 , - 1 } ; void
gjjqaawgpo ( b1rrm1enxt * const di4adofmaf , eucybaphjh * localDW ) {
boolean_T tmp ; localDW -> d4cbfpdwp1 [ 0 ] = nr0h43pjsz . P_18 ; localDW ->
d4cbfpdwp1 [ 1 ] = nr0h43pjsz . P_18 ; localDW -> f1q5n1mrk1 = 0 ; localDW ->
pqmzu4crz5 = 1U ; if ( rtmIsFirstInitCond ( di4adofmaf ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
di4adofmaf -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
di4adofmaf -> _mdlRefSfcnS ) ) ; localDW -> pqmzu4crz5 = ( uint8_T ) ! tmp ;
} else { localDW -> pqmzu4crz5 = 1U ; } } localDW -> nzfipppoom = 0 ; localDW
-> ey2omfatnv = 1U ; if ( rtmIsFirstInitCond ( di4adofmaf ) ) { tmp =
slIsRapidAcceleratorSimulating ( ) ; if ( tmp ) { tmp = (
slIsRapidAcceleratorSimulating ( ) ? ssGetGlobalInitialStatesAvailable (
di4adofmaf -> _mdlRefSfcnS ) : simTgtGlobalInitialStatesAvailable (
di4adofmaf -> _mdlRefSfcnS ) ) ; localDW -> ey2omfatnv = ( uint8_T ) ! tmp ;
} else { localDW -> ey2omfatnv = 1U ; } } localDW -> nfncqiie2c = nr0h43pjsz
. P_7 ; localDW -> pexvtvdckx = 0 ; } void kzeaax43ft ( b1rrm1enxt * const
di4adofmaf , eucybaphjh * localDW ) { boolean_T tmp ; localDW -> d4cbfpdwp1 [
0 ] = nr0h43pjsz . P_18 ; localDW -> d4cbfpdwp1 [ 1 ] = nr0h43pjsz . P_18 ;
localDW -> f1q5n1mrk1 = 0 ; localDW -> pqmzu4crz5 = 1U ; if (
rtmIsFirstInitCond ( di4adofmaf ) ) { tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( di4adofmaf -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( di4adofmaf -> _mdlRefSfcnS ) ) ; localDW
-> pqmzu4crz5 = ( uint8_T ) ! tmp ; } else { localDW -> pqmzu4crz5 = 1U ; } }
localDW -> nzfipppoom = 0 ; localDW -> ey2omfatnv = 1U ; if (
rtmIsFirstInitCond ( di4adofmaf ) ) { tmp = slIsRapidAcceleratorSimulating (
) ; if ( tmp ) { tmp = ( slIsRapidAcceleratorSimulating ( ) ?
ssGetGlobalInitialStatesAvailable ( di4adofmaf -> _mdlRefSfcnS ) :
simTgtGlobalInitialStatesAvailable ( di4adofmaf -> _mdlRefSfcnS ) ) ; localDW
-> ey2omfatnv = ( uint8_T ) ! tmp ; } else { localDW -> ey2omfatnv = 1U ; } }
localDW -> nfncqiie2c = nr0h43pjsz . P_7 ; localDW -> pexvtvdckx = 0 ; } void
kbadssudxg ( aijckfrqxd * localB ) { localB -> mhpfs1adwm [ 0 ] = 0.00026667F
; localB -> mhpfs1adwm [ 1 ] = 0.0F ; localB -> ec20qzqm0n [ 0 ] =
0.00026667F ; localB -> ec20qzqm0n [ 1 ] = 0.0F ; } void DC_core_control (
const real32_T * kopfzko3w0 , const real32_T * isq2f2q3cs , const boolean_T *
czhxjno0eu , real32_T * hhuwn1vhss , real32_T * ejb1rkl1c2 , real32_T *
j05aud4mg5 , aijckfrqxd * localB , eucybaphjh * localDW ) { real32_T
dsv0uor3df ; real32_T alkaerh555 ; real32_T jdzpd022y5 ; real32_T
k4kbkojdnp_p ; real32_T mdlqudn4z1 ; real32_T pxsojhxqlt ; int8_T tmp ;
int8_T tmp_p ; localB -> h3z3xa1nli = ( ( ( real32_T ) ( nr0h43pjsz . P_0 -
localB -> mhpfs1adwm [ 0 ] ) <= nr0h43pjsz . P_14 ) && localB -> edkuo3j5s3 )
; localB -> jhoo1p3ue5 = ( ( ( real32_T ) ( nr0h43pjsz . P_1 - localB ->
ec20qzqm0n [ 0 ] ) <= nr0h43pjsz . P_15 ) && localB -> h5emfzxn1o ) ;
k4kbkojdnp_p = * kopfzko3w0 ; k4kbkojdnp_p -= localDW -> d4cbfpdwp1 [ 0 ] *
nr0h43pjsz . P_17 [ 1 ] ; k4kbkojdnp_p -= localDW -> d4cbfpdwp1 [ 1 ] *
nr0h43pjsz . P_17 [ 2 ] ; localDW -> dgtugyve3p = k4kbkojdnp_p / nr0h43pjsz .
P_17 [ 0 ] ; k4kbkojdnp_p = ( ( nr0h43pjsz . P_16 [ 0 ] * localDW ->
dgtugyve3p + localDW -> d4cbfpdwp1 [ 0 ] * nr0h43pjsz . P_16 [ 1 ] ) +
localDW -> d4cbfpdwp1 [ 1 ] * nr0h43pjsz . P_16 [ 2 ] ) * nr0h43pjsz . P_8 ;
if ( localDW -> pqmzu4crz5 != 0 ) { localDW -> j2kv1drnk1 = k4kbkojdnp_p ; if
( localDW -> j2kv1drnk1 > nr0h43pjsz . P_20 ) { localDW -> j2kv1drnk1 =
nr0h43pjsz . P_20 ; } else if ( localDW -> j2kv1drnk1 < nr0h43pjsz . P_21 ) {
localDW -> j2kv1drnk1 = nr0h43pjsz . P_21 ; } } if ( localB -> jhoo1p3ue5 ||
( localDW -> f1q5n1mrk1 != 0 ) ) { localDW -> j2kv1drnk1 = k4kbkojdnp_p ; if
( localDW -> j2kv1drnk1 > nr0h43pjsz . P_20 ) { localDW -> j2kv1drnk1 =
nr0h43pjsz . P_20 ; } else if ( localDW -> j2kv1drnk1 < nr0h43pjsz . P_21 ) {
localDW -> j2kv1drnk1 = nr0h43pjsz . P_21 ; } } if ( localDW -> j2kv1drnk1 >
nr0h43pjsz . P_22 ) { * hhuwn1vhss = nr0h43pjsz . P_22 ; } else if ( localDW
-> j2kv1drnk1 < nr0h43pjsz . P_23 ) { * hhuwn1vhss = nr0h43pjsz . P_23 ; }
else { * hhuwn1vhss = localDW -> j2kv1drnk1 ; } if ( * czhxjno0eu ) {
mdlqudn4z1 = * isq2f2q3cs ; } else { mdlqudn4z1 = * hhuwn1vhss ; } mdlqudn4z1
*= nr0h43pjsz . P_9 ; if ( localDW -> ey2omfatnv != 0 ) { localDW ->
bsxapokqfo = mdlqudn4z1 ; if ( localDW -> bsxapokqfo > nr0h43pjsz . P_25 ) {
localDW -> bsxapokqfo = nr0h43pjsz . P_25 ; } else if ( localDW -> bsxapokqfo
< nr0h43pjsz . P_26 ) { localDW -> bsxapokqfo = nr0h43pjsz . P_26 ; } } if (
localB -> h3z3xa1nli || ( localDW -> nzfipppoom != 0 ) ) { localDW ->
bsxapokqfo = mdlqudn4z1 ; if ( localDW -> bsxapokqfo > nr0h43pjsz . P_25 ) {
localDW -> bsxapokqfo = nr0h43pjsz . P_25 ; } else if ( localDW -> bsxapokqfo
< nr0h43pjsz . P_26 ) { localDW -> bsxapokqfo = nr0h43pjsz . P_26 ; } } if (
localDW -> bsxapokqfo > nr0h43pjsz . P_27 ) { dsv0uor3df = nr0h43pjsz . P_27
; } else if ( localDW -> bsxapokqfo < nr0h43pjsz . P_28 ) { dsv0uor3df =
nr0h43pjsz . P_28 ; } else { dsv0uor3df = localDW -> bsxapokqfo ; } *
ejb1rkl1c2 = dsv0uor3df - * hhuwn1vhss ; alkaerh555 = look1_iflf_binlxpw ( *
ejb1rkl1c2 , nr0h43pjsz . P_30 , nr0h43pjsz . P_29 , 3U ) ; if ( ( *
czhxjno0eu ) || ( localDW -> pexvtvdckx != 0 ) ) { localDW -> nfncqiie2c =
nr0h43pjsz . P_7 ; } jdzpd022y5 = nr0h43pjsz . P_11 * alkaerh555 + localDW ->
nfncqiie2c ; if ( jdzpd022y5 > nr0h43pjsz . P_12 ) { pxsojhxqlt = jdzpd022y5
- nr0h43pjsz . P_12 ; } else if ( jdzpd022y5 >= nr0h43pjsz . P_10 ) {
pxsojhxqlt = 0.0F ; } else { pxsojhxqlt = jdzpd022y5 - nr0h43pjsz . P_10 ; }
alkaerh555 *= nr0h43pjsz . P_6 ; if ( pxsojhxqlt > nr0h43pjsz . P_33 ) { tmp
= nr0h43pjsz . P_34 ; } else { tmp = nr0h43pjsz . P_35 ; } if ( alkaerh555 >
nr0h43pjsz . P_33 ) { tmp_p = nr0h43pjsz . P_36 ; } else { tmp_p = nr0h43pjsz
. P_37 ; } if ( ( nr0h43pjsz . P_33 != pxsojhxqlt ) && ( tmp == tmp_p ) ) {
localB -> elu01qxjtd = nr0h43pjsz . P_13 ; } else { localB -> elu01qxjtd =
alkaerh555 ; } if ( jdzpd022y5 > nr0h43pjsz . P_12 ) { jdzpd022y5 =
nr0h43pjsz . P_12 ; } else if ( jdzpd022y5 < nr0h43pjsz . P_10 ) { jdzpd022y5
= nr0h43pjsz . P_10 ; } * j05aud4mg5 = nr0h43pjsz . P_32 * jdzpd022y5 ;
jdzpd022y5 = ( real32_T ) muDoubleScalarMax ( localB -> mhpfs1adwm [ 0 ] ,
nr0h43pjsz . P_0 ) ; localB -> hwvi5omlg3 = 1.0F / ( ( real32_T ) (
jdzpd022y5 == 0.0F ) * 2.22044605e-16F + jdzpd022y5 ) * ( mdlqudn4z1 -
dsv0uor3df ) ; mdlqudn4z1 = ( real32_T ) muDoubleScalarMax ( localB ->
ec20qzqm0n [ 0 ] , nr0h43pjsz . P_1 ) ; k4kbkojdnp_p -= * hhuwn1vhss ; localB
-> h5z0gin33a = 1.0F / ( ( real32_T ) ( mdlqudn4z1 == 0.0F ) *
2.22044605e-16F + mdlqudn4z1 ) * k4kbkojdnp_p ; } void DC_core_controlTID1 (
aijckfrqxd * localB ) { localB -> edkuo3j5s3 = ( nr0h43pjsz . P_4 <
nr0h43pjsz . P_2 ) ; localB -> h5emfzxn1o = ( nr0h43pjsz . P_5 < nr0h43pjsz .
P_3 ) ; } void jek00gbgan ( const boolean_T * czhxjno0eu , aijckfrqxd *
localB , eucybaphjh * localDW ) { localDW -> d4cbfpdwp1 [ 1 ] = localDW ->
d4cbfpdwp1 [ 0 ] ; localDW -> d4cbfpdwp1 [ 0 ] = localDW -> dgtugyve3p ;
localDW -> pqmzu4crz5 = 0U ; localDW -> j2kv1drnk1 += nr0h43pjsz . P_19 *
localB -> h5z0gin33a ; if ( localDW -> j2kv1drnk1 > nr0h43pjsz . P_20 ) {
localDW -> j2kv1drnk1 = nr0h43pjsz . P_20 ; } else if ( localDW -> j2kv1drnk1
< nr0h43pjsz . P_21 ) { localDW -> j2kv1drnk1 = nr0h43pjsz . P_21 ; } localDW
-> f1q5n1mrk1 = ( int8_T ) localB -> jhoo1p3ue5 ; localDW -> ey2omfatnv = 0U
; localDW -> bsxapokqfo += nr0h43pjsz . P_24 * localB -> hwvi5omlg3 ; if (
localDW -> bsxapokqfo > nr0h43pjsz . P_25 ) { localDW -> bsxapokqfo =
nr0h43pjsz . P_25 ; } else if ( localDW -> bsxapokqfo < nr0h43pjsz . P_26 ) {
localDW -> bsxapokqfo = nr0h43pjsz . P_26 ; } localDW -> nzfipppoom = (
int8_T ) localB -> h3z3xa1nli ; localDW -> nfncqiie2c += nr0h43pjsz . P_31 *
localB -> elu01qxjtd ; localDW -> pexvtvdckx = ( int8_T ) * czhxjno0eu ; }
void ksotd3pkgl ( b1rrm1enxt * const di4adofmaf ) { if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( di4adofmaf ->
_mdlRefSfcnS , "DC_core_control" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void fjqwd4jqxv (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , b1rrm1enxt
* const di4adofmaf , aijckfrqxd * localB , eucybaphjh * localDW , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) {
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; nr0h43pjsz . P_20 = rtInfF ;
nr0h43pjsz . P_21 = rtMinusInfF ; nr0h43pjsz . P_22 = rtInfF ; nr0h43pjsz .
P_23 = rtMinusInfF ; nr0h43pjsz . P_25 = rtInfF ; nr0h43pjsz . P_26 =
rtMinusInfF ; nr0h43pjsz . P_27 = rtInfF ; nr0h43pjsz . P_28 = rtMinusInfF ;
( void ) memset ( ( void * ) di4adofmaf , 0 , sizeof ( b1rrm1enxt ) ) ;
di4adofmaf -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; di4adofmaf ->
Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; di4adofmaf -> _mdlRefSfcnS =
( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( di4adofmaf -> _mdlRefSfcnS , "DC_core_control" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } ( void ) memset ( ( ( void *
) localB ) , 0 , sizeof ( aijckfrqxd ) ) ; { localB -> mhpfs1adwm [ 0 ] =
0.0F ; localB -> mhpfs1adwm [ 1 ] = 0.0F ; localB -> ec20qzqm0n [ 0 ] = 0.0F
; localB -> ec20qzqm0n [ 1 ] = 0.0F ; localB -> elu01qxjtd = 0.0F ; localB ->
hwvi5omlg3 = 0.0F ; localB -> h5z0gin33a = 0.0F ; } ( void ) memset ( ( void
* ) localDW , 0 , sizeof ( eucybaphjh ) ) ; localDW -> d4cbfpdwp1 [ 0 ] =
0.0F ; localDW -> d4cbfpdwp1 [ 1 ] = 0.0F ; localDW -> j2kv1drnk1 = 0.0F ;
localDW -> bsxapokqfo = 0.0F ; localDW -> nfncqiie2c = 0.0F ; localDW ->
dgtugyve3p = 0.0F ; DC_core_control_InitializeDataMapInfo ( di4adofmaf ,
localDW , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && (
rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( di4adofmaf -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
di4adofmaf -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( di4adofmaf -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } } void mr_DC_core_control_MdlInfoRegFcn ( SimStruct *
mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal = 0 ; {
boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_DC_core_control , 44 ) ; * retVal = 1 ; } static void
mr_DC_core_control_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int
j , const void * srcData , size_t numBytes ) ; static void
mr_DC_core_control_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int
j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_DC_core_control_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_DC_core_control_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_DC_core_control_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) ; static void
mr_DC_core_control_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_DC_core_control_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_DC_core_control_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_DC_core_control_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_DC_core_control_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_DC_core_control_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_DC_core_control_restoreDataFromMxArrayWithOffset
( void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_DC_core_control_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_DC_core_control_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_DC_core_control_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_DC_core_control_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_DC_core_control_GetDWork ( const
go5yews2a2e * mdlrefDW ) { static const char_T * ssDWFieldNames [ 3 ] = {
"rtb" , "rtdw" , "NULL->rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix (
1 , 1 , 3 , ssDWFieldNames ) ; mr_DC_core_control_cacheDataAsMxArray ( ssDW ,
0 , 0 , ( const void * ) & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) )
; { static const char_T * rtdwDataFieldNames [ 10 ] = {
"mdlrefDW->rtdw.d4cbfpdwp1" , "mdlrefDW->rtdw.j2kv1drnk1" ,
"mdlrefDW->rtdw.bsxapokqfo" , "mdlrefDW->rtdw.nfncqiie2c" ,
"mdlrefDW->rtdw.dgtugyve3p" , "mdlrefDW->rtdw.f1q5n1mrk1" ,
"mdlrefDW->rtdw.nzfipppoom" , "mdlrefDW->rtdw.pexvtvdckx" ,
"mdlrefDW->rtdw.pqmzu4crz5" , "mdlrefDW->rtdw.ey2omfatnv" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 10 , rtdwDataFieldNames ) ;
mr_DC_core_control_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * ) &
( mdlrefDW -> rtdw . d4cbfpdwp1 ) , sizeof ( mdlrefDW -> rtdw . d4cbfpdwp1 )
) ; mr_DC_core_control_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void *
) & ( mdlrefDW -> rtdw . j2kv1drnk1 ) , sizeof ( mdlrefDW -> rtdw .
j2kv1drnk1 ) ) ; mr_DC_core_control_cacheDataAsMxArray ( rtdwData , 0 , 2 , (
const void * ) & ( mdlrefDW -> rtdw . bsxapokqfo ) , sizeof ( mdlrefDW ->
rtdw . bsxapokqfo ) ) ; mr_DC_core_control_cacheDataAsMxArray ( rtdwData , 0
, 3 , ( const void * ) & ( mdlrefDW -> rtdw . nfncqiie2c ) , sizeof (
mdlrefDW -> rtdw . nfncqiie2c ) ) ; mr_DC_core_control_cacheDataAsMxArray (
rtdwData , 0 , 4 , ( const void * ) & ( mdlrefDW -> rtdw . dgtugyve3p ) ,
sizeof ( mdlrefDW -> rtdw . dgtugyve3p ) ) ;
mr_DC_core_control_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * ) &
( mdlrefDW -> rtdw . f1q5n1mrk1 ) , sizeof ( mdlrefDW -> rtdw . f1q5n1mrk1 )
) ; mr_DC_core_control_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void *
) & ( mdlrefDW -> rtdw . nzfipppoom ) , sizeof ( mdlrefDW -> rtdw .
nzfipppoom ) ) ; mr_DC_core_control_cacheDataAsMxArray ( rtdwData , 0 , 7 , (
const void * ) & ( mdlrefDW -> rtdw . pexvtvdckx ) , sizeof ( mdlrefDW ->
rtdw . pexvtvdckx ) ) ; mr_DC_core_control_cacheDataAsMxArray ( rtdwData , 0
, 8 , ( const void * ) & ( mdlrefDW -> rtdw . pqmzu4crz5 ) , sizeof (
mdlrefDW -> rtdw . pqmzu4crz5 ) ) ; mr_DC_core_control_cacheDataAsMxArray (
rtdwData , 0 , 9 , ( const void * ) & ( mdlrefDW -> rtdw . ey2omfatnv ) ,
sizeof ( mdlrefDW -> rtdw . ey2omfatnv ) ) ; mxSetFieldByNumber ( ssDW , 0 ,
1 , rtdwData ) ; } ( void ) mdlrefDW ; return ssDW ; } void
mr_DC_core_control_SetDWork ( go5yews2a2e * mdlrefDW , const mxArray * ssDW )
{ ( void ) ssDW ; ( void ) mdlrefDW ;
mr_DC_core_control_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtb )
, ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_DC_core_control_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
d4cbfpdwp1 ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . d4cbfpdwp1 ) )
; mr_DC_core_control_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. j2kv1drnk1 ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw . j2kv1drnk1 )
) ; mr_DC_core_control_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . bsxapokqfo ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw .
bsxapokqfo ) ) ; mr_DC_core_control_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . nfncqiie2c ) , rtdwData , 0 , 3 , sizeof ( mdlrefDW ->
rtdw . nfncqiie2c ) ) ; mr_DC_core_control_restoreDataFromMxArray ( ( void *
) & ( mdlrefDW -> rtdw . dgtugyve3p ) , rtdwData , 0 , 4 , sizeof ( mdlrefDW
-> rtdw . dgtugyve3p ) ) ; mr_DC_core_control_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . f1q5n1mrk1 ) , rtdwData , 0 , 5 , sizeof (
mdlrefDW -> rtdw . f1q5n1mrk1 ) ) ; mr_DC_core_control_restoreDataFromMxArray
( ( void * ) & ( mdlrefDW -> rtdw . nzfipppoom ) , rtdwData , 0 , 6 , sizeof
( mdlrefDW -> rtdw . nzfipppoom ) ) ;
mr_DC_core_control_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
pexvtvdckx ) , rtdwData , 0 , 7 , sizeof ( mdlrefDW -> rtdw . pexvtvdckx ) )
; mr_DC_core_control_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. pqmzu4crz5 ) , rtdwData , 0 , 8 , sizeof ( mdlrefDW -> rtdw . pqmzu4crz5 )
) ; mr_DC_core_control_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . ey2omfatnv ) , rtdwData , 0 , 9 , sizeof ( mdlrefDW -> rtdw .
ey2omfatnv ) ) ; } } void mr_DC_core_control_RegisterSimStateChecksum (
SimStruct * S ) { const uint32_T chksum [ 4 ] = { 183482195U , 4150836590U ,
3080757314U , 2814149640U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"DC_core_control" , & chksum [ 0 ] ) ; } mxArray *
mr_DC_core_control_GetSimStateDisallowedBlocks ( ) { return ( NULL ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
