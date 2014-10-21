/**********************************************************
 * This file has been automatically created by "typemaker2"
 * from the file "/Users/sts/Quellen/mac/hbci/lib/aqbanking/src/libs/aqbanking/backendsupport/ab_accountqueue.xml".
 * Please do not edit this file, all changes will be lost.
 * Better edit the mentioned source file instead.
 **********************************************************/

#ifndef AB_ACCOUNTQUEUE_H
#define AB_ACCOUNTQUEUE_H


#ifdef __cplusplus
extern "C" {
#endif

/* needed system headers */
#include <gwenhywfar/types.h>
#include <gwenhywfar/list1.h>
#include <gwenhywfar/inherit.h>

/* pre-headers */
#include <aqbanking/banking.h>
#include <aqbanking/ab_jobqueue.h>

typedef struct AB_ACCOUNTQUEUE AB_ACCOUNTQUEUE;
GWEN_LIST_FUNCTION_LIB_DEFS(AB_ACCOUNTQUEUE, AB_AccountQueue, AQBANKING_API)
GWEN_INHERIT_FUNCTION_LIB_DEFS(AB_ACCOUNTQUEUE, AQBANKING_API)


/* post-headers */
#include <aqbanking/ab_accountqueuefns.h>


/** Constructor. */
AQBANKING_API AB_ACCOUNTQUEUE *AB_AccountQueue_new(void);

/** Destructor. */
AQBANKING_API void AB_AccountQueue_free(AB_ACCOUNTQUEUE *p_struct);

AQBANKING_API void AB_AccountQueue_Attach(AB_ACCOUNTQUEUE *p_struct);

AQBANKING_API AB_ACCOUNTQUEUE *AB_AccountQueue_dup(const AB_ACCOUNTQUEUE *p_struct);

/** Getter.
 * Use this function to get the member "account"
*/
AQBANKING_API AB_ACCOUNT *AB_AccountQueue_GetAccount(const AB_ACCOUNTQUEUE *p_struct);

/** Getter.
 * Use this function to get the member "jobQueueList"
*/
AQBANKING_API AB_JOBQUEUE_LIST *AB_AccountQueue_GetJobQueueList(const AB_ACCOUNTQUEUE *p_struct);

/** Setter.
 * Use this function to set the member "account"
*/
AQBANKING_API void AB_AccountQueue_SetAccount(AB_ACCOUNTQUEUE *p_struct, AB_ACCOUNT *p_src);

/** Setter.
 * Use this function to set the member "jobQueueList"
*/
AQBANKING_API void AB_AccountQueue_SetJobQueueList(AB_ACCOUNTQUEUE *p_struct, AB_JOBQUEUE_LIST *p_src);

AQBANKING_API AB_ACCOUNTQUEUE_LIST *AB_AccountQueue_List_dup(const AB_ACCOUNTQUEUE_LIST *p_src);

#ifdef __cplusplus
}
#endif

#endif

