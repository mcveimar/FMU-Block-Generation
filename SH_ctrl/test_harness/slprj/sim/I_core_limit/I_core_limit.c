#include "I_core_limit.h"
#include "rtwtypes.h"
#include "I_core_limit_private.h"
#include "mwmathutil.h"
#include <string.h>
#include "I_core_limit_capi.h"
#include "rt_nonfinite.h"
static RegMdlInfo rtMdlInfo_I_core_limit [ 66 ] = { { "n2wxuctauq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "I_core_limit" } , {
"baf2bdlc2o" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"I_core_limit" } , { "lmow53juwd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "I_core_limit" } , { "aq4ha3vgp4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "I_core_limit" } , {
"pp511kvta3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"I_core_limit" } , { "p1jys1zh1i" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "I_core_limit" } , { "hw3xikyjf2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "I_core_limit" } , {
"izpcx4kdyb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"I_core_limit" } , { "j1u4eciubn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "I_core_limit" } , { "pe54izbj0z" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "I_core_limit" } , {
"hknkbzzfwx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"I_core_limit" } , { "knl12usfqr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "I_core_limit" } , { "agtr2eeaur" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "I_core_limit" } , {
"gu5dd3cd3nc" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * )
"I_core_limit" } , { "k0y205llm5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "I_core_limit" } , { "bomr11e4wh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "I_core_limit" } , {
"bnp2mik41r" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"I_core_limit" } , { "k5fladoek3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "I_core_limit" } , { "by3l4vvw5l" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "I_core_limit" } , {
"odr0ldkigx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"I_core_limit" } , { "hmxmb2qv0g" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "I_core_limit" } , { "ex3qvui3fa" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "I_core_limit" } , {
"h23c4pjw3y" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"I_core_limit" } , { "ncqkkwnbls" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "I_core_limit" } , { "l0j52koh3f" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "I_core_limit" } , {
"dg2iue4hq5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"I_core_limit" } , { "g03fblis2s" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "I_core_limit" } , { "fouycg50py" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "I_core_limit" } , {
"mxg05prz3j" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"I_core_limit" } , { "izryiehf23" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "I_core_limit" } , { "g1dg5uroo3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "I_core_limit" } , {
"owrox0vf44" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"I_core_limit" } , { "brolwgxnss" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "I_core_limit" } , { "p1r0dxmilo" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "I_core_limit" } , {
"ft0mlz22gp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"I_core_limit" } , { "etkjludo35" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "I_core_limit" } , { "plud4shqa4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "I_core_limit" } , {
"b0egnlafmh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"I_core_limit" } , { "jzas1gfhbi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "I_core_limit" } , { "jg5gkhi2o2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "I_core_limit" } , {
"oc3nklap0n" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"I_core_limit" } , { "dgzjqfi02u" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "I_core_limit" } , { "j3yhukyayf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "I_core_limit" } , {
"bbdwzauxmd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"I_core_limit" } , { "oaotwesymj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "I_core_limit" } , { "mj1mdbsyxp" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "I_core_limit" } , {
"dw0gqt4egj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * )
"Subsystem" } , { "I_core_limit" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 ,
( NULL ) } , { "cmp0cudfp2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "I_core_limit" } , { "otb2zksqjw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "I_core_limit" } , { "fg05pa035r" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "I_core_limit" } , {
"fsuvwbgxy3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"I_core_limit" } , { "mr_I_core_limit_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "I_core_limit" } , {
"mr_I_core_limit_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "I_core_limit" } , {
"mr_I_core_limit_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "I_core_limit" } , {
"mr_I_core_limit_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "I_core_limit" } , {
"mr_I_core_limit_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "I_core_limit" } , {
"mr_I_core_limit_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "I_core_limit" } , {
"mr_I_core_limit_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "I_core_limit" } , { "mr_I_core_limit_restoreDataFromMxArray"
, MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "I_core_limit" } , {
"mr_I_core_limit_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 ,
( void * ) "I_core_limit" } , { "mr_I_core_limit_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "I_core_limit" } , {
"mr_I_core_limit_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void *
) "I_core_limit" } , { "mr_I_core_limit_GetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "I_core_limit" } , {
"I_core_limit.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , {
"I_core_limit.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * )
"I_core_limit" } } ; hljmpnjf5r5 hljmpnjf5r = { 0 , 1 , 1 , - 1 , 0.0F , 0.0F
, 1.0F , 0.0F , 1.0F , 0.0F , 0.0F , 4.0F , 2.0F , 0.0F , 0.0F , { 0.0F ,
0.0F , 0.0F } , { 0.0F , 0.0F , 0.0F } , 0.0F , 0.0F , 0.0F , 0.0F , 0.0F ,
0.0F , 4.0F , 2.0F , 0.0F , 0.0F , { 0.0F , 0.0F , 0.0F } , { 0.0F , 0.0F ,
0.0F } , 1.41421354F , { 0.0F , - 1.0F , 0.0F , 0.5F } , { 0.0F , - 1.0F ,
0.0F , 0.5F } } ; void j3yhukyayf ( agtr2eeaur * localB , hknkbzzfwx * localP
) { localB -> dtzrhw1fxa [ 0 ] = localP -> P_0 ; localB -> dtzrhw1fxa [ 1 ] =
localP -> P_0 ; localB -> dtzrhw1fxa [ 2 ] = localP -> P_0 ; } void
dgzjqfi02u ( agtr2eeaur * localB , knl12usfqr * localDW , hknkbzzfwx * localP
) { localB -> dtzrhw1fxa [ 0 ] = localP -> P_0 ; localB -> dtzrhw1fxa [ 1 ] =
localP -> P_0 ; localB -> dtzrhw1fxa [ 2 ] = localP -> P_0 ; localDW ->
mvzprtw30r = false ; } void dw0gqt4egj ( fg05pa035r * const ppltozkdmd ,
const boolean_T cm0qjtrc3h [ 3 ] , const real32_T clgnvar1cq [ 3 ] , const
real32_T eozctpazhu [ 3 ] , agtr2eeaur * localB , knl12usfqr * localDW ,
hknkbzzfwx * localP ) { real32_T itrxjo3jod_idx_0 ; real32_T itrxjo3jod_idx_1
; real32_T itrxjo3jod_p ; if ( cm0qjtrc3h [ 0 ] || cm0qjtrc3h [ 1 ] ||
cm0qjtrc3h [ 2 ] ) { if ( ! localDW -> mvzprtw30r ) { if ( rtmGetTaskTime (
ppltozkdmd , 0 ) != rtmGetTStart ( ppltozkdmd ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( ppltozkdmd -> _mdlRefSfcnS ) ; }
localDW -> mvzprtw30r = true ; } itrxjo3jod_p = muSingleScalarSqrt (
clgnvar1cq [ 0 ] ) ; if ( ! ( eozctpazhu [ 0 ] > localP -> P_2 ) ) {
itrxjo3jod_p *= localP -> P_1 ; } itrxjo3jod_idx_0 = eozctpazhu [ 0 ] -
itrxjo3jod_p ; itrxjo3jod_p = muSingleScalarSqrt ( clgnvar1cq [ 1 ] ) ; if (
! ( eozctpazhu [ 1 ] > localP -> P_2 ) ) { itrxjo3jod_p *= localP -> P_1 ; }
itrxjo3jod_idx_1 = eozctpazhu [ 1 ] - itrxjo3jod_p ; itrxjo3jod_p =
muSingleScalarSqrt ( clgnvar1cq [ 2 ] ) ; if ( ! ( eozctpazhu [ 2 ] > localP
-> P_2 ) ) { itrxjo3jod_p *= localP -> P_1 ; } itrxjo3jod_p = eozctpazhu [ 2
] - itrxjo3jod_p ; localB -> dtzrhw1fxa [ 0 ] = localP -> P_3 *
itrxjo3jod_idx_0 ; localB -> dtzrhw1fxa [ 1 ] = localP -> P_3 *
itrxjo3jod_idx_1 ; localB -> dtzrhw1fxa [ 2 ] = localP -> P_3 * itrxjo3jod_p
; localDW -> a2jdariv0m = 4 ; } else if ( localDW -> mvzprtw30r ) {
ssSetBlockStateForSolverChangedAtMajorStep ( ppltozkdmd -> _mdlRefSfcnS ) ;
dgzjqfi02u ( localB , localDW , localP ) ; } } void ft0mlz22gp ( real32_T
fwtktar1ua [ 18 ] , real32_T idgov3aatt [ 3 ] , g03fblis2s * localB ,
dg2iue4hq5 * localDW ) { int32_T i ; localDW -> ddfom4w1by [ 0 ] = hljmpnjf5r
. P_23 ; localDW -> ddfom4w1by [ 1 ] = hljmpnjf5r . P_23 ; localDW ->
ddfom4w1by [ 2 ] = hljmpnjf5r . P_23 ; j3yhukyayf ( & localB -> dw0gqt4egj5 ,
& hljmpnjf5r . dw0gqt4egj5 ) ; for ( i = 0 ; i < 18 ; i ++ ) { fwtktar1ua [ i
] = hljmpnjf5r . P_21 ; } localB -> lc52ez5ulx [ 0 ] = hljmpnjf5r . P_22 ;
localB -> lc52ez5ulx [ 1 ] = hljmpnjf5r . P_22 ; localB -> lc52ez5ulx [ 2 ] =
hljmpnjf5r . P_22 ; j3yhukyayf ( & localB -> kzdgozbnbw , & hljmpnjf5r .
kzdgozbnbw ) ; localDW -> ckrotryroj = hljmpnjf5r . P_4 ; localB ->
lu0m11btb3 = hljmpnjf5r . P_2 ; idgov3aatt [ 0 ] = hljmpnjf5r . P_7 ;
idgov3aatt [ 1 ] = hljmpnjf5r . P_7 ; idgov3aatt [ 2 ] = hljmpnjf5r . P_7 ; }
void g1dg5uroo3 ( real32_T idgov3aatt [ 3 ] , g03fblis2s * localB ,
dg2iue4hq5 * localDW ) { if ( localDW -> mboceyfxmf ) { idgov3aatt [ 0 ] =
hljmpnjf5r . P_7 ; idgov3aatt [ 1 ] = hljmpnjf5r . P_7 ; idgov3aatt [ 2 ] =
hljmpnjf5r . P_7 ; localDW -> mboceyfxmf = false ; } if ( localDW ->
dw0gqt4egj5 . mvzprtw30r ) { dgzjqfi02u ( & localB -> dw0gqt4egj5 , & localDW
-> dw0gqt4egj5 , & hljmpnjf5r . dw0gqt4egj5 ) ; } if ( localDW -> kzdgozbnbw
. mvzprtw30r ) { dgzjqfi02u ( & localB -> kzdgozbnbw , & localDW ->
kzdgozbnbw , & hljmpnjf5r . kzdgozbnbw ) ; } } void plud4shqa4 ( g03fblis2s *
localB ) { localB -> mjipmnwnm5 = 6.0F ; } void I_core_limit ( fg05pa035r *
const ppltozkdmd , const real32_T gfy2erbary [ 3 ] , const real32_T
cla1bn3xgo [ 3 ] , const real32_T ch1n532w1k [ 3 ] , const real32_T
i0b3zlckmm [ 18 ] , real32_T fwtktar1ua [ 18 ] , real32_T idgov3aatt [ 3 ] ,
real32_T ilyujys41n [ 3 ] , real32_T cgyphdro11 [ 3 ] , g03fblis2s * localB ,
dg2iue4hq5 * localDW ) { real32_T pxivjgeicx [ 3 ] ; real32_T dlxjipocgd [ 3
] ; real32_T pwi125cisb [ 3 ] ; real32_T h33ofuol4h [ 3 ] ; real32_T
bh2mj3ma1s [ 3 ] ; real32_T c2wuvciokx [ 3 ] ; boolean_T bvjjug3nmz [ 3 ] ;
boolean_T heyjncv2di [ 3 ] ; int32_T h33ofuol4h_tmp ; int32_T i ; int32_T i_p
; int32_T s3_iter ; real32_T a4cibai3ml [ 18 ] ; real32_T o5sclzmj5s [ 3 ] ;
real32_T oyfwsx11zo ; real32_T plscmquqgu_idx_1 ; real32_T plscmquqgu_idx_2 ;
boolean_T mjqikfa2fu_idx_0 ; boolean_T mjqikfa2fu_idx_1 ; boolean_T
mjqikfa2fu_idx_2 ; cgyphdro11 [ 0 ] = gfy2erbary [ 0 ] + cla1bn3xgo [ 0 ] ;
cgyphdro11 [ 1 ] = gfy2erbary [ 1 ] + cla1bn3xgo [ 1 ] ; cgyphdro11 [ 2 ] =
gfy2erbary [ 2 ] + cla1bn3xgo [ 2 ] ; for ( i_p = 0 ; i_p < 18 ; i_p ++ ) {
oyfwsx11zo = i0b3zlckmm [ i_p ] ; a4cibai3ml [ i_p ] = oyfwsx11zo *
oyfwsx11zo ; } s3_iter = 0 ; for ( i = 0 ; i < 3 ; i ++ ) { h33ofuol4h_tmp =
i + s3_iter ; oyfwsx11zo = - 0.0F ; for ( i_p = 0 ; i_p < 6 ; i_p ++ ) {
oyfwsx11zo += a4cibai3ml [ i_p * 3 + h33ofuol4h_tmp ] ; } o5sclzmj5s [ i ] =
oyfwsx11zo ; } cgyphdro11 [ 0 ] = ( cgyphdro11 [ 0 ] * cgyphdro11 [ 0 ] +
ch1n532w1k [ 0 ] * ch1n532w1k [ 0 ] ) + o5sclzmj5s [ 0 ] ; cgyphdro11 [ 1 ] =
( cgyphdro11 [ 1 ] * cgyphdro11 [ 1 ] + ch1n532w1k [ 1 ] * ch1n532w1k [ 1 ] )
+ o5sclzmj5s [ 1 ] ; cgyphdro11 [ 2 ] = ( cgyphdro11 [ 2 ] * cgyphdro11 [ 2 ]
+ ch1n532w1k [ 2 ] * ch1n532w1k [ 2 ] ) + o5sclzmj5s [ 2 ] ;
ssSetBlockStateForSolverChangedAtMajorStep ( ppltozkdmd -> _mdlRefSfcnS ) ;
localDW -> ddfom4w1by [ 0 ] = hljmpnjf5r . P_23 ; localDW -> ddfom4w1by [ 1 ]
= hljmpnjf5r . P_23 ; localDW -> ddfom4w1by [ 2 ] = hljmpnjf5r . P_23 ; if (
localB -> mjipmnwnm5 < 2.14748365E+9F ) { if ( localB -> mjipmnwnm5 >= -
2.14748365E+9F ) { i = ( int32_T ) localB -> mjipmnwnm5 ; } else { i =
MIN_int32_T ; } } else if ( localB -> mjipmnwnm5 >= 2.14748365E+9F ) { i =
MAX_int32_T ; } else { i = 0 ; } if ( i < 0 ) { i = 0 ; } s3_iter = 0 ; while
( s3_iter < i ) { i_p = s3_iter ; if ( i_p != 0 ) { o5sclzmj5s [ 0 ] =
localDW -> ddfom4w1by [ 0 ] ; o5sclzmj5s [ 1 ] = localDW -> ddfom4w1by [ 1 ]
; o5sclzmj5s [ 2 ] = localDW -> ddfom4w1by [ 2 ] ; } else { oyfwsx11zo =
cgyphdro11 [ 0 ] - localB -> hribxqjivt [ 0 ] ; if ( oyfwsx11zo > hljmpnjf5r
. P_19 ) { o5sclzmj5s [ 0 ] = hljmpnjf5r . P_19 ; } else if ( oyfwsx11zo <
hljmpnjf5r . P_20 ) { o5sclzmj5s [ 0 ] = hljmpnjf5r . P_20 ; } else {
o5sclzmj5s [ 0 ] = oyfwsx11zo ; } oyfwsx11zo = cgyphdro11 [ 1 ] - localB ->
hribxqjivt [ 1 ] ; if ( oyfwsx11zo > hljmpnjf5r . P_19 ) { o5sclzmj5s [ 1 ] =
hljmpnjf5r . P_19 ; } else if ( oyfwsx11zo < hljmpnjf5r . P_20 ) { o5sclzmj5s
[ 1 ] = hljmpnjf5r . P_20 ; } else { o5sclzmj5s [ 1 ] = oyfwsx11zo ; }
oyfwsx11zo = cgyphdro11 [ 2 ] - localB -> hribxqjivt [ 2 ] ; if ( oyfwsx11zo
> hljmpnjf5r . P_19 ) { o5sclzmj5s [ 2 ] = hljmpnjf5r . P_19 ; } else if (
oyfwsx11zo < hljmpnjf5r . P_20 ) { o5sclzmj5s [ 2 ] = hljmpnjf5r . P_20 ; }
else { o5sclzmj5s [ 2 ] = oyfwsx11zo ; } } h33ofuol4h_tmp = ( ( int32_T ) (
localB -> mjipmnwnm5 - ( real32_T ) i_p ) - 1 ) * 3 ; oyfwsx11zo = i0b3zlckmm
[ h33ofuol4h_tmp ] ; h33ofuol4h [ 0 ] = oyfwsx11zo * hljmpnjf5r . P_14 ;
plscmquqgu_idx_1 = i0b3zlckmm [ h33ofuol4h_tmp + 1 ] ; h33ofuol4h [ 1 ] =
plscmquqgu_idx_1 * hljmpnjf5r . P_14 ; plscmquqgu_idx_2 = i0b3zlckmm [
h33ofuol4h_tmp + 2 ] ; h33ofuol4h [ 2 ] = plscmquqgu_idx_2 * hljmpnjf5r .
P_14 ; bh2mj3ma1s [ 0 ] = h33ofuol4h [ 0 ] * h33ofuol4h [ 0 ] - hljmpnjf5r .
P_13 * o5sclzmj5s [ 0 ] ; bh2mj3ma1s [ 1 ] = h33ofuol4h [ 1 ] * h33ofuol4h [
1 ] - hljmpnjf5r . P_13 * o5sclzmj5s [ 1 ] ; bh2mj3ma1s [ 2 ] = h33ofuol4h [
2 ] * h33ofuol4h [ 2 ] - hljmpnjf5r . P_13 * o5sclzmj5s [ 2 ] ;
mjqikfa2fu_idx_0 = ( bh2mj3ma1s [ 0 ] > hljmpnjf5r . P_12 ) ;
mjqikfa2fu_idx_1 = ( bh2mj3ma1s [ 1 ] > hljmpnjf5r . P_12 ) ;
mjqikfa2fu_idx_2 = ( bh2mj3ma1s [ 2 ] > hljmpnjf5r . P_12 ) ; heyjncv2di [ 0
] = mjqikfa2fu_idx_0 ; heyjncv2di [ 1 ] = mjqikfa2fu_idx_1 ; heyjncv2di [ 2 ]
= mjqikfa2fu_idx_2 ; dw0gqt4egj ( ppltozkdmd , heyjncv2di , bh2mj3ma1s ,
h33ofuol4h , & localB -> dw0gqt4egj5 , & localDW -> dw0gqt4egj5 , &
hljmpnjf5r . dw0gqt4egj5 ) ; if ( o5sclzmj5s [ 0 ] > hljmpnjf5r . P_15 ) { if
( mjqikfa2fu_idx_0 ) { oyfwsx11zo = localB -> dw0gqt4egj5 . dtzrhw1fxa [ 0 ]
; } } else { oyfwsx11zo = hljmpnjf5r . P_17 [ 0 ] ; } if ( o5sclzmj5s [ 1 ] >
hljmpnjf5r . P_15 ) { if ( mjqikfa2fu_idx_1 ) { plscmquqgu_idx_1 = localB ->
dw0gqt4egj5 . dtzrhw1fxa [ 1 ] ; } } else { plscmquqgu_idx_1 = hljmpnjf5r .
P_17 [ 1 ] ; } if ( o5sclzmj5s [ 2 ] > hljmpnjf5r . P_15 ) { if (
mjqikfa2fu_idx_2 ) { plscmquqgu_idx_2 = localB -> dw0gqt4egj5 . dtzrhw1fxa [
2 ] ; } } else { plscmquqgu_idx_2 = hljmpnjf5r . P_17 [ 2 ] ; } if (
bh2mj3ma1s [ 0 ] > hljmpnjf5r . P_16 ) { localB -> lc52ez5ulx [ 0 ] =
hljmpnjf5r . P_18 [ 0 ] ; } else { localB -> lc52ez5ulx [ 0 ] = o5sclzmj5s [
0 ] - oyfwsx11zo * oyfwsx11zo ; } if ( bh2mj3ma1s [ 1 ] > hljmpnjf5r . P_16 )
{ localB -> lc52ez5ulx [ 1 ] = hljmpnjf5r . P_18 [ 1 ] ; } else { localB ->
lc52ez5ulx [ 1 ] = o5sclzmj5s [ 1 ] - plscmquqgu_idx_1 * plscmquqgu_idx_1 ; }
if ( bh2mj3ma1s [ 2 ] > hljmpnjf5r . P_16 ) { localB -> lc52ez5ulx [ 2 ] =
hljmpnjf5r . P_18 [ 2 ] ; } else { localB -> lc52ez5ulx [ 2 ] = o5sclzmj5s [
2 ] - plscmquqgu_idx_2 * plscmquqgu_idx_2 ; } if ( s3_iter == 0 ) { memcpy (
& fwtktar1ua [ 0 ] , & localB -> g53wbqpygy [ 0 ] , 18U * sizeof ( real32_T )
) ; } fwtktar1ua [ h33ofuol4h_tmp ] = oyfwsx11zo ; localDW -> ddfom4w1by [ 0
] = localB -> lc52ez5ulx [ 0 ] ; fwtktar1ua [ h33ofuol4h_tmp + 1 ] =
plscmquqgu_idx_1 ; localDW -> ddfom4w1by [ 1 ] = localB -> lc52ez5ulx [ 1 ] ;
fwtktar1ua [ h33ofuol4h_tmp + 2 ] = plscmquqgu_idx_2 ; localDW -> ddfom4w1by
[ 2 ] = localB -> lc52ez5ulx [ 2 ] ; srUpdateBC ( localDW -> jvb0kq4eut ) ;
s3_iter ++ ; } dlxjipocgd [ 0 ] = hljmpnjf5r . P_26 * ch1n532w1k [ 0 ] ;
dlxjipocgd [ 1 ] = hljmpnjf5r . P_26 * ch1n532w1k [ 1 ] ; dlxjipocgd [ 2 ] =
hljmpnjf5r . P_26 * ch1n532w1k [ 2 ] ; pwi125cisb [ 0 ] = dlxjipocgd [ 0 ] *
dlxjipocgd [ 0 ] - hljmpnjf5r . P_25 * localB -> lc52ez5ulx [ 0 ] ;
pwi125cisb [ 1 ] = dlxjipocgd [ 1 ] * dlxjipocgd [ 1 ] - hljmpnjf5r . P_25 *
localB -> lc52ez5ulx [ 1 ] ; pwi125cisb [ 2 ] = dlxjipocgd [ 2 ] * dlxjipocgd
[ 2 ] - hljmpnjf5r . P_25 * localB -> lc52ez5ulx [ 2 ] ; mjqikfa2fu_idx_0 = (
pwi125cisb [ 0 ] > hljmpnjf5r . P_24 ) ; mjqikfa2fu_idx_1 = ( pwi125cisb [ 1
] > hljmpnjf5r . P_24 ) ; mjqikfa2fu_idx_2 = ( pwi125cisb [ 2 ] > hljmpnjf5r
. P_24 ) ; bvjjug3nmz [ 0 ] = mjqikfa2fu_idx_0 ; bvjjug3nmz [ 1 ] =
mjqikfa2fu_idx_1 ; bvjjug3nmz [ 2 ] = mjqikfa2fu_idx_2 ; dw0gqt4egj (
ppltozkdmd , bvjjug3nmz , pwi125cisb , dlxjipocgd , & localB -> kzdgozbnbw ,
& localDW -> kzdgozbnbw , & hljmpnjf5r . kzdgozbnbw ) ; if ( localB ->
lc52ez5ulx [ 0 ] > hljmpnjf5r . P_27 ) { if ( mjqikfa2fu_idx_0 ) { ilyujys41n
[ 0 ] = localB -> kzdgozbnbw . dtzrhw1fxa [ 0 ] ; } else { ilyujys41n [ 0 ] =
ch1n532w1k [ 0 ] ; } } else { ilyujys41n [ 0 ] = hljmpnjf5r . P_29 [ 0 ] ; }
if ( localB -> lc52ez5ulx [ 1 ] > hljmpnjf5r . P_27 ) { if ( mjqikfa2fu_idx_1
) { ilyujys41n [ 1 ] = localB -> kzdgozbnbw . dtzrhw1fxa [ 1 ] ; } else {
ilyujys41n [ 1 ] = ch1n532w1k [ 1 ] ; } } else { ilyujys41n [ 1 ] =
hljmpnjf5r . P_29 [ 1 ] ; } if ( localB -> lc52ez5ulx [ 2 ] > hljmpnjf5r .
P_27 ) { if ( mjqikfa2fu_idx_2 ) { ilyujys41n [ 2 ] = localB -> kzdgozbnbw .
dtzrhw1fxa [ 2 ] ; } else { ilyujys41n [ 2 ] = ch1n532w1k [ 2 ] ; } } else {
ilyujys41n [ 2 ] = hljmpnjf5r . P_29 [ 2 ] ; } if ( pwi125cisb [ 0 ] >
hljmpnjf5r . P_28 ) { oyfwsx11zo = hljmpnjf5r . P_30 [ 0 ] ; } else {
oyfwsx11zo = localB -> lc52ez5ulx [ 0 ] - ilyujys41n [ 0 ] * ilyujys41n [ 0 ]
; } pxivjgeicx [ 0 ] = muSingleScalarSqrt ( oyfwsx11zo + localB -> hribxqjivt
[ 0 ] ) - localB -> irirvjqztb [ 0 ] ; if ( pwi125cisb [ 1 ] > hljmpnjf5r .
P_28 ) { oyfwsx11zo = hljmpnjf5r . P_30 [ 1 ] ; } else { oyfwsx11zo = localB
-> lc52ez5ulx [ 1 ] - ilyujys41n [ 1 ] * ilyujys41n [ 1 ] ; } pxivjgeicx [ 1
] = muSingleScalarSqrt ( oyfwsx11zo + localB -> hribxqjivt [ 1 ] ) - localB
-> irirvjqztb [ 1 ] ; if ( pwi125cisb [ 2 ] > hljmpnjf5r . P_28 ) {
oyfwsx11zo = hljmpnjf5r . P_30 [ 2 ] ; } else { oyfwsx11zo = localB ->
lc52ez5ulx [ 2 ] - ilyujys41n [ 2 ] * ilyujys41n [ 2 ] ; } pxivjgeicx [ 2 ] =
muSingleScalarSqrt ( oyfwsx11zo + localB -> hribxqjivt [ 2 ] ) - localB ->
irirvjqztb [ 2 ] ; if ( ( pxivjgeicx [ 0 ] > hljmpnjf5r . P_11 ) || (
pxivjgeicx [ 1 ] > hljmpnjf5r . P_11 ) || ( pxivjgeicx [ 2 ] > hljmpnjf5r .
P_11 ) ) { if ( ! localDW -> mboceyfxmf ) { if ( rtmGetTaskTime ( ppltozkdmd
, 0 ) != rtmGetTStart ( ppltozkdmd ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( ppltozkdmd -> _mdlRefSfcnS ) ; }
localDW -> mboceyfxmf = true ; } ssSetBlockStateForSolverChangedAtMajorStep (
ppltozkdmd -> _mdlRefSfcnS ) ; localDW -> ckrotryroj = hljmpnjf5r . P_4 ; i =
localB -> epgzmo5eum ; if ( localB -> epgzmo5eum > 2147483646 ) { i =
2147483646 ; } else if ( localB -> epgzmo5eum < 0 ) { i = 0 ; } s3_iter = 1 ;
while ( s3_iter <= i ) { i_p = s3_iter ; i_p += hljmpnjf5r . P_3 ; if (
pxivjgeicx [ i_p - 1 ] > pxivjgeicx [ localDW -> ckrotryroj - 1 ] ) { localB
-> lu0m11btb3 = i_p ; } else { localB -> lu0m11btb3 = localDW -> ckrotryroj ;
} localDW -> ckrotryroj = localB -> lu0m11btb3 ; srUpdateBC ( localDW ->
o1nuyu4eux ) ; s3_iter ++ ; } oyfwsx11zo = muSingleScalarAbs ( cla1bn3xgo [
localB -> lu0m11btb3 - 1 ] ) ; if ( ! ( oyfwsx11zo != 0.0F ) ) { oyfwsx11zo =
hljmpnjf5r . P_10 ; } oyfwsx11zo = pxivjgeicx [ localB -> lu0m11btb3 - 1 ] /
oyfwsx11zo ; if ( oyfwsx11zo > hljmpnjf5r . P_8 ) { oyfwsx11zo = hljmpnjf5r .
P_8 ; } else if ( oyfwsx11zo < hljmpnjf5r . P_9 ) { oyfwsx11zo = hljmpnjf5r .
P_9 ; } idgov3aatt [ 0 ] = oyfwsx11zo * cla1bn3xgo [ 0 ] ; idgov3aatt [ 1 ] =
oyfwsx11zo * cla1bn3xgo [ 1 ] ; idgov3aatt [ 2 ] = oyfwsx11zo * cla1bn3xgo [
2 ] ; c2wuvciokx [ 0 ] = pxivjgeicx [ 0 ] - idgov3aatt [ 0 ] ; c2wuvciokx [ 1
] = pxivjgeicx [ 1 ] - idgov3aatt [ 1 ] ; c2wuvciokx [ 2 ] = pxivjgeicx [ 2 ]
- idgov3aatt [ 2 ] ; srUpdateBC ( localDW -> hnpgo2j3qd ) ; } else if (
localDW -> mboceyfxmf ) { ssSetBlockStateForSolverChangedAtMajorStep (
ppltozkdmd -> _mdlRefSfcnS ) ; idgov3aatt [ 0 ] = hljmpnjf5r . P_7 ;
idgov3aatt [ 1 ] = hljmpnjf5r . P_7 ; idgov3aatt [ 2 ] = hljmpnjf5r . P_7 ;
localDW -> mboceyfxmf = false ; } } void I_core_limitTID1 ( g03fblis2s *
localB , dg2iue4hq5 * localDW ) { int32_T i ; real32_T
rtP__shuntHarmonicsCorrected2f2fmuGenerationDictionay_sldd__e3mz ; localB ->
epgzmo5eum = fsuvwbgxy3 . l4j3jkvhck + hljmpnjf5r . P_5 ; srUpdateBC (
localDW -> hnpgo2j3qd ) ; for ( i = 0 ; i < 6 ; i ++ ) {
rtP__shuntHarmonicsCorrected2f2fmuGenerationDictionay_sldd__e3mz =
rtP__shuntHarmonicsCorrected2f2fmuGenerationDictionay_sldd_ [ i ] ; localB ->
g53wbqpygy [ 3 * i ] =
rtP__shuntHarmonicsCorrected2f2fmuGenerationDictionay_sldd__e3mz ; localB ->
g53wbqpygy [ 3 * i + 1 ] =
rtP__shuntHarmonicsCorrected2f2fmuGenerationDictionay_sldd__e3mz ; localB ->
g53wbqpygy [ 3 * i + 2 ] =
rtP__shuntHarmonicsCorrected2f2fmuGenerationDictionay_sldd__e3mz ; }
rtP__shuntHarmonicsCorrected2f2fmuGenerationDictionay_sldd__e3mz = hljmpnjf5r
. P_31 * rtP__shuntMaxRequestedCurrentrms2f2fmuGenerationDictionay_sldd_ ;
localB -> irirvjqztb [ 0 ] =
rtP__shuntHarmonicsCorrected2f2fmuGenerationDictionay_sldd__e3mz ; localB ->
irirvjqztb [ 1 ] =
rtP__shuntHarmonicsCorrected2f2fmuGenerationDictionay_sldd__e3mz ; localB ->
irirvjqztb [ 2 ] =
rtP__shuntHarmonicsCorrected2f2fmuGenerationDictionay_sldd__e3mz ;
rtP__shuntHarmonicsCorrected2f2fmuGenerationDictionay_sldd__e3mz = localB ->
irirvjqztb [ 0 ] * localB -> irirvjqztb [ 0 ] ; localB -> hribxqjivt [ 0 ] =
rtP__shuntHarmonicsCorrected2f2fmuGenerationDictionay_sldd__e3mz ; localB ->
hribxqjivt [ 1 ] =
rtP__shuntHarmonicsCorrected2f2fmuGenerationDictionay_sldd__e3mz ; localB ->
hribxqjivt [ 2 ] =
rtP__shuntHarmonicsCorrected2f2fmuGenerationDictionay_sldd__e3mz ; } void
mxg05prz3j ( fg05pa035r * const ppltozkdmd ) { if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( ppltozkdmd ->
_mdlRefSfcnS , "I_core_limit" , "SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT"
) ; } } void etkjludo35 ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 ,
int_T mdlref_TID1 , fg05pa035r * const ppltozkdmd , g03fblis2s * localB ,
dg2iue4hq5 * localDW , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN ( sizeof ( real_T )
) ; hljmpnjf5r . P_19 = rtInfF ; ( void ) memset ( ( void * ) ppltozkdmd , 0
, sizeof ( fg05pa035r ) ) ; ppltozkdmd -> Timing . mdlref_GlobalTID [ 0 ] =
mdlref_TID0 ; ppltozkdmd -> Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ;
ppltozkdmd -> _mdlRefSfcnS = ( _mdlRefSfcnS ) ; if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( ppltozkdmd ->
_mdlRefSfcnS , "I_core_limit" , "START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ;
} ( void ) memset ( ( ( void * ) localB ) , 0 , sizeof ( g03fblis2s ) ) ; {
int32_T i ; for ( i = 0 ; i < 18 ; i ++ ) { localB -> g53wbqpygy [ i ] = 0.0F
; } localB -> irirvjqztb [ 0 ] = 0.0F ; localB -> irirvjqztb [ 1 ] = 0.0F ;
localB -> irirvjqztb [ 2 ] = 0.0F ; localB -> hribxqjivt [ 0 ] = 0.0F ;
localB -> hribxqjivt [ 1 ] = 0.0F ; localB -> hribxqjivt [ 2 ] = 0.0F ;
localB -> mjipmnwnm5 = 0.0F ; localB -> lc52ez5ulx [ 0 ] = 0.0F ; localB ->
lc52ez5ulx [ 1 ] = 0.0F ; localB -> lc52ez5ulx [ 2 ] = 0.0F ; localB ->
kzdgozbnbw . dtzrhw1fxa [ 0 ] = 0.0F ; localB -> kzdgozbnbw . dtzrhw1fxa [ 1
] = 0.0F ; localB -> kzdgozbnbw . dtzrhw1fxa [ 2 ] = 0.0F ; localB ->
dw0gqt4egj5 . dtzrhw1fxa [ 0 ] = 0.0F ; localB -> dw0gqt4egj5 . dtzrhw1fxa [
1 ] = 0.0F ; localB -> dw0gqt4egj5 . dtzrhw1fxa [ 2 ] = 0.0F ; } ( void )
memset ( ( void * ) localDW , 0 , sizeof ( dg2iue4hq5 ) ) ; localDW ->
ddfom4w1by [ 0 ] = 0.0F ; localDW -> ddfom4w1by [ 1 ] = 0.0F ; localDW ->
ddfom4w1by [ 2 ] = 0.0F ; I_core_limit_InitializeDataMapInfo ( ppltozkdmd ,
localDW , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && (
rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( ppltozkdmd -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
ppltozkdmd -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( ppltozkdmd -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } } void mr_I_core_limit_MdlInfoRegFcn ( SimStruct *
mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal = 0 ; {
boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_I_core_limit , 66 ) ; * retVal = 1 ; } static void
mr_I_core_limit_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j
, const void * srcData , size_t numBytes ) ; static void
mr_I_core_limit_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j
, const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_I_core_limit_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_I_core_limit_restoreDataFromMxArray ( void * destData , const mxArray
* srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_I_core_limit_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_I_core_limit_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_I_core_limit_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_I_core_limit_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_I_core_limit_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex
i , int j , mwIndex offset , const void * srcData , size_t numBytes ) ;
static void mr_I_core_limit_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_I_core_limit_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_I_core_limit_restoreDataFromMxArrayWithOffset (
void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_I_core_limit_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_I_core_limit_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray
, mwIndex i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
real_T ) fieldVal ) ) ; } static uint_T
mr_I_core_limit_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_I_core_limit_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_I_core_limit_GetDWork ( const gu5dd3cd3nc * mdlrefDW ) {
static const char_T * ssDWFieldNames [ 3 ] = { "rtb" , "rtdw" , "NULL->rtzce"
, } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_I_core_limit_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & (
mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; { static const char_T *
rtdwDataFieldNames [ 10 ] = { "mdlrefDW->rtdw.ddfom4w1by" ,
"mdlrefDW->rtdw.ckrotryroj" , "mdlrefDW->rtdw.jvb0kq4eut" ,
"mdlrefDW->rtdw.hnpgo2j3qd" , "mdlrefDW->rtdw.o1nuyu4eux" ,
"mdlrefDW->rtdw.mboceyfxmf" , "mdlrefDW->rtdw.kzdgozbnbw.a2jdariv0m" ,
"mdlrefDW->rtdw.kzdgozbnbw.mvzprtw30r" ,
"mdlrefDW->rtdw.dw0gqt4egj5.a2jdariv0m" ,
"mdlrefDW->rtdw.dw0gqt4egj5.mvzprtw30r" , } ; mxArray * rtdwData =
mxCreateStructMatrix ( 1 , 1 , 10 , rtdwDataFieldNames ) ;
mr_I_core_limit_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * ) & (
mdlrefDW -> rtdw . ddfom4w1by ) , sizeof ( mdlrefDW -> rtdw . ddfom4w1by ) )
; mr_I_core_limit_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void * ) &
( mdlrefDW -> rtdw . ckrotryroj ) , sizeof ( mdlrefDW -> rtdw . ckrotryroj )
) ; mr_I_core_limit_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void * )
& ( mdlrefDW -> rtdw . jvb0kq4eut ) , sizeof ( mdlrefDW -> rtdw . jvb0kq4eut
) ) ; mr_I_core_limit_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void *
) & ( mdlrefDW -> rtdw . hnpgo2j3qd ) , sizeof ( mdlrefDW -> rtdw .
hnpgo2j3qd ) ) ; mr_I_core_limit_cacheDataAsMxArray ( rtdwData , 0 , 4 , (
const void * ) & ( mdlrefDW -> rtdw . o1nuyu4eux ) , sizeof ( mdlrefDW ->
rtdw . o1nuyu4eux ) ) ; mr_I_core_limit_cacheDataAsMxArray ( rtdwData , 0 , 5
, ( const void * ) & ( mdlrefDW -> rtdw . mboceyfxmf ) , sizeof ( mdlrefDW ->
rtdw . mboceyfxmf ) ) ; mr_I_core_limit_cacheDataAsMxArray ( rtdwData , 0 , 6
, ( const void * ) & ( mdlrefDW -> rtdw . kzdgozbnbw . a2jdariv0m ) , sizeof
( mdlrefDW -> rtdw . kzdgozbnbw . a2jdariv0m ) ) ;
mr_I_core_limit_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void * ) & (
mdlrefDW -> rtdw . kzdgozbnbw . mvzprtw30r ) , sizeof ( mdlrefDW -> rtdw .
kzdgozbnbw . mvzprtw30r ) ) ; mr_I_core_limit_cacheDataAsMxArray ( rtdwData ,
0 , 8 , ( const void * ) & ( mdlrefDW -> rtdw . dw0gqt4egj5 . a2jdariv0m ) ,
sizeof ( mdlrefDW -> rtdw . dw0gqt4egj5 . a2jdariv0m ) ) ;
mr_I_core_limit_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) & (
mdlrefDW -> rtdw . dw0gqt4egj5 . mvzprtw30r ) , sizeof ( mdlrefDW -> rtdw .
dw0gqt4egj5 . mvzprtw30r ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData )
; } ( void ) mdlrefDW ; return ssDW ; } void mr_I_core_limit_SetDWork (
gu5dd3cd3nc * mdlrefDW , const mxArray * ssDW ) { ( void ) ssDW ; ( void )
mdlrefDW ; mr_I_core_limit_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtb ) , ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray *
rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_I_core_limit_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
ddfom4w1by ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . ddfom4w1by ) )
; mr_I_core_limit_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
ckrotryroj ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw . ckrotryroj ) )
; mr_I_core_limit_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
jvb0kq4eut ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw . jvb0kq4eut ) )
; mr_I_core_limit_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
hnpgo2j3qd ) , rtdwData , 0 , 3 , sizeof ( mdlrefDW -> rtdw . hnpgo2j3qd ) )
; mr_I_core_limit_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
o1nuyu4eux ) , rtdwData , 0 , 4 , sizeof ( mdlrefDW -> rtdw . o1nuyu4eux ) )
; mr_I_core_limit_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
mboceyfxmf ) , rtdwData , 0 , 5 , sizeof ( mdlrefDW -> rtdw . mboceyfxmf ) )
; mr_I_core_limit_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
kzdgozbnbw . a2jdariv0m ) , rtdwData , 0 , 6 , sizeof ( mdlrefDW -> rtdw .
kzdgozbnbw . a2jdariv0m ) ) ; mr_I_core_limit_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . kzdgozbnbw . mvzprtw30r ) , rtdwData , 0 , 7 ,
sizeof ( mdlrefDW -> rtdw . kzdgozbnbw . mvzprtw30r ) ) ;
mr_I_core_limit_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
dw0gqt4egj5 . a2jdariv0m ) , rtdwData , 0 , 8 , sizeof ( mdlrefDW -> rtdw .
dw0gqt4egj5 . a2jdariv0m ) ) ; mr_I_core_limit_restoreDataFromMxArray ( (
void * ) & ( mdlrefDW -> rtdw . dw0gqt4egj5 . mvzprtw30r ) , rtdwData , 0 , 9
, sizeof ( mdlrefDW -> rtdw . dw0gqt4egj5 . mvzprtw30r ) ) ; } } void
mr_I_core_limit_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T
chksum [ 4 ] = { 3241928254U , 329537185U , 2857620074U , 1296664345U , } ;
slmrModelRefRegisterSimStateChecksum ( S , "I_core_limit" , & chksum [ 0 ] )
; } mxArray * mr_I_core_limit_GetSimStateDisallowedBlocks ( ) { return ( NULL
) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
