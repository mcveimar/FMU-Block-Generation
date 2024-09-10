/*
 * test_private.h
 *
 * Code generation for model "test".
 *
 * Model version              : 1.1
 * Simulink Coder version : 23.2 (R2023b) 01-Aug-2023
 * C source code generated on : Tue Jun  4 15:16:58 2024
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_test_private_h_
#define RTW_HEADER_test_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "test_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif
#endif                                 /* RTW_HEADER_test_private_h_ */
