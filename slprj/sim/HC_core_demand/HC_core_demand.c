#include "HC_core_demand.h"
#include "rtwtypes.h"
#include "HC_core_demand_private.h"
#include "mwmathutil.h"
#include "HC_core_demand_capi.h"
#include <string.h>
#include "rt_nonfinite.h"
static RegMdlInfo rtMdlInfo_HC_core_demand [ 41 ] = { { "ed04h1okrzy" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "HC_core_demand" } , {
"hg5km0kz4z" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_demand" } , { "bjmg12on4x" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "HC_core_demand" } , { "l03oe2ld0g" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "HC_core_demand" } ,
{ "pf3itjrmjr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_demand" } , { "ltypy4bnz0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "HC_core_demand" } , { "j1n3d1n3qp" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "HC_core_demand" } ,
{ "okslwp0wic" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_demand" } , { "jjjwsanfn1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "HC_core_demand" } , { "dmvzleejaw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "HC_core_demand" } ,
{ "azm3yj3lsg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_demand" } , { "iyhwdnmono" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "HC_core_demand" } , { "mubhr0gjvh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "HC_core_demand" } ,
{ "i0jbbxzxhp" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_demand" } , { "jsez11xjpl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "HC_core_demand" } , { "amz4zilgtp" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "HC_core_demand" } ,
{ "bo2fdhv0ea" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_demand" } , { "js2osz2qo5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "HC_core_demand" } , { "jht1q2yrb0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "HC_core_demand" } ,
{ "o0wlz5cdw2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_demand" } , { "hfxfypauzg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "HC_core_demand" } , { "fsyqt3jfsy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "HC_core_demand" } ,
{ "jcciopym4l" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_demand" } , { "HC_core_demand" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , 0 , ( NULL ) } , { "p1taqtgmvb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 ,
- 1 , ( void * ) "HC_core_demand" } , { "cabu3n4tlq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "HC_core_demand" } ,
{ "bwqie2cqq2" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"HC_core_demand" } , { "mr_HC_core_demand_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HC_core_demand" } , {
"mr_HC_core_demand_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HC_core_demand" } , {
"mr_HC_core_demand_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HC_core_demand" } , {
"mr_HC_core_demand_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HC_core_demand" } , {
"mr_HC_core_demand_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "HC_core_demand" } , {
"mr_HC_core_demand_extractBitFieldFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "HC_core_demand" } , {
"mr_HC_core_demand_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "HC_core_demand" } , {
"mr_HC_core_demand_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "HC_core_demand" } , {
"mr_HC_core_demand_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "HC_core_demand" } , {
"mr_HC_core_demand_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "HC_core_demand" } , { "mr_HC_core_demand_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "HC_core_demand" } , {
"mr_HC_core_demand_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void
* ) "HC_core_demand" } , { "HC_core_demand.h" , MDL_INFO_MODEL_FILENAME , 0 ,
- 1 , ( NULL ) } , { "HC_core_demand.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 ,
( void * ) "HC_core_demand" } } ; l500zl53pvk l500zl53pv = { 1.0 , 1.0 ,
0.707F , 0.707F , 2.0F , 2.0F , 0.0 , 0.0 , 0.0 , 0.0 , - 1.0F , - 1.0F ,
0.0F , 0.0F , 0.00853344F , 0.0F , 0.0F , 0.0F , 0.0F , 0.00853344F , 0.0F ,
0.0F , 0.0F , 0.0F , 157.913681F , 0.0F , 0.0F , 0.00853344F , 0.0F , 0.0F ,
0.0F , 0.0F , 0.00853344F , 0.0F , 0.0F , 0.0F , 0.0F , 157.913681F , { 0.0F
, 0.0F , 0.0F } } ; void o0wlz5cdw2 ( i0jbbxzxhp * localB , mubhr0gjvh *
localDW ) { localDW -> pl2jqaqhbi = 0 ; localDW -> k43afusiln = 0 ; localDW
-> o03zmxvrq4 = 0 ; localDW -> lzooef1vg0 [ 0 ] = localB -> gkjkthrao5 ; if (
localB -> gkjkthrao5 > l500zl53pv . P_15 ) { localDW -> lzooef1vg0 [ 0 ] =
l500zl53pv . P_15 ; } else if ( localB -> gkjkthrao5 < l500zl53pv . P_16 ) {
localDW -> lzooef1vg0 [ 0 ] = l500zl53pv . P_16 ; } localDW -> jfy4pktyte [ 0
] = localB -> cmkmw2u0ef ; if ( localB -> cmkmw2u0ef > l500zl53pv . P_20 ) {
localDW -> jfy4pktyte [ 0 ] = l500zl53pv . P_20 ; } else if ( localB ->
cmkmw2u0ef < l500zl53pv . P_21 ) { localDW -> jfy4pktyte [ 0 ] = l500zl53pv .
P_21 ; } localDW -> icks32ycfg [ 0 ] = localB -> oo2s5ucnfh ; if ( localB ->
oo2s5ucnfh > l500zl53pv . P_28 ) { localDW -> icks32ycfg [ 0 ] = l500zl53pv .
P_28 ; } else if ( localB -> oo2s5ucnfh < l500zl53pv . P_29 ) { localDW ->
icks32ycfg [ 0 ] = l500zl53pv . P_29 ; } localDW -> fnqc2inubu [ 0 ] = localB
-> desaasq1z0 ; if ( localB -> desaasq1z0 > l500zl53pv . P_33 ) { localDW ->
fnqc2inubu [ 0 ] = l500zl53pv . P_33 ; } else if ( localB -> desaasq1z0 <
l500zl53pv . P_34 ) { localDW -> fnqc2inubu [ 0 ] = l500zl53pv . P_34 ; }
localDW -> lzooef1vg0 [ 1 ] = localB -> gkjkthrao5 ; if ( localB ->
gkjkthrao5 > l500zl53pv . P_15 ) { localDW -> lzooef1vg0 [ 1 ] = l500zl53pv .
P_15 ; } else if ( localB -> gkjkthrao5 < l500zl53pv . P_16 ) { localDW ->
lzooef1vg0 [ 1 ] = l500zl53pv . P_16 ; } localDW -> jfy4pktyte [ 1 ] = localB
-> cmkmw2u0ef ; if ( localB -> cmkmw2u0ef > l500zl53pv . P_20 ) { localDW ->
jfy4pktyte [ 1 ] = l500zl53pv . P_20 ; } else if ( localB -> cmkmw2u0ef <
l500zl53pv . P_21 ) { localDW -> jfy4pktyte [ 1 ] = l500zl53pv . P_21 ; }
localDW -> icks32ycfg [ 1 ] = localB -> oo2s5ucnfh ; if ( localB ->
oo2s5ucnfh > l500zl53pv . P_28 ) { localDW -> icks32ycfg [ 1 ] = l500zl53pv .
P_28 ; } else if ( localB -> oo2s5ucnfh < l500zl53pv . P_29 ) { localDW ->
icks32ycfg [ 1 ] = l500zl53pv . P_29 ; } localDW -> fnqc2inubu [ 1 ] = localB
-> desaasq1z0 ; if ( localB -> desaasq1z0 > l500zl53pv . P_33 ) { localDW ->
fnqc2inubu [ 1 ] = l500zl53pv . P_33 ; } else if ( localB -> desaasq1z0 <
l500zl53pv . P_34 ) { localDW -> fnqc2inubu [ 1 ] = l500zl53pv . P_34 ; }
localDW -> lzooef1vg0 [ 2 ] = localB -> gkjkthrao5 ; if ( localB ->
gkjkthrao5 > l500zl53pv . P_15 ) { localDW -> lzooef1vg0 [ 2 ] = l500zl53pv .
P_15 ; } else if ( localB -> gkjkthrao5 < l500zl53pv . P_16 ) { localDW ->
lzooef1vg0 [ 2 ] = l500zl53pv . P_16 ; } localDW -> jfy4pktyte [ 2 ] = localB
-> cmkmw2u0ef ; if ( localB -> cmkmw2u0ef > l500zl53pv . P_20 ) { localDW ->
jfy4pktyte [ 2 ] = l500zl53pv . P_20 ; } else if ( localB -> cmkmw2u0ef <
l500zl53pv . P_21 ) { localDW -> jfy4pktyte [ 2 ] = l500zl53pv . P_21 ; }
localDW -> icks32ycfg [ 2 ] = localB -> oo2s5ucnfh ; if ( localB ->
oo2s5ucnfh > l500zl53pv . P_28 ) { localDW -> icks32ycfg [ 2 ] = l500zl53pv .
P_28 ; } else if ( localB -> oo2s5ucnfh < l500zl53pv . P_29 ) { localDW ->
icks32ycfg [ 2 ] = l500zl53pv . P_29 ; } localDW -> fnqc2inubu [ 2 ] = localB
-> desaasq1z0 ; if ( localB -> desaasq1z0 > l500zl53pv . P_33 ) { localDW ->
fnqc2inubu [ 2 ] = l500zl53pv . P_33 ; } else if ( localB -> desaasq1z0 <
l500zl53pv . P_34 ) { localDW -> fnqc2inubu [ 2 ] = l500zl53pv . P_34 ; }
localDW -> hrgjjsvat3 = 0 ; } void jht1q2yrb0 ( i0jbbxzxhp * localB ,
mubhr0gjvh * localDW ) { localDW -> pl2jqaqhbi = 0 ; localDW -> k43afusiln =
0 ; localDW -> o03zmxvrq4 = 0 ; localDW -> lzooef1vg0 [ 0 ] = localB ->
gkjkthrao5 ; if ( localB -> gkjkthrao5 > l500zl53pv . P_15 ) { localDW ->
lzooef1vg0 [ 0 ] = l500zl53pv . P_15 ; } else if ( localB -> gkjkthrao5 <
l500zl53pv . P_16 ) { localDW -> lzooef1vg0 [ 0 ] = l500zl53pv . P_16 ; }
localDW -> jfy4pktyte [ 0 ] = localB -> cmkmw2u0ef ; if ( localB ->
cmkmw2u0ef > l500zl53pv . P_20 ) { localDW -> jfy4pktyte [ 0 ] = l500zl53pv .
P_20 ; } else if ( localB -> cmkmw2u0ef < l500zl53pv . P_21 ) { localDW ->
jfy4pktyte [ 0 ] = l500zl53pv . P_21 ; } localDW -> icks32ycfg [ 0 ] = localB
-> oo2s5ucnfh ; if ( localB -> oo2s5ucnfh > l500zl53pv . P_28 ) { localDW ->
icks32ycfg [ 0 ] = l500zl53pv . P_28 ; } else if ( localB -> oo2s5ucnfh <
l500zl53pv . P_29 ) { localDW -> icks32ycfg [ 0 ] = l500zl53pv . P_29 ; }
localDW -> fnqc2inubu [ 0 ] = localB -> desaasq1z0 ; if ( localB ->
desaasq1z0 > l500zl53pv . P_33 ) { localDW -> fnqc2inubu [ 0 ] = l500zl53pv .
P_33 ; } else if ( localB -> desaasq1z0 < l500zl53pv . P_34 ) { localDW ->
fnqc2inubu [ 0 ] = l500zl53pv . P_34 ; } localDW -> lzooef1vg0 [ 1 ] = localB
-> gkjkthrao5 ; if ( localB -> gkjkthrao5 > l500zl53pv . P_15 ) { localDW ->
lzooef1vg0 [ 1 ] = l500zl53pv . P_15 ; } else if ( localB -> gkjkthrao5 <
l500zl53pv . P_16 ) { localDW -> lzooef1vg0 [ 1 ] = l500zl53pv . P_16 ; }
localDW -> jfy4pktyte [ 1 ] = localB -> cmkmw2u0ef ; if ( localB ->
cmkmw2u0ef > l500zl53pv . P_20 ) { localDW -> jfy4pktyte [ 1 ] = l500zl53pv .
P_20 ; } else if ( localB -> cmkmw2u0ef < l500zl53pv . P_21 ) { localDW ->
jfy4pktyte [ 1 ] = l500zl53pv . P_21 ; } localDW -> icks32ycfg [ 1 ] = localB
-> oo2s5ucnfh ; if ( localB -> oo2s5ucnfh > l500zl53pv . P_28 ) { localDW ->
icks32ycfg [ 1 ] = l500zl53pv . P_28 ; } else if ( localB -> oo2s5ucnfh <
l500zl53pv . P_29 ) { localDW -> icks32ycfg [ 1 ] = l500zl53pv . P_29 ; }
localDW -> fnqc2inubu [ 1 ] = localB -> desaasq1z0 ; if ( localB ->
desaasq1z0 > l500zl53pv . P_33 ) { localDW -> fnqc2inubu [ 1 ] = l500zl53pv .
P_33 ; } else if ( localB -> desaasq1z0 < l500zl53pv . P_34 ) { localDW ->
fnqc2inubu [ 1 ] = l500zl53pv . P_34 ; } localDW -> lzooef1vg0 [ 2 ] = localB
-> gkjkthrao5 ; if ( localB -> gkjkthrao5 > l500zl53pv . P_15 ) { localDW ->
lzooef1vg0 [ 2 ] = l500zl53pv . P_15 ; } else if ( localB -> gkjkthrao5 <
l500zl53pv . P_16 ) { localDW -> lzooef1vg0 [ 2 ] = l500zl53pv . P_16 ; }
localDW -> jfy4pktyte [ 2 ] = localB -> cmkmw2u0ef ; if ( localB ->
cmkmw2u0ef > l500zl53pv . P_20 ) { localDW -> jfy4pktyte [ 2 ] = l500zl53pv .
P_20 ; } else if ( localB -> cmkmw2u0ef < l500zl53pv . P_21 ) { localDW ->
jfy4pktyte [ 2 ] = l500zl53pv . P_21 ; } localDW -> icks32ycfg [ 2 ] = localB
-> oo2s5ucnfh ; if ( localB -> oo2s5ucnfh > l500zl53pv . P_28 ) { localDW ->
icks32ycfg [ 2 ] = l500zl53pv . P_28 ; } else if ( localB -> oo2s5ucnfh <
l500zl53pv . P_29 ) { localDW -> icks32ycfg [ 2 ] = l500zl53pv . P_29 ; }
localDW -> fnqc2inubu [ 2 ] = localB -> desaasq1z0 ; if ( localB ->
desaasq1z0 > l500zl53pv . P_33 ) { localDW -> fnqc2inubu [ 2 ] = l500zl53pv .
P_33 ; } else if ( localB -> desaasq1z0 < l500zl53pv . P_34 ) { localDW ->
fnqc2inubu [ 2 ] = l500zl53pv . P_34 ; } localDW -> hrgjjsvat3 = 0 ; } void
fsyqt3jfsy ( i0jbbxzxhp * localB ) { localB -> gkjkthrao5 = l500zl53pv . P_12
; localB -> cmkmw2u0ef = l500zl53pv . P_13 ; localB -> oo2s5ucnfh =
l500zl53pv . P_25 ; localB -> desaasq1z0 = l500zl53pv . P_26 ; } void
HC_core_demand ( const real32_T mqqyeplicw [ 3 ] , const real32_T dhep1k4opo
[ 3 ] , real32_T ceq1qfoyl4 [ 3 ] , real32_T exzrileqpq [ 3 ] , i0jbbxzxhp *
localB , mubhr0gjvh * localDW ) { real32_T ancntkp1sh_idx_0_im ; real32_T
ancntkp1sh_idx_0_re ; real32_T ancntkp1sh_idx_1_im ; real32_T
ancntkp1sh_idx_1_re ; real32_T ancntkp1sh_idx_2_im ; real32_T
ancntkp1sh_idx_2_re ; real32_T exzrileqpq_p ; real32_T i3xqgth4xf_idx_0 ;
real32_T i3xqgth4xf_idx_1 ; real32_T i3xqgth4xf_idx_2 ; ancntkp1sh_idx_0_re =
( l500zl53pv . P_38 [ 0 ] + mqqyeplicw [ 0 ] ) * l500zl53pv . P_11 ;
ancntkp1sh_idx_0_im = l500zl53pv . P_10 * dhep1k4opo [ 0 ] ;
ancntkp1sh_idx_1_re = ( l500zl53pv . P_38 [ 1 ] + mqqyeplicw [ 1 ] ) *
l500zl53pv . P_11 ; ancntkp1sh_idx_1_im = l500zl53pv . P_10 * dhep1k4opo [ 1
] ; ancntkp1sh_idx_2_re = ( l500zl53pv . P_38 [ 2 ] + mqqyeplicw [ 2 ] ) *
l500zl53pv . P_11 ; ancntkp1sh_idx_2_im = l500zl53pv . P_10 * dhep1k4opo [ 2
] ; localB -> gkjkthrao5 = l500zl53pv . P_12 ; localB -> cmkmw2u0ef =
l500zl53pv . P_13 ; if ( ( l500zl53pv . P_7 != 0.0 ) || ( localDW ->
pl2jqaqhbi != 0 ) ) { localDW -> lzooef1vg0 [ 0 ] = localB -> gkjkthrao5 ; if
( localB -> gkjkthrao5 > l500zl53pv . P_15 ) { localDW -> lzooef1vg0 [ 0 ] =
l500zl53pv . P_15 ; } else if ( localB -> gkjkthrao5 < l500zl53pv . P_16 ) {
localDW -> lzooef1vg0 [ 0 ] = l500zl53pv . P_16 ; } localDW -> lzooef1vg0 [ 1
] = localB -> gkjkthrao5 ; if ( localB -> gkjkthrao5 > l500zl53pv . P_15 ) {
localDW -> lzooef1vg0 [ 1 ] = l500zl53pv . P_15 ; } else if ( localB ->
gkjkthrao5 < l500zl53pv . P_16 ) { localDW -> lzooef1vg0 [ 1 ] = l500zl53pv .
P_16 ; } localDW -> lzooef1vg0 [ 2 ] = localB -> gkjkthrao5 ; if ( localB ->
gkjkthrao5 > l500zl53pv . P_15 ) { localDW -> lzooef1vg0 [ 2 ] = l500zl53pv .
P_15 ; } else if ( localB -> gkjkthrao5 < l500zl53pv . P_16 ) { localDW ->
lzooef1vg0 [ 2 ] = l500zl53pv . P_16 ; } } exzrileqpq_p = 2.0F * l500zl53pv .
P_2 * ( 6.28318548F * l500zl53pv . P_4 ) ; if ( localDW -> lzooef1vg0 [ 0 ] >
l500zl53pv . P_17 ) { i3xqgth4xf_idx_2 = l500zl53pv . P_17 ; } else if (
localDW -> lzooef1vg0 [ 0 ] < l500zl53pv . P_18 ) { i3xqgth4xf_idx_2 =
l500zl53pv . P_18 ; } else { i3xqgth4xf_idx_2 = localDW -> lzooef1vg0 [ 0 ] ;
} localB -> lvzteedo4g [ 0 ] = i3xqgth4xf_idx_2 ; i3xqgth4xf_idx_0 =
exzrileqpq_p * i3xqgth4xf_idx_2 ; if ( localDW -> lzooef1vg0 [ 1 ] >
l500zl53pv . P_17 ) { i3xqgth4xf_idx_2 = l500zl53pv . P_17 ; } else if (
localDW -> lzooef1vg0 [ 1 ] < l500zl53pv . P_18 ) { i3xqgth4xf_idx_2 =
l500zl53pv . P_18 ; } else { i3xqgth4xf_idx_2 = localDW -> lzooef1vg0 [ 1 ] ;
} localB -> lvzteedo4g [ 1 ] = i3xqgth4xf_idx_2 ; i3xqgth4xf_idx_1 =
exzrileqpq_p * i3xqgth4xf_idx_2 ; if ( localDW -> lzooef1vg0 [ 2 ] >
l500zl53pv . P_17 ) { i3xqgth4xf_idx_2 = l500zl53pv . P_17 ; } else if (
localDW -> lzooef1vg0 [ 2 ] < l500zl53pv . P_18 ) { i3xqgth4xf_idx_2 =
l500zl53pv . P_18 ; } else { i3xqgth4xf_idx_2 = localDW -> lzooef1vg0 [ 2 ] ;
} localB -> lvzteedo4g [ 2 ] = i3xqgth4xf_idx_2 ; i3xqgth4xf_idx_2 *=
exzrileqpq_p ; if ( ( l500zl53pv . P_6 != 0.0 ) || ( localDW -> k43afusiln !=
0 ) ) { localDW -> jfy4pktyte [ 0 ] = localB -> cmkmw2u0ef ; if ( localB ->
cmkmw2u0ef > l500zl53pv . P_20 ) { localDW -> jfy4pktyte [ 0 ] = l500zl53pv .
P_20 ; } else if ( localB -> cmkmw2u0ef < l500zl53pv . P_21 ) { localDW ->
jfy4pktyte [ 0 ] = l500zl53pv . P_21 ; } localDW -> jfy4pktyte [ 1 ] = localB
-> cmkmw2u0ef ; if ( localB -> cmkmw2u0ef > l500zl53pv . P_20 ) { localDW ->
jfy4pktyte [ 1 ] = l500zl53pv . P_20 ; } else if ( localB -> cmkmw2u0ef <
l500zl53pv . P_21 ) { localDW -> jfy4pktyte [ 1 ] = l500zl53pv . P_21 ; }
localDW -> jfy4pktyte [ 2 ] = localB -> cmkmw2u0ef ; if ( localB ->
cmkmw2u0ef > l500zl53pv . P_20 ) { localDW -> jfy4pktyte [ 2 ] = l500zl53pv .
P_20 ; } else if ( localB -> cmkmw2u0ef < l500zl53pv . P_21 ) { localDW ->
jfy4pktyte [ 2 ] = l500zl53pv . P_21 ; } } if ( localDW -> jfy4pktyte [ 0 ] >
l500zl53pv . P_22 ) { exzrileqpq_p = l500zl53pv . P_22 ; } else if ( localDW
-> jfy4pktyte [ 0 ] < l500zl53pv . P_23 ) { exzrileqpq_p = l500zl53pv . P_23
; } else { exzrileqpq_p = localDW -> jfy4pktyte [ 0 ] ; } exzrileqpq_p *=
l500zl53pv . P_24 ; exzrileqpq [ 0 ] = exzrileqpq_p ; localB -> f0mlqtnqke [
0 ] = ( muSingleScalarHypot ( ancntkp1sh_idx_0_re , ancntkp1sh_idx_0_im ) -
exzrileqpq_p ) - i3xqgth4xf_idx_0 ; if ( localDW -> jfy4pktyte [ 1 ] >
l500zl53pv . P_22 ) { exzrileqpq_p = l500zl53pv . P_22 ; } else if ( localDW
-> jfy4pktyte [ 1 ] < l500zl53pv . P_23 ) { exzrileqpq_p = l500zl53pv . P_23
; } else { exzrileqpq_p = localDW -> jfy4pktyte [ 1 ] ; } exzrileqpq_p *=
l500zl53pv . P_24 ; exzrileqpq [ 1 ] = exzrileqpq_p ; localB -> f0mlqtnqke [
1 ] = ( muSingleScalarHypot ( ancntkp1sh_idx_1_re , ancntkp1sh_idx_1_im ) -
exzrileqpq_p ) - i3xqgth4xf_idx_1 ; if ( localDW -> jfy4pktyte [ 2 ] >
l500zl53pv . P_22 ) { exzrileqpq_p = l500zl53pv . P_22 ; } else if ( localDW
-> jfy4pktyte [ 2 ] < l500zl53pv . P_23 ) { exzrileqpq_p = l500zl53pv . P_23
; } else { exzrileqpq_p = localDW -> jfy4pktyte [ 2 ] ; } exzrileqpq_p *=
l500zl53pv . P_24 ; exzrileqpq [ 2 ] = exzrileqpq_p ; localB -> f0mlqtnqke [
2 ] = ( muSingleScalarHypot ( ancntkp1sh_idx_2_re , ancntkp1sh_idx_2_im ) -
exzrileqpq_p ) - i3xqgth4xf_idx_2 ; switch ( ( int32_T ) l500zl53pv . P_0 ) {
case 1 : break ; case 2 : exzrileqpq [ 0 ] = localB -> f0mlqtnqke [ 0 ] ;
exzrileqpq [ 1 ] = localB -> f0mlqtnqke [ 1 ] ; exzrileqpq [ 2 ] = localB ->
f0mlqtnqke [ 2 ] ; break ; case 3 : exzrileqpq [ 0 ] = i3xqgth4xf_idx_0 ;
exzrileqpq [ 1 ] = i3xqgth4xf_idx_1 ; exzrileqpq [ 2 ] = i3xqgth4xf_idx_2 ;
break ; default : exzrileqpq [ 0 ] += localB -> f0mlqtnqke [ 0 ] ; exzrileqpq
[ 1 ] += localB -> f0mlqtnqke [ 1 ] ; exzrileqpq [ 2 ] += localB ->
f0mlqtnqke [ 2 ] ; break ; } localB -> oo2s5ucnfh = l500zl53pv . P_25 ;
localB -> desaasq1z0 = l500zl53pv . P_26 ; if ( ( l500zl53pv . P_9 != 0.0 )
|| ( localDW -> o03zmxvrq4 != 0 ) ) { localDW -> icks32ycfg [ 0 ] = localB ->
oo2s5ucnfh ; if ( localB -> oo2s5ucnfh > l500zl53pv . P_28 ) { localDW ->
icks32ycfg [ 0 ] = l500zl53pv . P_28 ; } else if ( localB -> oo2s5ucnfh <
l500zl53pv . P_29 ) { localDW -> icks32ycfg [ 0 ] = l500zl53pv . P_29 ; }
localDW -> icks32ycfg [ 1 ] = localB -> oo2s5ucnfh ; if ( localB ->
oo2s5ucnfh > l500zl53pv . P_28 ) { localDW -> icks32ycfg [ 1 ] = l500zl53pv .
P_28 ; } else if ( localB -> oo2s5ucnfh < l500zl53pv . P_29 ) { localDW ->
icks32ycfg [ 1 ] = l500zl53pv . P_29 ; } localDW -> icks32ycfg [ 2 ] = localB
-> oo2s5ucnfh ; if ( localB -> oo2s5ucnfh > l500zl53pv . P_28 ) { localDW ->
icks32ycfg [ 2 ] = l500zl53pv . P_28 ; } else if ( localB -> oo2s5ucnfh <
l500zl53pv . P_29 ) { localDW -> icks32ycfg [ 2 ] = l500zl53pv . P_29 ; } }
exzrileqpq_p = 2.0F * l500zl53pv . P_3 * ( 6.28318548F * l500zl53pv . P_5 ) ;
if ( localDW -> icks32ycfg [ 0 ] > l500zl53pv . P_30 ) { i3xqgth4xf_idx_2 =
l500zl53pv . P_30 ; } else if ( localDW -> icks32ycfg [ 0 ] < l500zl53pv .
P_31 ) { i3xqgth4xf_idx_2 = l500zl53pv . P_31 ; } else { i3xqgth4xf_idx_2 =
localDW -> icks32ycfg [ 0 ] ; } localB -> l232c4xdwi [ 0 ] = i3xqgth4xf_idx_2
; i3xqgth4xf_idx_0 = exzrileqpq_p * i3xqgth4xf_idx_2 ; if ( localDW ->
icks32ycfg [ 1 ] > l500zl53pv . P_30 ) { i3xqgth4xf_idx_2 = l500zl53pv . P_30
; } else if ( localDW -> icks32ycfg [ 1 ] < l500zl53pv . P_31 ) {
i3xqgth4xf_idx_2 = l500zl53pv . P_31 ; } else { i3xqgth4xf_idx_2 = localDW ->
icks32ycfg [ 1 ] ; } localB -> l232c4xdwi [ 1 ] = i3xqgth4xf_idx_2 ;
i3xqgth4xf_idx_1 = exzrileqpq_p * i3xqgth4xf_idx_2 ; if ( localDW ->
icks32ycfg [ 2 ] > l500zl53pv . P_30 ) { i3xqgth4xf_idx_2 = l500zl53pv . P_30
; } else if ( localDW -> icks32ycfg [ 2 ] < l500zl53pv . P_31 ) {
i3xqgth4xf_idx_2 = l500zl53pv . P_31 ; } else { i3xqgth4xf_idx_2 = localDW ->
icks32ycfg [ 2 ] ; } localB -> l232c4xdwi [ 2 ] = i3xqgth4xf_idx_2 ;
i3xqgth4xf_idx_2 *= exzrileqpq_p ; if ( ( l500zl53pv . P_8 != 0.0 ) || (
localDW -> hrgjjsvat3 != 0 ) ) { localDW -> fnqc2inubu [ 0 ] = localB ->
desaasq1z0 ; if ( localB -> desaasq1z0 > l500zl53pv . P_33 ) { localDW ->
fnqc2inubu [ 0 ] = l500zl53pv . P_33 ; } else if ( localB -> desaasq1z0 <
l500zl53pv . P_34 ) { localDW -> fnqc2inubu [ 0 ] = l500zl53pv . P_34 ; }
localDW -> fnqc2inubu [ 1 ] = localB -> desaasq1z0 ; if ( localB ->
desaasq1z0 > l500zl53pv . P_33 ) { localDW -> fnqc2inubu [ 1 ] = l500zl53pv .
P_33 ; } else if ( localB -> desaasq1z0 < l500zl53pv . P_34 ) { localDW ->
fnqc2inubu [ 1 ] = l500zl53pv . P_34 ; } localDW -> fnqc2inubu [ 2 ] = localB
-> desaasq1z0 ; if ( localB -> desaasq1z0 > l500zl53pv . P_33 ) { localDW ->
fnqc2inubu [ 2 ] = l500zl53pv . P_33 ; } else if ( localB -> desaasq1z0 <
l500zl53pv . P_34 ) { localDW -> fnqc2inubu [ 2 ] = l500zl53pv . P_34 ; } }
if ( localDW -> fnqc2inubu [ 0 ] > l500zl53pv . P_35 ) { exzrileqpq_p =
l500zl53pv . P_35 ; } else if ( localDW -> fnqc2inubu [ 0 ] < l500zl53pv .
P_36 ) { exzrileqpq_p = l500zl53pv . P_36 ; } else { exzrileqpq_p = localDW
-> fnqc2inubu [ 0 ] ; } exzrileqpq_p *= l500zl53pv . P_37 ; ceq1qfoyl4 [ 0 ]
= exzrileqpq_p ; localB -> pkk5muuxvg [ 0 ] = ( muSingleScalarAtan2 (
ancntkp1sh_idx_0_im , ancntkp1sh_idx_0_re ) - exzrileqpq_p ) -
i3xqgth4xf_idx_0 ; if ( localDW -> fnqc2inubu [ 1 ] > l500zl53pv . P_35 ) {
exzrileqpq_p = l500zl53pv . P_35 ; } else if ( localDW -> fnqc2inubu [ 1 ] <
l500zl53pv . P_36 ) { exzrileqpq_p = l500zl53pv . P_36 ; } else {
exzrileqpq_p = localDW -> fnqc2inubu [ 1 ] ; } exzrileqpq_p *= l500zl53pv .
P_37 ; ceq1qfoyl4 [ 1 ] = exzrileqpq_p ; localB -> pkk5muuxvg [ 1 ] = (
muSingleScalarAtan2 ( ancntkp1sh_idx_1_im , ancntkp1sh_idx_1_re ) -
exzrileqpq_p ) - i3xqgth4xf_idx_1 ; if ( localDW -> fnqc2inubu [ 2 ] >
l500zl53pv . P_35 ) { exzrileqpq_p = l500zl53pv . P_35 ; } else if ( localDW
-> fnqc2inubu [ 2 ] < l500zl53pv . P_36 ) { exzrileqpq_p = l500zl53pv . P_36
; } else { exzrileqpq_p = localDW -> fnqc2inubu [ 2 ] ; } exzrileqpq_p *=
l500zl53pv . P_37 ; ceq1qfoyl4 [ 2 ] = exzrileqpq_p ; localB -> pkk5muuxvg [
2 ] = ( muSingleScalarAtan2 ( ancntkp1sh_idx_2_im , ancntkp1sh_idx_2_re ) -
exzrileqpq_p ) - i3xqgth4xf_idx_2 ; switch ( ( int32_T ) l500zl53pv . P_1 ) {
case 1 : break ; case 2 : ceq1qfoyl4 [ 0 ] = localB -> pkk5muuxvg [ 0 ] ;
ceq1qfoyl4 [ 1 ] = localB -> pkk5muuxvg [ 1 ] ; ceq1qfoyl4 [ 2 ] = localB ->
pkk5muuxvg [ 2 ] ; break ; case 3 : ceq1qfoyl4 [ 0 ] = i3xqgth4xf_idx_0 ;
ceq1qfoyl4 [ 1 ] = i3xqgth4xf_idx_1 ; ceq1qfoyl4 [ 2 ] = i3xqgth4xf_idx_2 ;
break ; default : ceq1qfoyl4 [ 0 ] += localB -> pkk5muuxvg [ 0 ] ; ceq1qfoyl4
[ 1 ] += localB -> pkk5muuxvg [ 1 ] ; ceq1qfoyl4 [ 2 ] += localB ->
pkk5muuxvg [ 2 ] ; break ; } } void js2osz2qo5 ( i0jbbxzxhp * localB ,
mubhr0gjvh * localDW ) { real32_T lzooef1vg0 ; if ( l500zl53pv . P_7 > 0.0 )
{ localDW -> pl2jqaqhbi = 1 ; } else if ( l500zl53pv . P_7 < 0.0 ) { localDW
-> pl2jqaqhbi = - 1 ; } else if ( l500zl53pv . P_7 == 0.0 ) { localDW ->
pl2jqaqhbi = 0 ; } else { localDW -> pl2jqaqhbi = 2 ; } if ( l500zl53pv . P_6
> 0.0 ) { localDW -> k43afusiln = 1 ; } else if ( l500zl53pv . P_6 < 0.0 ) {
localDW -> k43afusiln = - 1 ; } else if ( l500zl53pv . P_6 == 0.0 ) { localDW
-> k43afusiln = 0 ; } else { localDW -> k43afusiln = 2 ; } if ( l500zl53pv .
P_9 > 0.0 ) { localDW -> o03zmxvrq4 = 1 ; } else if ( l500zl53pv . P_9 < 0.0
) { localDW -> o03zmxvrq4 = - 1 ; } else if ( l500zl53pv . P_9 == 0.0 ) {
localDW -> o03zmxvrq4 = 0 ; } else { localDW -> o03zmxvrq4 = 2 ; } lzooef1vg0
= l500zl53pv . P_14 * localB -> f0mlqtnqke [ 0 ] + localDW -> lzooef1vg0 [ 0
] ; localDW -> lzooef1vg0 [ 0 ] = lzooef1vg0 ; if ( lzooef1vg0 > l500zl53pv .
P_15 ) { localDW -> lzooef1vg0 [ 0 ] = l500zl53pv . P_15 ; } else if (
lzooef1vg0 < l500zl53pv . P_16 ) { localDW -> lzooef1vg0 [ 0 ] = l500zl53pv .
P_16 ; } lzooef1vg0 = l500zl53pv . P_19 * localB -> lvzteedo4g [ 0 ] +
localDW -> jfy4pktyte [ 0 ] ; localDW -> jfy4pktyte [ 0 ] = lzooef1vg0 ; if (
lzooef1vg0 > l500zl53pv . P_20 ) { localDW -> jfy4pktyte [ 0 ] = l500zl53pv .
P_20 ; } else if ( lzooef1vg0 < l500zl53pv . P_21 ) { localDW -> jfy4pktyte [
0 ] = l500zl53pv . P_21 ; } lzooef1vg0 = l500zl53pv . P_27 * localB ->
pkk5muuxvg [ 0 ] + localDW -> icks32ycfg [ 0 ] ; localDW -> icks32ycfg [ 0 ]
= lzooef1vg0 ; if ( lzooef1vg0 > l500zl53pv . P_28 ) { localDW -> icks32ycfg
[ 0 ] = l500zl53pv . P_28 ; } else if ( lzooef1vg0 < l500zl53pv . P_29 ) {
localDW -> icks32ycfg [ 0 ] = l500zl53pv . P_29 ; } lzooef1vg0 = l500zl53pv .
P_32 * localB -> l232c4xdwi [ 0 ] + localDW -> fnqc2inubu [ 0 ] ; localDW ->
fnqc2inubu [ 0 ] = lzooef1vg0 ; if ( lzooef1vg0 > l500zl53pv . P_33 ) {
localDW -> fnqc2inubu [ 0 ] = l500zl53pv . P_33 ; } else if ( lzooef1vg0 <
l500zl53pv . P_34 ) { localDW -> fnqc2inubu [ 0 ] = l500zl53pv . P_34 ; }
lzooef1vg0 = l500zl53pv . P_14 * localB -> f0mlqtnqke [ 1 ] + localDW ->
lzooef1vg0 [ 1 ] ; localDW -> lzooef1vg0 [ 1 ] = lzooef1vg0 ; if ( lzooef1vg0
> l500zl53pv . P_15 ) { localDW -> lzooef1vg0 [ 1 ] = l500zl53pv . P_15 ; }
else if ( lzooef1vg0 < l500zl53pv . P_16 ) { localDW -> lzooef1vg0 [ 1 ] =
l500zl53pv . P_16 ; } lzooef1vg0 = l500zl53pv . P_19 * localB -> lvzteedo4g [
1 ] + localDW -> jfy4pktyte [ 1 ] ; localDW -> jfy4pktyte [ 1 ] = lzooef1vg0
; if ( lzooef1vg0 > l500zl53pv . P_20 ) { localDW -> jfy4pktyte [ 1 ] =
l500zl53pv . P_20 ; } else if ( lzooef1vg0 < l500zl53pv . P_21 ) { localDW ->
jfy4pktyte [ 1 ] = l500zl53pv . P_21 ; } lzooef1vg0 = l500zl53pv . P_27 *
localB -> pkk5muuxvg [ 1 ] + localDW -> icks32ycfg [ 1 ] ; localDW ->
icks32ycfg [ 1 ] = lzooef1vg0 ; if ( lzooef1vg0 > l500zl53pv . P_28 ) {
localDW -> icks32ycfg [ 1 ] = l500zl53pv . P_28 ; } else if ( lzooef1vg0 <
l500zl53pv . P_29 ) { localDW -> icks32ycfg [ 1 ] = l500zl53pv . P_29 ; }
lzooef1vg0 = l500zl53pv . P_32 * localB -> l232c4xdwi [ 1 ] + localDW ->
fnqc2inubu [ 1 ] ; localDW -> fnqc2inubu [ 1 ] = lzooef1vg0 ; if ( lzooef1vg0
> l500zl53pv . P_33 ) { localDW -> fnqc2inubu [ 1 ] = l500zl53pv . P_33 ; }
else if ( lzooef1vg0 < l500zl53pv . P_34 ) { localDW -> fnqc2inubu [ 1 ] =
l500zl53pv . P_34 ; } lzooef1vg0 = l500zl53pv . P_14 * localB -> f0mlqtnqke [
2 ] + localDW -> lzooef1vg0 [ 2 ] ; localDW -> lzooef1vg0 [ 2 ] = lzooef1vg0
; if ( lzooef1vg0 > l500zl53pv . P_15 ) { localDW -> lzooef1vg0 [ 2 ] =
l500zl53pv . P_15 ; } else if ( lzooef1vg0 < l500zl53pv . P_16 ) { localDW ->
lzooef1vg0 [ 2 ] = l500zl53pv . P_16 ; } lzooef1vg0 = l500zl53pv . P_19 *
localB -> lvzteedo4g [ 2 ] + localDW -> jfy4pktyte [ 2 ] ; localDW ->
jfy4pktyte [ 2 ] = lzooef1vg0 ; if ( lzooef1vg0 > l500zl53pv . P_20 ) {
localDW -> jfy4pktyte [ 2 ] = l500zl53pv . P_20 ; } else if ( lzooef1vg0 <
l500zl53pv . P_21 ) { localDW -> jfy4pktyte [ 2 ] = l500zl53pv . P_21 ; }
lzooef1vg0 = l500zl53pv . P_27 * localB -> pkk5muuxvg [ 2 ] + localDW ->
icks32ycfg [ 2 ] ; localDW -> icks32ycfg [ 2 ] = lzooef1vg0 ; if ( lzooef1vg0
> l500zl53pv . P_28 ) { localDW -> icks32ycfg [ 2 ] = l500zl53pv . P_28 ; }
else if ( lzooef1vg0 < l500zl53pv . P_29 ) { localDW -> icks32ycfg [ 2 ] =
l500zl53pv . P_29 ; } lzooef1vg0 = l500zl53pv . P_32 * localB -> l232c4xdwi [
2 ] + localDW -> fnqc2inubu [ 2 ] ; localDW -> fnqc2inubu [ 2 ] = lzooef1vg0
; if ( lzooef1vg0 > l500zl53pv . P_33 ) { localDW -> fnqc2inubu [ 2 ] =
l500zl53pv . P_33 ; } else if ( lzooef1vg0 < l500zl53pv . P_34 ) { localDW ->
fnqc2inubu [ 2 ] = l500zl53pv . P_34 ; } if ( l500zl53pv . P_8 > 0.0 ) {
localDW -> hrgjjsvat3 = 1 ; } else if ( l500zl53pv . P_8 < 0.0 ) { localDW ->
hrgjjsvat3 = - 1 ; } else if ( l500zl53pv . P_8 == 0.0 ) { localDW ->
hrgjjsvat3 = 0 ; } else { localDW -> hrgjjsvat3 = 2 ; } } void amz4zilgtp (
bwqie2cqq2 * const bazujgqrv3 ) { if ( ! slIsRapidAcceleratorSimulating ( ) )
{ slmrRunPluginEvent ( bazujgqrv3 -> _mdlRefSfcnS , "HC_core_demand" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void hfxfypauzg (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , bwqie2cqq2
* const bazujgqrv3 , i0jbbxzxhp * localB , mubhr0gjvh * localDW , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) {
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; l500zl53pv . P_15 = rtInfF ;
l500zl53pv . P_16 = rtMinusInfF ; l500zl53pv . P_17 = rtInfF ; l500zl53pv .
P_18 = rtMinusInfF ; l500zl53pv . P_20 = rtInfF ; l500zl53pv . P_21 =
rtMinusInfF ; l500zl53pv . P_22 = rtInfF ; l500zl53pv . P_23 = rtMinusInfF ;
l500zl53pv . P_28 = rtInfF ; l500zl53pv . P_29 = rtMinusInfF ; l500zl53pv .
P_30 = rtInfF ; l500zl53pv . P_31 = rtMinusInfF ; l500zl53pv . P_33 = rtInfF
; l500zl53pv . P_34 = rtMinusInfF ; l500zl53pv . P_35 = rtInfF ; l500zl53pv .
P_36 = rtMinusInfF ; ( void ) memset ( ( void * ) bazujgqrv3 , 0 , sizeof (
bwqie2cqq2 ) ) ; bazujgqrv3 -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0
; bazujgqrv3 -> Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; bazujgqrv3 ->
_mdlRefSfcnS = ( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) )
{ slmrRunPluginEvent ( bazujgqrv3 -> _mdlRefSfcnS , "HC_core_demand" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> gkjkthrao5 = 0.0F
; localB -> cmkmw2u0ef = 0.0F ; localB -> lvzteedo4g [ 0 ] = 0.0F ; localB ->
lvzteedo4g [ 1 ] = 0.0F ; localB -> lvzteedo4g [ 2 ] = 0.0F ; localB ->
f0mlqtnqke [ 0 ] = 0.0F ; localB -> f0mlqtnqke [ 1 ] = 0.0F ; localB ->
f0mlqtnqke [ 2 ] = 0.0F ; localB -> oo2s5ucnfh = 0.0F ; localB -> desaasq1z0
= 0.0F ; localB -> l232c4xdwi [ 0 ] = 0.0F ; localB -> l232c4xdwi [ 1 ] =
0.0F ; localB -> l232c4xdwi [ 2 ] = 0.0F ; localB -> pkk5muuxvg [ 0 ] = 0.0F
; localB -> pkk5muuxvg [ 1 ] = 0.0F ; localB -> pkk5muuxvg [ 2 ] = 0.0F ; } (
void ) memset ( ( void * ) localDW , 0 , sizeof ( mubhr0gjvh ) ) ; localDW ->
lzooef1vg0 [ 0 ] = 0.0F ; localDW -> lzooef1vg0 [ 1 ] = 0.0F ; localDW ->
lzooef1vg0 [ 2 ] = 0.0F ; localDW -> jfy4pktyte [ 0 ] = 0.0F ; localDW ->
jfy4pktyte [ 1 ] = 0.0F ; localDW -> jfy4pktyte [ 2 ] = 0.0F ; localDW ->
icks32ycfg [ 0 ] = 0.0F ; localDW -> icks32ycfg [ 1 ] = 0.0F ; localDW ->
icks32ycfg [ 2 ] = 0.0F ; localDW -> fnqc2inubu [ 0 ] = 0.0F ; localDW ->
fnqc2inubu [ 1 ] = 0.0F ; localDW -> fnqc2inubu [ 2 ] = 0.0F ;
HC_core_demand_InitializeDataMapInfo ( bazujgqrv3 , localDW , sysRanPtr ,
contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL
) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & (
bazujgqrv3 -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( bazujgqrv3 ->
DataMapInfo . mmi , rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex (
bazujgqrv3 -> DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void
mr_HC_core_demand_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo
= false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ;
if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo (
mdlRefSfcnS , modelName , rtMdlInfo_HC_core_demand , 41 ) ; * retVal = 1 ; }
static void mr_HC_core_demand_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_HC_core_demand_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int
j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_HC_core_demand_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static
void mr_HC_core_demand_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_HC_core_demand_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) ; static void
mr_HC_core_demand_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i ,
int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_HC_core_demand_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_HC_core_demand_extractBitFieldFromMxArray ( const mxArray * srcArray ,
mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_HC_core_demand_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_HC_core_demand_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_HC_core_demand_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) ; static void mr_HC_core_demand_restoreDataFromMxArrayWithOffset (
void * destData , const mxArray * srcArray , mwIndex i , int j , mwIndex
offset , size_t numBytes ) { const uint8_T * varData = ( const uint8_T * )
mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T *
) destData , ( const uint8_T * ) & varData [ offset * numBytes ] , numBytes )
; } static void mr_HC_core_demand_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_HC_core_demand_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_HC_core_demand_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_HC_core_demand_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_HC_core_demand_GetDWork ( const
ed04h1okrzy * mdlrefDW ) { static const char_T * ssDWFieldNames [ 3 ] = {
"rtb" , "rtdw" , "NULL->rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix (
1 , 1 , 3 , ssDWFieldNames ) ; mr_HC_core_demand_cacheDataAsMxArray ( ssDW ,
0 , 0 , ( const void * ) & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) )
; { static const char_T * rtdwDataFieldNames [ 8 ] = {
"mdlrefDW->rtdw.lzooef1vg0" , "mdlrefDW->rtdw.jfy4pktyte" ,
"mdlrefDW->rtdw.icks32ycfg" , "mdlrefDW->rtdw.fnqc2inubu" ,
"mdlrefDW->rtdw.pl2jqaqhbi" , "mdlrefDW->rtdw.k43afusiln" ,
"mdlrefDW->rtdw.o03zmxvrq4" , "mdlrefDW->rtdw.hrgjjsvat3" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 8 , rtdwDataFieldNames ) ;
mr_HC_core_demand_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * ) &
( mdlrefDW -> rtdw . lzooef1vg0 ) , sizeof ( mdlrefDW -> rtdw . lzooef1vg0 )
) ; mr_HC_core_demand_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void *
) & ( mdlrefDW -> rtdw . jfy4pktyte ) , sizeof ( mdlrefDW -> rtdw .
jfy4pktyte ) ) ; mr_HC_core_demand_cacheDataAsMxArray ( rtdwData , 0 , 2 , (
const void * ) & ( mdlrefDW -> rtdw . icks32ycfg ) , sizeof ( mdlrefDW ->
rtdw . icks32ycfg ) ) ; mr_HC_core_demand_cacheDataAsMxArray ( rtdwData , 0 ,
3 , ( const void * ) & ( mdlrefDW -> rtdw . fnqc2inubu ) , sizeof ( mdlrefDW
-> rtdw . fnqc2inubu ) ) ; mr_HC_core_demand_cacheDataAsMxArray ( rtdwData ,
0 , 4 , ( const void * ) & ( mdlrefDW -> rtdw . pl2jqaqhbi ) , sizeof (
mdlrefDW -> rtdw . pl2jqaqhbi ) ) ; mr_HC_core_demand_cacheDataAsMxArray (
rtdwData , 0 , 5 , ( const void * ) & ( mdlrefDW -> rtdw . k43afusiln ) ,
sizeof ( mdlrefDW -> rtdw . k43afusiln ) ) ;
mr_HC_core_demand_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) &
( mdlrefDW -> rtdw . o03zmxvrq4 ) , sizeof ( mdlrefDW -> rtdw . o03zmxvrq4 )
) ; mr_HC_core_demand_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void *
) & ( mdlrefDW -> rtdw . hrgjjsvat3 ) , sizeof ( mdlrefDW -> rtdw .
hrgjjsvat3 ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } ( void )
mdlrefDW ; return ssDW ; } void mr_HC_core_demand_SetDWork ( ed04h1okrzy *
mdlrefDW , const mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_HC_core_demand_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtb ) ,
ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_HC_core_demand_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw .
lzooef1vg0 ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw . lzooef1vg0 ) )
; mr_HC_core_demand_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW -> rtdw
. jfy4pktyte ) , rtdwData , 0 , 1 , sizeof ( mdlrefDW -> rtdw . jfy4pktyte )
) ; mr_HC_core_demand_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtdw . icks32ycfg ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw .
icks32ycfg ) ) ; mr_HC_core_demand_restoreDataFromMxArray ( ( void * ) & (
mdlrefDW -> rtdw . fnqc2inubu ) , rtdwData , 0 , 3 , sizeof ( mdlrefDW ->
rtdw . fnqc2inubu ) ) ; mr_HC_core_demand_restoreDataFromMxArray ( ( void * )
& ( mdlrefDW -> rtdw . pl2jqaqhbi ) , rtdwData , 0 , 4 , sizeof ( mdlrefDW ->
rtdw . pl2jqaqhbi ) ) ; mr_HC_core_demand_restoreDataFromMxArray ( ( void * )
& ( mdlrefDW -> rtdw . k43afusiln ) , rtdwData , 0 , 5 , sizeof ( mdlrefDW ->
rtdw . k43afusiln ) ) ; mr_HC_core_demand_restoreDataFromMxArray ( ( void * )
& ( mdlrefDW -> rtdw . o03zmxvrq4 ) , rtdwData , 0 , 6 , sizeof ( mdlrefDW ->
rtdw . o03zmxvrq4 ) ) ; mr_HC_core_demand_restoreDataFromMxArray ( ( void * )
& ( mdlrefDW -> rtdw . hrgjjsvat3 ) , rtdwData , 0 , 7 , sizeof ( mdlrefDW ->
rtdw . hrgjjsvat3 ) ) ; } } void mr_HC_core_demand_RegisterSimStateChecksum (
SimStruct * S ) { const uint32_T chksum [ 4 ] = { 4232846055U , 2769331971U ,
2480852945U , 3172664619U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"HC_core_demand" , & chksum [ 0 ] ) ; } mxArray *
mr_HC_core_demand_GetSimStateDisallowedBlocks ( ) { return ( NULL ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
