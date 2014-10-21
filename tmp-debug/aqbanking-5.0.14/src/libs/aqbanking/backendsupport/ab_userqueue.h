/**********************************************************
 * This file has been automatically created by "typemaker2"
 * from the file "/Users/sts/Quellen/mac/hbci/lib/aqbanking/src/libs/aqbanking/backendsupport/ab_userqueue.xml".
 * Please do not edit this file, all changes will be lost.
 * Better edit the mentioned source file instead.
 **********************************************************/

#ifndef AB_USERQUEUE_H
#define AB_USERQUEUE_H


#ifdef __cplusplus
extern "C" {
#endif

/* needed system headers */
#include <gwenhywfar/types.h>
#include <gwenhywfar/list1.h>
#include <gwenhywfar/inherit.h>

/* pre-headers */
#include <aqbanking/banking.h>
#include <aqbanking/ab_accountqueue.h>

typedef struct AB_USERQUEUE AB_USERQUEUE;
GWEN_LIST_FUNCTION_LIB_DEFS(AB_USERQUEUE, AB_UserQueue, AQBANKING_API)
GWEN_INHERIT_FUNCTION_LIB_DEFS(AB_USERQUEUE, AQBANKING_API)


/* post-headers */
#include <aqbanking/ab_userqueuefns.h>


/** Constructor. */
AQBANKING_API AB_USERQUEUE *AB_UserQueue_new(void);

/** Destructor. */
AQBANKING_API void AB_UserQueue_free(AB_USERQUEUE *p_struct);

AQBANKING_API void AB_UserQueue_Attach(AB_USERQUEUE *p_struct);

AQBANKING_API AB_USERQUEUE *AB_UserQueue_dup(const AB_USERQUEUE *p_struct);

/** Getter.
 * Use this function to get the member "user"
*/
AQBANKING_API AB_USER *AB_UserQueue_GetUser(const AB_USERQUEUE *p_struct);

/** Getter.
 * Use this function to get the member "accountQueueList"
*/
AQBANKING_API AB_ACCOUNTQUEUE_LIST *AB_UserQueue_GetAccountQueueList(const AB_USERQUEUE *p_struct);

/** Setter.
 * Use this function to set the member "user"
*/
AQBANKING_API void AB_UserQueue_SetUser(AB_USERQUEUE *p_struct, AB_USER *p_src);

/** Setter.
 * Use this function to set the member "accountQueueList"
*/
AQBANKING_API void AB_UserQueue_SetAccountQueueList(AB_USERQUEUE *p_struct, AB_ACCOUNTQUEUE_LIST *p_src);

AQBANKING_API AB_USERQUEUE_LIST *AB_UserQueue_List_dup(const AB_USERQUEUE_LIST *p_src);

#ifdef __cplusplus
}
#endif

#endif

