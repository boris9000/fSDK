/*+@@file@@----------------------------------------------------------------*//*!
 \file		WinSnmp.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sun Sep  4 16:00:21 2016
 \date		Modified on Sun Sep  4 16:00:21 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _INC_WINSNMP
#define  _INC_WINSNMP
#if __POCC__ >= 500
#pragma once
#endif
#ifndef _INC_WINDOWS
#include <windows.h>
#define _INC_WINDOWS
#endif
#include <limits.h>
typedef HANDLE HSNMP_SESSION, FAR * LPHSNMP_SESSION;
typedef HANDLE HSNMP_ENTITY, FAR * LPHSNMP_ENTITY;
typedef HANDLE HSNMP_CONTEXT, FAR * LPHSNMP_CONTEXT;
typedef HANDLE HSNMP_PDU, FAR * LPHSNMP_PDU;
typedef HANDLE HSNMP_VBL, FAR * LPHSNMP_VBL;
typedef unsigned char smiBYTE, FAR * smiLPBYTE;
#if ULONG_MAX == 4294967295U
typedef signed long smiINT, FAR * smiLPINT;
typedef smiINT smiINT32, FAR * smiLPINT32;
typedef unsigned long smiUINT32, FAR * smiLPUINT32;
#elif UINT_MAX == 4294967295U
typedef int smiINT, FAR * smiLPINT;
typedef smiINT smiINT32, FAR * smiLPINT32;
typedef unsigned int smiUINT32, FAR * smiLPUINT32;
#else
#error can not define smiINT and smiUINT
#endif
typedef struct
{
	smiUINT32 len;
	smiLPBYTE ptr;
} smiOCTETS, FAR * smiLPOCTETS;
typedef const smiOCTETS FAR *smiLPCOCTETS;
typedef smiOCTETS smiBITS, FAR * smiLPBITS;
typedef struct
{
	smiUINT32 len;
	smiLPUINT32 ptr;
} smiOID, FAR * smiLPOID;
typedef const smiOID FAR *smiLPCOID;
typedef smiOCTETS smiIPADDR, FAR * smiLPIPADDR;
typedef smiUINT32 smiCNTR32, FAR * smiLPCNTR32;
typedef smiUINT32 smiGAUGE32, FAR * smiLPGAUGE32;
typedef smiUINT32 smiTIMETICKS, FAR * smiLPTIMETICKS;
typedef smiOCTETS smiOPAQUE, FAR * smiLPOPAQUE;
typedef smiOCTETS smiNSAPADDR, FAR * smiLPNSAPADDR;
typedef struct
{
	smiUINT32 hipart;
	smiUINT32 lopart;
} smiCNTR64, FAR * smiLPCNTR64;
#define ASN_UNIVERSAL         (0x00)
#define ASN_APPLICATION       (0x40)
#define ASN_CONTEXT           (0x80)
#define ASN_PRIVATE           (0xC0)
#define ASN_PRIMITIVE         (0x00)
#define ASN_CONSTRUCTOR       (0x20)
#define SNMP_SYNTAX_SEQUENCE    (ASN_UNIVERSAL | ASN_CONSTRUCTOR | 0x10)
#define SNMP_SYNTAX_INT         (ASN_UNIVERSAL | ASN_PRIMITIVE | 0x02)
#define SNMP_SYNTAX_BITS        (ASN_UNIVERSAL | ASN_PRIMITIVE | 0x03)
#define SNMP_SYNTAX_OCTETS      (ASN_UNIVERSAL | ASN_PRIMITIVE | 0x04)
#define SNMP_SYNTAX_NULL        (ASN_UNIVERSAL | ASN_PRIMITIVE | 0x05)
#define SNMP_SYNTAX_OID         (ASN_UNIVERSAL | ASN_PRIMITIVE | 0x06)
#define SNMP_SYNTAX_INT32       SNMP_SYNTAX_INT
#define SNMP_SYNTAX_IPADDR      (ASN_APPLICATION | ASN_PRIMITIVE | 0x00)
#define SNMP_SYNTAX_CNTR32      (ASN_APPLICATION | ASN_PRIMITIVE | 0x01)
#define SNMP_SYNTAX_GAUGE32     (ASN_APPLICATION | ASN_PRIMITIVE | 0x02)
#define SNMP_SYNTAX_TIMETICKS   (ASN_APPLICATION | ASN_PRIMITIVE | 0x03)
#define SNMP_SYNTAX_OPAQUE      (ASN_APPLICATION | ASN_PRIMITIVE | 0x04)
#define SNMP_SYNTAX_NSAPADDR    (ASN_APPLICATION | ASN_PRIMITIVE | 0x05)
#define SNMP_SYNTAX_CNTR64      (ASN_APPLICATION | ASN_PRIMITIVE | 0x06)
#define SNMP_SYNTAX_UINT32      (ASN_APPLICATION | ASN_PRIMITIVE | 0x07)
#define SNMP_SYNTAX_UNSIGNED32  SNMP_SYNTAX_GAUGE32
#define SNMP_SYNTAX_NOSUCHOBJECT   (ASN_CONTEXT | ASN_PRIMITIVE | 0x00)
#define SNMP_SYNTAX_NOSUCHINSTANCE (ASN_CONTEXT | ASN_PRIMITIVE | 0x01)
#define SNMP_SYNTAX_ENDOFMIBVIEW   (ASN_CONTEXT | ASN_PRIMITIVE | 0x02)
typedef struct
{
	smiUINT32 syntax;
	union
	{
		smiINT sNumber;
		smiUINT32 uNumber;
		smiCNTR64 hNumber;
		smiOCTETS string;
		smiOID oid;
		smiBYTE empty;
	} value;
} smiVALUE, FAR * smiLPVALUE;
typedef const smiVALUE FAR *smiLPCVALUE;
#define MAXOBJIDSIZE     128
#define MAXOBJIDSTRSIZE  1408
#define SNMP_PDU_GET          (ASN_CONTEXT | ASN_CONSTRUCTOR | 0x0)
#define SNMP_PDU_GETNEXT      (ASN_CONTEXT | ASN_CONSTRUCTOR | 0x1)
#define SNMP_PDU_RESPONSE     (ASN_CONTEXT | ASN_CONSTRUCTOR | 0x2)
#define SNMP_PDU_SET          (ASN_CONTEXT | ASN_CONSTRUCTOR | 0x3)
#define SNMP_PDU_V1TRAP       (ASN_CONTEXT | ASN_CONSTRUCTOR | 0x4)
#define SNMP_PDU_GETBULK      (ASN_CONTEXT | ASN_CONSTRUCTOR | 0x5)
#define SNMP_PDU_INFORM       (ASN_CONTEXT | ASN_CONSTRUCTOR | 0x6)
#define SNMP_PDU_TRAP         (ASN_CONTEXT | ASN_CONSTRUCTOR | 0x7)
#define SNMPLISTEN_USEENTITY_ADDR    0
#define SNMPLISTEN_ALL_ADDR          1
#define SNMP_TRAP_COLDSTART             0
#define SNMP_TRAP_WARMSTART             1
#define SNMP_TRAP_LINKDOWN              2
#define SNMP_TRAP_LINKUP                3
#define SNMP_TRAP_AUTHFAIL              4
#define SNMP_TRAP_EGPNEIGHBORLOSS       5
#define SNMP_TRAP_ENTERPRISESPECIFIC    6
#define SNMP_ERROR_NOERROR              0
#define SNMP_ERROR_TOOBIG               1
#define SNMP_ERROR_NOSUCHNAME           2
#define SNMP_ERROR_BADVALUE             3
#define SNMP_ERROR_READONLY             4
#define SNMP_ERROR_GENERR               5
#define SNMP_ERROR_NOACCESS             6
#define SNMP_ERROR_WRONGTYPE            7
#define SNMP_ERROR_WRONGLENGTH          8
#define SNMP_ERROR_WRONGENCODING        9
#define SNMP_ERROR_WRONGVALUE           10
#define SNMP_ERROR_NOCREATION           11
#define SNMP_ERROR_INCONSISTENTVALUE    12
#define SNMP_ERROR_RESOURCEUNAVAILABLE  13
#define SNMP_ERROR_COMMITFAILED         14
#define SNMP_ERROR_UNDOFAILED           15
#define SNMP_ERROR_AUTHORIZATIONERROR   16
#define SNMP_ERROR_NOTWRITABLE          17
#define SNMP_ERROR_INCONSISTENTNAME     18
#define SNMPAPI_TRANSLATED         0
#define SNMPAPI_UNTRANSLATED_V1    1
#define SNMPAPI_UNTRANSLATED_V2    2
#define SNMPAPI_NO_SUPPORT         0
#define SNMPAPI_V1_SUPPORT         1
#define SNMPAPI_V2_SUPPORT         2
#define SNMPAPI_M2M_SUPPORT        3
#define SNMPAPI_OFF                0
#define SNMPAPI_ON                 1
typedef smiUINT32 SNMPAPI_STATUS;
#define SNMPAPI_FAILURE            0
#define SNMPAPI_SUCCESS            1
#define SNMPAPI_ALLOC_ERROR        2
#define SNMPAPI_CONTEXT_INVALID    3
#define SNMPAPI_CONTEXT_UNKNOWN    4
#define SNMPAPI_ENTITY_INVALID     5
#define SNMPAPI_ENTITY_UNKNOWN     6
#define SNMPAPI_INDEX_INVALID      7
#define SNMPAPI_NOOP               8
#define SNMPAPI_OID_INVALID        9
#define SNMPAPI_OPERATION_INVALID  10
#define SNMPAPI_OUTPUT_TRUNCATED   11
#define SNMPAPI_PDU_INVALID        12
#define SNMPAPI_SESSION_INVALID    13
#define SNMPAPI_SYNTAX_INVALID     14
#define SNMPAPI_VBL_INVALID        15
#define SNMPAPI_MODE_INVALID       16
#define SNMPAPI_SIZE_INVALID       17
#define SNMPAPI_NOT_INITIALIZED    18
#define SNMPAPI_MESSAGE_INVALID    19
#define SNMPAPI_HWND_INVALID       20
#define SNMPAPI_OTHER_ERROR        99
#define SNMPAPI_TL_NOT_INITIALIZED 100
#define SNMPAPI_TL_NOT_SUPPORTED   101
#define SNMPAPI_TL_NOT_AVAILABLE   102
#define SNMPAPI_TL_RESOURCE_ERROR  103
#define SNMPAPI_TL_UNDELIVERABLE   104
#define SNMPAPI_TL_SRC_INVALID     105
#define SNMPAPI_TL_INVALID_PARAM   106
#define SNMPAPI_TL_IN_USE          107
#define SNMPAPI_TL_TIME        108
#define SNMPAPI_TL_PDU_TOO_BIG     109
#define SNMPAPI_TL_OTHER           199
#ifndef IN
#define IN
#endif
#ifndef OUT
#define OUT
#endif
#define SNMPAPI_CALL     WINAPI
#define MAXVENDORINFO 32
typedef struct
{
	char vendorName[MAXVENDORINFO * 2];
	char vendorContact[MAXVENDORINFO * 2];
	char vendorVersionId[MAXVENDORINFO];
	char vendorVersionDate[MAXVENDORINFO];
	smiUINT32 vendorEnterprise;
} smiVENDORINFO, FAR * smiLPVENDORINFO;
typedef SNMPAPI_STATUS(CALLBACK *SNMPAPI_CALLBACK) (HSNMP_SESSION hSession, HWND hWnd, UINT wMsg, WPARAM wParam, LPARAM lParam, LPVOID lpClientData);
SNMPAPI_STATUS SNMPAPI_CALL SnmpGetTranslateMode(smiLPUINT32 nTranslateMode);
SNMPAPI_STATUS SNMPAPI_CALL SnmpSetTranslateMode(smiUINT32 nTranslateMode);
SNMPAPI_STATUS SNMPAPI_CALL SnmpGetRetransmitMode(smiLPUINT32 nRetransmitMode);
SNMPAPI_STATUS SNMPAPI_CALL SnmpSetRetransmitMode(smiUINT32 nRetransmitMode);
SNMPAPI_STATUS SNMPAPI_CALL SnmpGetTimeout(HSNMP_ENTITY hEntity, smiLPTIMETICKS nPolicyTimeout, smiLPTIMETICKS nActualTimeout);
SNMPAPI_STATUS SNMPAPI_CALL SnmpSetTimeout(HSNMP_ENTITY hEntity, smiTIMETICKS nPolicyTimeout);
SNMPAPI_STATUS SNMPAPI_CALL SnmpGetRetry(HSNMP_ENTITY hEntity, smiLPUINT32 nPolicyRetry, smiLPUINT32 nActualRetry);
SNMPAPI_STATUS SNMPAPI_CALL SnmpSetRetry(HSNMP_ENTITY hEntity, smiUINT32 nPolicyRetry);
SNMPAPI_STATUS SNMPAPI_CALL SnmpGetVendorInfo(smiLPVENDORINFO vendorInfo);
SNMPAPI_STATUS SNMPAPI_CALL SnmpStartup(smiLPUINT32 nMajorVersion, smiLPUINT32 nMinorVersion, smiLPUINT32 nLevel, smiLPUINT32 nTranslateMode, smiLPUINT32 nRetransmitMode);
SNMPAPI_STATUS SNMPAPI_CALL SnmpCleanup(void);
HSNMP_SESSION SNMPAPI_CALL SnmpOpen(HWND hWnd, UINT wMsg);
SNMPAPI_STATUS SNMPAPI_CALL SnmpClose(HSNMP_SESSION session);
SNMPAPI_STATUS SNMPAPI_CALL SnmpSendMsg(HSNMP_SESSION session, HSNMP_ENTITY srcEntity, HSNMP_ENTITY dstEntity, HSNMP_CONTEXT context, HSNMP_PDU PDU);
SNMPAPI_STATUS SNMPAPI_CALL SnmpRecvMsg(HSNMP_SESSION session, LPHSNMP_ENTITY srcEntity, LPHSNMP_ENTITY dstEntity, LPHSNMP_CONTEXT context, LPHSNMP_PDU PDU);
SNMPAPI_STATUS SNMPAPI_CALL SnmpRegister(HSNMP_SESSION session, HSNMP_ENTITY srcEntity, HSNMP_ENTITY dstEntity, HSNMP_CONTEXT context, smiLPCOID notification, smiUINT32 state);
HSNMP_SESSION SNMPAPI_CALL SnmpCreateSession(HWND hWnd, UINT wMsg, SNMPAPI_CALLBACK fCallBack, LPVOID lpClientData);
SNMPAPI_STATUS SNMPAPI_CALL SnmpListen(HSNMP_ENTITY hEntity, SNMPAPI_STATUS lStatus);
SNMPAPI_STATUS SNMPAPI_CALL SnmpListenEx(HSNMP_ENTITY hEntity, SNMPAPI_STATUS lStatus, smiUINT32 nUseEntityAddr);
SNMPAPI_STATUS SNMPAPI_CALL SnmpCancelMsg(HSNMP_SESSION session, smiINT32 reqId);
SNMPAPI_STATUS SNMPAPI_CALL SnmpStartupEx(smiLPUINT32 nMajorVersion, smiLPUINT32 nMinorVersion, smiLPUINT32 nLevel, smiLPUINT32 nTranslateMode, smiLPUINT32 nRetransmitMode);
typedef SNMPAPI_STATUS(SNMPAPI_CALL *PFNSNMPSTARTUPEX) (smiLPUINT32, smiLPUINT32, smiLPUINT32, smiLPUINT32, smiLPUINT32);
SNMPAPI_STATUS SNMPAPI_CALL SnmpCleanupEx(void);
typedef SNMPAPI_STATUS(SNMPAPI_CALL *PFNSNMPCLEANUPEX) (void);
HSNMP_ENTITY SNMPAPI_CALL SnmpStrToEntity(HSNMP_SESSION session, LPCSTR string);
SNMPAPI_STATUS SNMPAPI_CALL SnmpEntityToStr(HSNMP_ENTITY entity, smiUINT32 size, LPSTR string);
SNMPAPI_STATUS SNMPAPI_CALL SnmpFreeEntity(HSNMP_ENTITY entity);
HSNMP_CONTEXT SNMPAPI_CALL SnmpStrToContext(HSNMP_SESSION session, smiLPCOCTETS string);
SNMPAPI_STATUS SNMPAPI_CALL SnmpContextToStr(HSNMP_CONTEXT context, smiLPOCTETS string);
SNMPAPI_STATUS SNMPAPI_CALL SnmpFreeContext(HSNMP_CONTEXT context);
SNMPAPI_STATUS SNMPAPI_CALL SnmpSetPort(HSNMP_ENTITY hEntity, UINT nPort);
HSNMP_PDU SNMPAPI_CALL SnmpCreatePdu(HSNMP_SESSION session, smiINT PDU_type, smiINT32 request_id, smiINT error_status, smiINT error_index, HSNMP_VBL varbindlist);
SNMPAPI_STATUS SNMPAPI_CALL SnmpGetPduData(HSNMP_PDU PDU, smiLPINT PDU_type, smiLPINT32 request_id, smiLPINT error_status, smiLPINT error_index, LPHSNMP_VBL varbindlist);
SNMPAPI_STATUS SNMPAPI_CALL SnmpSetPduData(HSNMP_PDU PDU, const smiINT FAR *PDU_type, const smiINT32 FAR *request_id, const smiINT FAR *non_repeaters, const smiINT FAR *max_repetitions, const HSNMP_VBL FAR *varbindlist);
HSNMP_PDU SNMPAPI_CALL SnmpDuplicatePdu(HSNMP_SESSION session, HSNMP_PDU PDU);
SNMPAPI_STATUS SNMPAPI_CALL SnmpFreePdu(HSNMP_PDU PDU);
HSNMP_VBL SNMPAPI_CALL SnmpCreateVbl(HSNMP_SESSION session, smiLPCOID name, smiLPCVALUE value);
HSNMP_VBL SNMPAPI_CALL SnmpDuplicateVbl(HSNMP_SESSION session, HSNMP_VBL vbl);
SNMPAPI_STATUS SNMPAPI_CALL SnmpFreeVbl(HSNMP_VBL vbl);
SNMPAPI_STATUS SNMPAPI_CALL SnmpCountVbl(HSNMP_VBL vbl);
SNMPAPI_STATUS SNMPAPI_CALL SnmpGetVb(HSNMP_VBL vbl, smiUINT32 index, smiLPOID name, smiLPVALUE value);
SNMPAPI_STATUS SNMPAPI_CALL SnmpSetVb(HSNMP_VBL vbl, smiUINT32 index, smiLPCOID name, smiLPCVALUE value);
SNMPAPI_STATUS SNMPAPI_CALL SnmpDeleteVb(HSNMP_VBL vbl, smiUINT32 index);
SNMPAPI_STATUS SNMPAPI_CALL SnmpGetLastError(HSNMP_SESSION session);
SNMPAPI_STATUS SNMPAPI_CALL SnmpStrToOid(LPCSTR string, smiLPOID dstOID);
SNMPAPI_STATUS SNMPAPI_CALL SnmpOidToStr(smiLPCOID srcOID, smiUINT32 size, LPSTR string);
SNMPAPI_STATUS SNMPAPI_CALL SnmpOidCopy(smiLPCOID srcOID, smiLPOID dstOID);
SNMPAPI_STATUS SNMPAPI_CALL SnmpOidCompare(smiLPCOID xOID, smiLPCOID yOID, smiUINT32 maxlen, smiLPINT result);
SNMPAPI_STATUS SNMPAPI_CALL SnmpEncodeMsg(HSNMP_SESSION session, HSNMP_ENTITY srcEntity, HSNMP_ENTITY dstEntity, HSNMP_CONTEXT context, HSNMP_PDU pdu, smiLPOCTETS msgBufDesc);
SNMPAPI_STATUS SNMPAPI_CALL SnmpDecodeMsg(HSNMP_SESSION session, LPHSNMP_ENTITY srcEntity, LPHSNMP_ENTITY dstEntity, LPHSNMP_CONTEXT context, LPHSNMP_PDU pdu, smiLPCOCTETS msgBufDesc);
SNMPAPI_STATUS SNMPAPI_CALL SnmpFreeDescriptor(smiUINT32 syntax, smiLPOPAQUE descriptor);
#endif