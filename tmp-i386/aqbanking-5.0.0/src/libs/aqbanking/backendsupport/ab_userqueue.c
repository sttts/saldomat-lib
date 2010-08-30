/**********************************************************
 * This file has been automatically created by "typemaker2"
 * from the file "/Users/michael/src/git/lib/aqbanking/src/libs/aqbanking/backendsupport/ab_userqueue.xml".
 * Please do not edit this file, all changes will be lost.
 * Better edit the mentioned source file instead.
 **********************************************************/

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include "ab_userqueue_p.h"

#include <gwenhywfar/misc.h>
#include <gwenhywfar/debug.h>

/* code headers */
#include "ab_userqueuefns.c"

/* macro functions */
GWEN_LIST_FUNCTIONS(AB_USERQUEUE, AB_UserQueue)
GWEN_INHERIT_FUNCTIONS(AB_USERQUEUE)


AB_USERQUEUE *AB_UserQueue_new() {
  AB_USERQUEUE *p_struct;

  GWEN_NEW_OBJECT(AB_USERQUEUE, p_struct)
  p_struct->_refCount=1;
  GWEN_INHERIT_INIT(AB_USERQUEUE, p_struct)
  GWEN_LIST_INIT(AB_USERQUEUE, p_struct)
  /* members */
  p_struct->user=NULL;
  p_struct->accountQueueList=AB_AccountQueue_List_new();

  return p_struct;
}

void AB_UserQueue_free(AB_USERQUEUE *p_struct) {
  if (p_struct) {
  assert(p_struct->_refCount);
  if (p_struct->_refCount==1) {
    GWEN_INHERIT_FINI(AB_USERQUEUE, p_struct)
    GWEN_LIST_FINI(AB_USERQUEUE, p_struct)
  /* members */
    AB_AccountQueue_List_free(p_struct->accountQueueList);
    p_struct->_refCount=0;
    GWEN_FREE_OBJECT(p_struct);
  }
  else
    p_struct->_refCount--;
  }
}

void AB_UserQueue_Attach(AB_USERQUEUE *p_struct) {
  assert(p_struct);
  assert(p_struct->_refCount);
  p_struct->_refCount++;
}

AB_USERQUEUE *AB_UserQueue_dup(const AB_USERQUEUE *p_src) {
  AB_USERQUEUE *p_struct;

  assert(p_src);
  p_struct=AB_UserQueue_new();
  /* member "user" */
    p_struct->user=p_src->user;

  /* member "accountQueueList" */
  if (p_struct->accountQueueList) {
    AB_AccountQueue_List_free(p_struct->accountQueueList);
    p_struct->accountQueueList=NULL;
  }
  if (p_src->accountQueueList) {
    p_struct->accountQueueList=AB_AccountQueue_List_dup(p_src->accountQueueList);
  }

  return p_struct;
}

AB_USER *AB_UserQueue_GetUser(const AB_USERQUEUE *p_struct) {
  assert(p_struct);
  return p_struct->user;
}

AB_ACCOUNTQUEUE_LIST *AB_UserQueue_GetAccountQueueList(const AB_USERQUEUE *p_struct) {
  assert(p_struct);
  return p_struct->accountQueueList;
}

void AB_UserQueue_SetUser(AB_USERQUEUE *p_struct, AB_USER *p_src) {
  assert(p_struct);
  p_struct->user=p_src;
}

void AB_UserQueue_SetAccountQueueList(AB_USERQUEUE *p_struct, AB_ACCOUNTQUEUE_LIST *p_src) {
  assert(p_struct);
  if (p_struct->accountQueueList) {
    AB_AccountQueue_List_free(p_struct->accountQueueList);
  }
  p_struct->accountQueueList=p_src;
}

AB_USERQUEUE_LIST *AB_UserQueue_List_dup(const AB_USERQUEUE_LIST *p_src) {
  AB_USERQUEUE_LIST *p_dest;
  AB_USERQUEUE *p_elem;

  assert(p_src);
  p_dest=AB_UserQueue_List_new();
  p_elem=AB_UserQueue_List_First(p_src);
  while(p_elem) {
    AB_USERQUEUE *p_cpy;

    p_cpy=AB_UserQueue_dup(p_elem);
    AB_UserQueue_List_Add(p_cpy, p_dest);
    p_elem=AB_UserQueue_List_Next(p_elem);
  }

  return p_dest;
}


/* code headers */

