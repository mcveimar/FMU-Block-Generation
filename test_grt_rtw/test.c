/*
 * test.c
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

#include "test.h"
#include "test_private.h"
#include "rt_nonfinite.h"

/* Real-time model */
static RT_MODEL_test_T test_M_;
RT_MODEL_test_T *const test_M = &test_M_;
static void rate_scheduler(void);

/*
 *         This function updates active task flag for each subrate.
 *         The function is called at model base rate, hence the
 *         generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (test_M->Timing.TaskCounters.TID[1])++;
  if ((test_M->Timing.TaskCounters.TID[1]) > 4) {/* Sample time: [0.005s, 0.0s] */
    test_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/* Model step function */
void test_step(void)
{
  /* Matfile logging */
  rt_UpdateTXYLogVars(test_M->rtwLogInfo, (&test_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.001s, 0.0s] */
    if ((rtmGetTFinal(test_M)!=-1) &&
        !((rtmGetTFinal(test_M)-test_M->Timing.taskTime0) >
          test_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(test_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++test_M->Timing.clockTick0)) {
    ++test_M->Timing.clockTickH0;
  }

  test_M->Timing.taskTime0 = test_M->Timing.clockTick0 *
    test_M->Timing.stepSize0 + test_M->Timing.clockTickH0 *
    test_M->Timing.stepSize0 * 4294967296.0;
  rate_scheduler();
}

/* Model initialize function */
void test_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)test_M, 0,
                sizeof(RT_MODEL_test_T));
  rtmSetTFinal(test_M, -1);
  test_M->Timing.stepSize0 = 0.001;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    test_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(test_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(test_M->rtwLogInfo, (NULL));
    rtliSetLogT(test_M->rtwLogInfo, "tout");
    rtliSetLogX(test_M->rtwLogInfo, "");
    rtliSetLogXFinal(test_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(test_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(test_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(test_M->rtwLogInfo, 0);
    rtliSetLogDecimation(test_M->rtwLogInfo, 1);
    rtliSetLogY(test_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(test_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(test_M->rtwLogInfo, (NULL));
  }

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(test_M->rtwLogInfo, 0.0, rtmGetTFinal(test_M),
    test_M->Timing.stepSize0, (&rtmGetErrorStatus(test_M)));
}

/* Model terminate function */
void test_terminate(void)
{
  /* (no terminate code required) */
}
