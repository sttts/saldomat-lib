/* This file is auto-generated from "user.xml" by the typemaker
   tool of Gwenhywfar. 
   Do not edit this file -- all changes will be lost! */
#ifndef USER_H
#define USER_H

/** @page P_AB_USER_PUBLIC AB_User (public)
This page describes the properties of AB_USER
This group represents a user within AqBanking. Please note: Changing any of the attributes of a user permanently requires calling @ref AB_Banking_BeginExclUseAccount() before the modifications and @ref AB_Banking_EndExclUseAccount() afterwards. This locking makes sure that concurrent access to the settings doesn't corrupt the configuration database.
@anchor AB_USER_UniqueId
<h3>UniqueId</h3>
<p>
</p>
<p>
Set this property with @ref AB_User_SetUniqueId, 
get it with @ref AB_User_GetUniqueId
</p>

@anchor AB_USER_BackendName
<h3>BackendName</h3>
<p>
</p>
<p>
Set this property with @ref AB_User_SetBackendName, 
get it with @ref AB_User_GetBackendName
</p>

@anchor AB_USER_UserName
<h3>UserName</h3>
<p>
</p>
<p>
Set this property with @ref AB_User_SetUserName, 
get it with @ref AB_User_GetUserName
</p>

@anchor AB_USER_UserId
<h3>UserId</h3>
<p>
</p>
<p>
Set this property with @ref AB_User_SetUserId, 
get it with @ref AB_User_GetUserId
</p>

@anchor AB_USER_CustomerId
<h3>CustomerId</h3>
<p>
</p>
<p>
Set this property with @ref AB_User_SetCustomerId, 
get it with @ref AB_User_GetCustomerId
</p>

@anchor AB_USER_Country
<h3>Country</h3>
<p>
</p>
<p>
Set this property with @ref AB_User_SetCountry, 
get it with @ref AB_User_GetCountry
</p>

@anchor AB_USER_BankCode
<h3>BankCode</h3>
<p>
</p>
<p>
Set this property with @ref AB_User_SetBankCode, 
get it with @ref AB_User_GetBankCode
</p>

@anchor AB_USER_LastSessionId
<h3>LastSessionId</h3>
<p>
</p>
<p>
Set this property with @ref AB_User_SetLastSessionId, 
get it with @ref AB_User_GetLastSessionId
</p>

@anchor AB_USER_Banking
<h3>Banking</h3>
<p>
</p>
<p>
Set this property with @ref AB_User_SetBanking, 
get it with @ref AB_User_GetBanking
</p>

*/
#ifdef __cplusplus
extern "C" {
#endif

typedef struct AB_USER AB_USER;

#ifdef __cplusplus
} /* __cplusplus */
#endif

#include <gwenhywfar/db.h>
#include <gwenhywfar/inherit.h>
#include <gwenhywfar/list2.h>
/* pre-headers */
#include <gwenhywfar/types.h>
#include <gwenhywfar/fslock.h>
#include <aqbanking/error.h>

#ifdef __cplusplus
extern "C" {
#endif


GWEN_INHERIT_FUNCTION_LIB_DEFS(AB_USER, AQBANKING_API)
GWEN_LIST2_FUNCTION_LIB_DEFS(AB_USER, AB_User, AQBANKING_API)

/** Destroys all objects stored in the given LIST2 and the list itself
*/
AQBANKING_API void AB_User_List2_freeAll(AB_USER_LIST2 *stl);

/* post-headers */
#include <aqbanking/banking.h>
#include <aqbanking/userfns.h>

/** Destroys the given object.
*/
AQBANKING_API void AB_User_free(AB_USER *st);
/** Increments the usage counter of the given object, so an additional free() is needed to destroy the object.
*/
AQBANKING_API void AB_User_Attach(AB_USER *st);
/** Reads data from a GWEN_DB.
*/
AQBANKING_API int AB_User_ReadDb(AB_USER *st, GWEN_DB_NODE *db);
/** Stores an object in the given GWEN_DB_NODE
*/
AQBANKING_API int AB_User_toDb(const AB_USER*st, GWEN_DB_NODE *db);
/** Returns 0 if this object has not been modified, !=0 otherwise
*/
AQBANKING_API int AB_User_IsModified(const AB_USER *st);
/** Sets the modified state of the given object
*/
AQBANKING_API void AB_User_SetModified(AB_USER *st, int i);




/**
* Returns the property @ref AB_USER_UniqueId
*/
AQBANKING_API uint32_t AB_User_GetUniqueId(const AB_USER *el);
/**
* Set the property @ref AB_USER_UniqueId
*/
AQBANKING_API void AB_User_SetUniqueId(AB_USER *el, uint32_t d);

/**
* Returns the property @ref AB_USER_BackendName
*/
AQBANKING_API const char *AB_User_GetBackendName(const AB_USER *el);
/**
* Set the property @ref AB_USER_BackendName
*/
AQBANKING_API void AB_User_SetBackendName(AB_USER *el, const char *d);

/**
* Returns the property @ref AB_USER_UserName
*/
AQBANKING_API const char *AB_User_GetUserName(const AB_USER *el);
/**
* Set the property @ref AB_USER_UserName
*/
AQBANKING_API void AB_User_SetUserName(AB_USER *el, const char *d);

/**
* Returns the property @ref AB_USER_UserId
*/
AQBANKING_API const char *AB_User_GetUserId(const AB_USER *el);
/**
* Set the property @ref AB_USER_UserId
*/
AQBANKING_API void AB_User_SetUserId(AB_USER *el, const char *d);

/**
* Returns the property @ref AB_USER_CustomerId
*/
AQBANKING_API const char *AB_User_GetCustomerId(const AB_USER *el);
/**
* Set the property @ref AB_USER_CustomerId
*/
AQBANKING_API void AB_User_SetCustomerId(AB_USER *el, const char *d);

/**
* Returns the property @ref AB_USER_Country
*/
AQBANKING_API const char *AB_User_GetCountry(const AB_USER *el);
/**
* Set the property @ref AB_USER_Country
*/
AQBANKING_API void AB_User_SetCountry(AB_USER *el, const char *d);

/**
* Returns the property @ref AB_USER_BankCode
*/
AQBANKING_API const char *AB_User_GetBankCode(const AB_USER *el);
/**
* Set the property @ref AB_USER_BankCode
*/
AQBANKING_API void AB_User_SetBankCode(AB_USER *el, const char *d);

/**
* Returns the property @ref AB_USER_LastSessionId
*/
AQBANKING_API uint32_t AB_User_GetLastSessionId(const AB_USER *el);
/**
* Set the property @ref AB_USER_LastSessionId
*/
AQBANKING_API void AB_User_SetLastSessionId(AB_USER *el, uint32_t d);


/**
* Returns the property @ref AB_USER_Banking
*/
AQBANKING_API AB_BANKING *AB_User_GetBanking(const AB_USER *el);
/**
* Set the property @ref AB_USER_Banking
*/
AQBANKING_API void AB_User_SetBanking(AB_USER *el, AB_BANKING *d);



#ifdef __cplusplus
} /* __cplusplus */
#endif


#endif /* USER_H */
