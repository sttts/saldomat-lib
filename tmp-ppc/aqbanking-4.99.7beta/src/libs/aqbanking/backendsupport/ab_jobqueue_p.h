/**********************************************************
 * This file has been automatically created by "typemaker2"
 * from the file "/Users/sts/Quellen/mac/hbci/lib/aqbanking/src/libs/aqbanking/backendsupport/ab_jobqueue.xml".
 * Please do not edit this file, all changes will be lost.
 * Better edit the mentioned source file instead.
 **********************************************************/

#ifndef AB_JOBQUEUE_P_H
#define AB_JOBQUEUE_P_H

#include "ab_jobqueue.h"


#ifdef __cplusplus
extern "C" {
#endif

struct AB_JOBQUEUE {
  GWEN_INHERIT_ELEMENT(AB_JOBQUEUE)
  GWEN_LIST_ELEMENT(AB_JOBQUEUE)
  int _refCount;
  AB_JOB_LIST2 *jobList; /* volatile */
  int jobType; /* volatile */
};

#ifdef __cplusplus
}
#endif

#endif

