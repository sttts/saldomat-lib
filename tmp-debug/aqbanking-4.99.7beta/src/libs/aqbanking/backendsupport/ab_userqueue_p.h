/**********************************************************
 * This file has been automatically created by "typemaker2"
 * from the file "/Users/sts/Quellen/mac/hbci/lib/aqbanking/src/libs/aqbanking/backendsupport/ab_userqueue.xml".
 * Please do not edit this file, all changes will be lost.
 * Better edit the mentioned source file instead.
 **********************************************************/

#ifndef AB_USERQUEUE_P_H
#define AB_USERQUEUE_P_H

#include "ab_userqueue.h"


#ifdef __cplusplus
extern "C" {
#endif

struct AB_USERQUEUE {
  GWEN_INHERIT_ELEMENT(AB_USERQUEUE)
  GWEN_LIST_ELEMENT(AB_USERQUEUE)
  int _refCount;
  AB_USER *user; /* volatile */
  AB_ACCOUNTQUEUE_LIST *accountQueueList; /* volatile */
};

#ifdef __cplusplus
}
#endif

#endif

