/*+@@file@@----------------------------------------------------------------*//*!
 \file		MAPI.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Jul 24 19:49:31 2016
 \date		Modified on Sun Jul 24 19:49:31 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef MAPI_H
#define MAPI_H
#if __POCC__ >= 500
#pragma once
#endif

#ifndef EXPORT
#ifdef WIN16
#define EXPORT __export
#else
#define EXPORT
#endif
#endif
typedef unsigned long FAR *LPULONG;
typedef unsigned long FLAGS;
#ifndef __LHANDLE
#define __LHANDLE
typedef ULONG_PTR LHANDLE, FAR * LPLHANDLE;
#endif
typedef unsigned char FAR *LPBYTE;
#define    lhSessionNull    ((LHANDLE)0)
typedef struct
{
    ULONG ulReserved;
    ULONG flFlags;
    ULONG nPosition;
    LPSTR lpszPathName;
    LPSTR lpszFileName;
    LPVOID lpFileType;
} MapiFileDesc, FAR * lpMapiFileDesc;
#define MAPI_OLE                0x00000001
#define MAPI_OLE_STATIC         0x00000002
typedef struct
{
    ULONG ulReserved;
    ULONG cbTag;
    LPBYTE lpTag;
    ULONG cbEncoding;
    LPBYTE lpEncoding;
} MapiFileTagExt, FAR *lpMapiFileTagExt;
typedef struct
{
    ULONG ulReserved;
    ULONG ulRecipClass;
    LPSTR lpszName;
    LPSTR lpszAddress;
    ULONG ulEIDSize;
    LPVOID lpEntryID;
} MapiRecipDesc, FAR * lpMapiRecipDesc;
#ifndef MAPI_ORIG
#define MAPI_ORIG   0
#define MAPI_TO     1
#define MAPI_CC     2
#define MAPI_BCC    3
#endif
typedef struct
{
    ULONG ulReserved;
    LPSTR lpszSubject;
    LPSTR lpszNoteText;
    LPSTR lpszMessageType;
    LPSTR lpszDateReceived;
    LPSTR lpszConversationID;
    FLAGS flFlags;
    lpMapiRecipDesc lpOriginator;
    ULONG nRecipCount;
    lpMapiRecipDesc lpRecips;
    ULONG nFileCount;
    lpMapiFileDesc lpFiles;
} MapiMessage, FAR * lpMapiMessage;
#define MAPI_UNREAD             0x00000001
#define MAPI_RECEIPT_REQUESTED  0x00000002
#define MAPI_SENT               0x00000004
#define MAPI_LOGON_UI           0x00000001
#ifndef MAPI_PASSWORD_UI
#define MAPI_PASSWORD_UI		0x00020000
#endif
#define MAPI_NEW_SESSION        0x00000002
#define MAPI_FORCE_DOWNLOAD     0x00001000
#define MAPI_EXTENDED           0x00000020
#ifndef MAPI_DIALOG
#define MAPI_DIALOG             0x00000008
#endif
#define MAPI_UNREAD_ONLY        0x00000020
#define MAPI_GUARANTEE_FIFO     0x00000100
#define MAPI_LONG_MSGID			0x00004000
#define MAPI_PEEK               0x00000080
#define MAPI_SUPPRESS_ATTACH    0x00000800
#define MAPI_ENVELOPE_ONLY      0x00000040
#define MAPI_BODY_AS_FILE       0x00000200
#define MAPI_AB_NOMODIFY        0x00000400
typedef ULONG (FAR PASCAL MAPILOGON)(
	ULONG_PTR ulUIParam,
	LPSTR lpszProfileName,
	LPSTR lpszPassword,
	FLAGS flFlags,
	ULONG ulReserved,
	LPLHANDLE lplhSession
);
typedef MAPILOGON FAR *LPMAPILOGON;
MAPILOGON MAPILogon;
typedef ULONG (FAR PASCAL MAPILOGOFF)(
	LHANDLE lhSession,
	ULONG_PTR ulUIParam,
	FLAGS flFlags,
	ULONG ulReserved
);
typedef MAPILOGOFF FAR *LPMAPILOGOFF;
MAPILOGOFF MAPILogoff;
typedef ULONG (FAR PASCAL MAPISENDMAIL)(
	LHANDLE lhSession,
	ULONG_PTR ulUIParam,
	lpMapiMessage lpMessage,
	FLAGS flFlags,
	ULONG ulReserved
);
typedef MAPISENDMAIL FAR *LPMAPISENDMAIL;
MAPISENDMAIL MAPISendMail;
typedef ULONG (FAR PASCAL MAPISENDDOCUMENTS)(
	ULONG_PTR ulUIParam,
	LPSTR lpszDelimChar,
	LPSTR lpszFilePaths,
	LPSTR lpszFileNames,
	ULONG ulReserved
);
typedef MAPISENDDOCUMENTS FAR *LPMAPISENDDOCUMENTS;
MAPISENDDOCUMENTS MAPISendDocuments;
typedef ULONG (FAR PASCAL MAPIFINDNEXT)(
	LHANDLE lhSession,
	ULONG_PTR ulUIParam,
	LPSTR lpszMessageType,
	LPSTR lpszSeedMessageID,
	FLAGS flFlags,
	ULONG ulReserved,
	LPSTR lpszMessageID
);
typedef MAPIFINDNEXT FAR *LPMAPIFINDNEXT;
MAPIFINDNEXT MAPIFindNext;
typedef ULONG (FAR PASCAL MAPIREADMAIL)(
	LHANDLE lhSession,
	ULONG_PTR ulUIParam,
	LPSTR lpszMessageID,
	FLAGS flFlags,
	ULONG ulReserved,
	lpMapiMessage FAR *lppMessage
);
typedef MAPIREADMAIL FAR *LPMAPIREADMAIL;
MAPIREADMAIL MAPIReadMail;
typedef ULONG (FAR PASCAL MAPISAVEMAIL)(
	LHANDLE lhSession,
	ULONG_PTR ulUIParam,
	lpMapiMessage lpMessage,
	FLAGS flFlags,
	ULONG ulReserved,
	LPSTR lpszMessageID
);
typedef MAPISAVEMAIL FAR *LPMAPISAVEMAIL;
MAPISAVEMAIL MAPISaveMail;
typedef ULONG (FAR PASCAL MAPIDELETEMAIL)(
	LHANDLE lhSession,
	ULONG_PTR ulUIParam,
	LPSTR lpszMessageID,
	FLAGS flFlags,
	ULONG ulReserved
);
typedef MAPIDELETEMAIL FAR *LPMAPIDELETEMAIL;
MAPIDELETEMAIL MAPIDeleteMail;
typedef ULONG (EXPORT FAR PASCAL *LPMAPIFREEBUFFER)(LPVOID pv);
ULONG FAR PASCAL MAPIFreeBuffer(LPVOID pv);
typedef ULONG (FAR PASCAL MAPIADDRESS)(
	LHANDLE lhSession,
	ULONG_PTR ulUIParam,
	LPSTR lpszCaption,
	ULONG nEditFields,
	LPSTR lpszLabels,
	ULONG nRecips,
	lpMapiRecipDesc lpRecips,
	FLAGS flFlags,
	ULONG ulReserved,
	LPULONG lpnNewRecips,
	lpMapiRecipDesc FAR *lppNewRecips
);
typedef MAPIADDRESS FAR *LPMAPIADDRESS;
MAPIADDRESS MAPIAddress;
typedef ULONG (FAR PASCAL MAPIDETAILS)(
	LHANDLE lhSession,
	ULONG_PTR ulUIParam,
	lpMapiRecipDesc lpRecip,
	FLAGS flFlags,
	ULONG ulReserved
);
typedef MAPIDETAILS FAR *LPMAPIDETAILS;
MAPIDETAILS MAPIDetails;
typedef ULONG (FAR PASCAL MAPIRESOLVENAME)(
	LHANDLE lhSession,
	ULONG_PTR ulUIParam,
	LPSTR lpszName,
	FLAGS flFlags,
	ULONG ulReserved,
	lpMapiRecipDesc FAR *lppRecip
);
typedef MAPIRESOLVENAME FAR *LPMAPIRESOLVENAME;
MAPIRESOLVENAME MAPIResolveName;
#ifndef SUCCESS_SUCCESS
#define SUCCESS_SUCCESS                 0
#endif
#define MAPI_USER_ABORT                 1
#define MAPI_E_USER_ABORT               MAPI_USER_ABORT
#define MAPI_E_FAILURE                  2
#define MAPI_E_LOGON_FAILURE            3
#define MAPI_E_LOGIN_FAILURE            MAPI_E_LOGON_FAILURE
#define MAPI_E_DISK_FULL                4
#define MAPI_E_INSUFFICIENT_MEMORY      5
#define MAPI_E_ACCESS_DENIED            6
#define MAPI_E_TOO_MANY_SESSIONS        8
#define MAPI_E_TOO_MANY_FILES           9
#define MAPI_E_TOO_MANY_RECIPIENTS      10
#define MAPI_E_ATTACHMENT_NOT_FOUND     11
#define MAPI_E_ATTACHMENT_OPEN_FAILURE  12
#define MAPI_E_ATTACHMENT_WRITE_FAILURE 13
#define MAPI_E_UNKNOWN_RECIPIENT        14
#define MAPI_E_BAD_RECIPTYPE            15
#define MAPI_E_NO_MESSAGES              16
#define MAPI_E_INVALID_MESSAGE          17
#define MAPI_E_TEXT_TOO_LARGE           18
#define MAPI_E_INVALID_SESSION          19
#define MAPI_E_TYPE_NOT_SUPPORTED       20
#define MAPI_E_AMBIGUOUS_RECIPIENT      21
#define MAPI_E_AMBIG_RECIP              MAPI_E_AMBIGUOUS_RECIPIENT
#define MAPI_E_MESSAGE_IN_USE           22
#define MAPI_E_NETWORK_FAILURE          23
#define MAPI_E_INVALID_EDITFIELDS       24
#define MAPI_E_INVALID_RECIPS           25
#define MAPI_E_NOT_SUPPORTED            26
#ifdef MAPIX_H
STDMETHODIMP_(SCODE)ScMAPIXFromSMAPI(LHANDLE lhSimpleSession, ULONG ulFlags, LPCIID lpInterface, LPMAPISESSION FAR * lppMAPISession);
#endif
#endif
