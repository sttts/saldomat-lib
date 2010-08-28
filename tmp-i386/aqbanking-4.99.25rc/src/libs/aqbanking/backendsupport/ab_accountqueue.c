/**********************************************************
 * This file has been automatically created by "typemaker2"
 * from the file "/Users/michael/src/git/lib/aqbanking/src/libs/aqbanking/backendsupport/ab_accountqueue.xml".
 * Please do not edit this file, all changes will be lost.
 * Better edit the mentioned source file instead.
 **********************************************************/

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include "ab_accountqueue_p.h"

#include <gwenhywfar/misc.h>
#include <gwenhywfar/debug.h>

/* code headers */
#include "ab_accountqueuefns.c"

/* macro functions */
GWEN_LIST_FUNCTIONS(AB_ACCOUNTQUEUE, AB_AccountQueue)
GWEN_INHERIT_FUNCTIONS(AB_ACCOUNTQUEUE)


AB_ACCOUNTQUEUE *AB_AccountQueue_new() {
  AB_ACCOUNTQUEUE *p_struct;

  GWEN_NEW_OBJECT(AB_ACCOUNTQUEUE, p_struct)
  p_struct->_refCount=1;
  GWEN_INHERIT_INIT(AB_ACCOUNTQUEUE, p_struct)
  GWEN_LIST_INIT(AB_ACCOUNTQUEUE, p_struct)
  /* members */
  p_struct->account=NULL;
  p_struct->jobQueueList=AB_JobQueue_List_new();

  return p_struct;
}

void AB_AccountQueue_free(AB_ACCOUNTQUEUE *p_struct) {
  if (p_struct) {
  assert(p_struct->_refCount);
  if (p_struct->_refCount==1) {
    GWEN_INHERIT_FINI(AB_ACCOUNTQUEUE, p_struct)
    GWEN_LIST_FINI(AB_ACCOUNTQUEUE, p_struct)
  /* members */
    AB_JobQueue_List_free(p_struct->jobQueueList);
    p_struct->_refCount=0;
    GWEN_FREE_OBJECT(p_struct);
  }
  else
    p_struct->_refCount--;
  }
}

void AB_AccountQueue_Attach(AB_ACCOUNTQUEUE *p_struct) {
  assert(p_struct);
  assert(p_struct->_refCount);
  p_struct->_refCount++;
}

AB_ACCOUNTQUEUE *AB_AccountQueue_dup(const AB_ACCOUNTQUEUE *p_src) {
  AB_ACCOUNTQUEUE *p_struct;

  assert(p_src);
  p_struct=AB_AccountQueue_new();
  /* member "account" */
    p_struct->account=p_src->account;

  /* member "jobQueueList" */
  if (p_struct->jobQueueList) {
    AB_JobQueue_List_free(p_struct->jobQueueList);
    p_struct->jobQueueList=NULL;
  }
  if (p_src->jobQueueList) {
    p_struct->jobQueueList=AB_JobQueue_List_dup(p_src->jobQueueList);
  }

  return p_struct;
}

AB_ACCOUNT *AB_AccountQueue_GetAccount(const AB_ACCOUNTQUEUE *p_struct) {
  assert(p_struct);
  return p_struct->account;
}

AB_JOBQUEUE_LIST *AB_AccountQueue_GetJobQueueList(const AB_ACCOUNTQUEUE *p_struct) {
  assert(p_struct);
  return p_struct->jobQueueList;
}

void AB_AccountQueue_SetAccount(AB_ACCOUNTQUEUE *p_struct, AB_ACCOUNT *p_src) {
  assert(p_struct);
  p_struct->account=p_src;
}

void AB_AccountQueue_SetJobQueueList(AB_ACCOUNTQUEUE *p_struct, AB_JOBQUEUE_LIST *p_src) {
  assert(p_struct);
  if (p_struct->jobQueueList) {
    AB_JobQueue_List_free(p_struct->jobQueueList);
  }
  p_struct->jobQueueList=p_src;
}

AB_ACCOUNTQUEUE_LIST *AB_AccountQueue_List_dup(const AB_ACCOUNTQUEUE_LIST *p_src) {
  AB_ACCOUNTQUEUE_LIST *p_dest;
  AB_ACCOUNTQUEUE *p_elem;

  assert(p_src);
  p_dest=AB_AccountQueue_List_new();
  p_elem=AB_AccountQueue_List_First(p_src);
  while(p_elem) {
    AB_ACCOUNTQUEUE *p_cpy;

    p_cpy=AB_AccountQueue_dup(p_elem);
    AB_AccountQueue_List_Add(p_cpy, p_dest);
    p_elem=AB_AccountQueue_List_Next(p_elem);
  }

  return p_dest;
}


/* code headers */

