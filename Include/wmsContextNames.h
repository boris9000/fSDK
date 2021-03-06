/*+@@file@@----------------------------------------------------------------*//*!
 \file		wmsContextNames.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Mon Sep 19 15:22:26 2016
 \date		Modified on Mon Sep 19 15:22:26 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _WMS_CONTEXT_NAMES_h_
#define _WMS_CONTEXT_NAMES_h_
#if __POCC__ >= 500
#pragma once
#endif
enum CONTEXT_NAME_TYPE
{
    WMS_UNKNOWN_CONTEXT_NAME_TYPE = 0,
    WMS_SERVER_CONTEXT_NAME_TYPE,
    WMS_USER_CONTEXT_NAME_TYPE,
    WMS_PRESENTATION_CONTEXT_NAME_TYPE,
    WMS_COMMAND_CONTEXT_NAME_TYPE,
    WMS_TRANSPORT_CONTEXT_NAME_TYPE,
    WMS_CONTENT_DESCRIPTION_CONTEXT_NAME_TYPE,
    WMS_PACKETIZER_CONTEXT_NAME_TYPE,
    WMS_CACHE_CONTENT_INFORMATION_CONTEXT_NAME_TYPE,
    WMS_ARCHIVE_CONTEXT_NAME_TYPE,
    WMS_NUM_CONTEXT_NAME_TYPES
};
#ifdef INITGUID
#define DEFINE_NAME( name, value )		extern LPCWSTR name = L ## value;
#else
#define DEFINE_NAME( name, value )		extern LPCWSTR name;
#endif
#define DEFINE_HINT( name, value )		enum { name = value };
#if BUILD_HINT_TO_NAME_TABLES
void MapContextHintToName( DWORD dwContextType, LPCWSTR szwName, long dwHint );
//class CContextNamesTableInitializer
CContextNamesTableInitializer( DWORD dwContextType, LPCWSTR szwName, long dwHint )
{
    MapContextHintToName( dwContextType, szwName, dwHint );
}
#define DEFINE_NAME_AND_HINT( name, value, id )  \
    DEFINE_NAME( name, value )                   \
    DEFINE_HINT( name ## _ID, id )              \
    CContextNamesTableInitializer name ## _Decl( CURRENT_CONTEXT_TYPE, name, id );
#else
#define DEFINE_NAME_AND_HINT( name, value, id )  \
    DEFINE_NAME( name, value )                   \
    DEFINE_HINT( name ## _ID, id )
#endif
#undef CURRENT_CONTEXT_TYPE
#define CURRENT_CONTEXT_TYPE     WMS_SERVER_CONTEXT_NAME_TYPE
DEFINE_NAME_AND_HINT( WMS_SERVER_DOMAIN_NAME, "WMS_SERVER_DOMAIN_NAME", 3 )
DEFINE_NAME_AND_HINT( WMS_SERVER_VERSION_MAJOR, "WMS_SERVER_VERSION_MAJOR", 4 )
DEFINE_NAME_AND_HINT( WMS_SERVER_VERSION_MINOR, "WMS_SERVER_VERSION_MINOR", 5 )
DEFINE_NAME_AND_HINT( WMS_SERVER_VERSION_MINOR_MINOR, "WMS_SERVER_VERSION_MINOR_MINOR", 6 )
DEFINE_NAME_AND_HINT( WMS_SERVER, "WMS_SERVER", 7 )
DEFINE_NAME_AND_HINT( WMS_SERVER_EVENT_LOG, "WMS_SERVER_EVENT_LOG", 17 )
DEFINE_NAME_AND_HINT( WMS_SERVER_SHUTTING_DOWN, "WMS_SERVER_SHUTTING_DOWN", 18 )
DEFINE_NAME_AND_HINT( WMS_SERVER_CACHE_MANAGER, "WMS_SERVER_CACHE_MANAGER", 19 )
DEFINE_NAME_AND_HINT( WMS_SERVER_VERSION_BUILD, "WMS_SERVER_VERSION_BUILD", 26 )
DEFINE_NAME_AND_HINT( WMS_SERVER_NAME, "WMS_SERVER_NAME", 27 )
#undef CURRENT_CONTEXT_TYPE
#define CURRENT_CONTEXT_TYPE     WMS_USER_CONTEXT_NAME_TYPE
DEFINE_NAME_AND_HINT( WMS_USER_AGENT,           "WMS_USER_AGENT", 1 )
DEFINE_NAME_AND_HINT( WMS_USER_GUID,            "WMS_USER_GUID", 2 )
DEFINE_NAME_AND_HINT( WMS_USER_NAME,            "WMS_USER_NAME", 3 )
DEFINE_NAME_AND_HINT( WMS_USER_IP_ADDRESS,      "WMS_USER_IP_ADDRESS", 4 )
DEFINE_NAME_AND_HINT( WMS_USER_IP_ADDRESS_STRING,   "WMS_USER_IP_ADDRESS_STRING", 5 )
DEFINE_NAME_AND_HINT( WMS_USER_CONTROL_PROTOCOL, "WMS_USER_CONTROL_PROTOCOL", 6 )
DEFINE_NAME( WMS_MMS_PROTOCOL_NAME,    "MMS" )
DEFINE_NAME( WMS_RTSP_PROTOCOL_NAME,   "RTSP" )
DEFINE_NAME( WMS_HTTP_PROTOCOL_NAME,   "HTTP" )
DEFINE_NAME( WMS_UNKNOWN_PROTOCOL_NAME,"UNKNOWN" )
DEFINE_NAME_AND_HINT( WMS_USER_AUTHENTICATOR,   "WMS_USER_AUTHENTICATOR", 7 )
DEFINE_NAME_AND_HINT( WMS_USER_ID,              "WMS_USER_ID", 8 )
DEFINE_NAME_AND_HINT( WMS_USER_PORT, "WMS_USER_PORT", 12 )
DEFINE_NAME_AND_HINT( WMS_USER_PRESENTATION_CONTEXT, "WMS_USER_PRESENTATION_CONTEXT", 13 )
DEFINE_NAME_AND_HINT( WMS_USER_LINK_BANDWIDTH, "WMS_USER_LINK_BANDWIDTH", 20 )
DEFINE_NAME_AND_HINT( WMS_USER_REFERER, "WMS_USER_REFERER", 26 )
DEFINE_NAME_AND_HINT( WMS_USER_SERVER_IP_ADDRESS_STRING,   "WMS_USER_SERVER_IP_ADDRESS", 30 )
DEFINE_NAME_AND_HINT( WMS_USER_VIA_UPSTREAM_PROXIES, "WMS_USER_VIA_UPSTREAM_PROXIES", 36 )
DEFINE_NAME_AND_HINT( WMS_USER_VIA_DOWNSTREAM_PROXIES, "WMS_USER_VIA_DOWNSTREAM_PROXIES", 37 )
DEFINE_NAME_AND_HINT( WMS_USER_CACHE_CLIENT_COOKIE, "WMS_USER_CACHE_CLIENT_COOKIE", 45 )
DEFINE_NAME_AND_HINT( WMS_USER_CACHE_SERVER_COOKIE, "WMS_USER_CACHE_SERVER_COOKIE", 46 )
DEFINE_NAME_AND_HINT( WMS_USER_PROXY_CLIENT_AGENT, "WMS_USER_PROXY_CLIENT_AGENT", 47 )
#undef CURRENT_CONTEXT_TYPE
#define CURRENT_CONTEXT_TYPE     WMS_PRESENTATION_CONTEXT_NAME_TYPE
DEFINE_NAME_AND_HINT( WMS_PRESENT_STREAM_HEADERS,   "WMS_PRESENT_STREAM_HEADERS", 2)
DEFINE_NAME_AND_HINT( WMS_PRESENT_CONTENT_DESCRIPTION,"WMS_PRESENT_CONTENT_DESCRIPTION", 3 )
DEFINE_NAME_AND_HINT( WMS_PRESENT_PHYSICAL_NAME,    "WMS_PRESENT_PHYSICAL_NAME", 4 )
DEFINE_NAME_AND_HINT( WMS_PRESENT_REQUEST_NAME,     "WMS_PRESENT_REQUEST_NAME", 5 )
DEFINE_NAME_AND_HINT( WMS_PRESENT_BROADCAST,        "WMS_PRESENT_BROADCAST", 6 )
DEFINE_NAME_AND_HINT( WMS_PRESENT_SEEKABLE,         "WMS_PRESENT_SEEKABLE", 7 )
DEFINE_NAME_AND_HINT( WMS_PRESENT_RELIABLE,         "WMS_PRESENT_RELIABLE", 8 )
DEFINE_NAME_AND_HINT( WMS_PRESENT_BITRATE,          "WMS_PRESENT_BITRATE", 11 )
DEFINE_NAME_AND_HINT( WMS_PRESENT_DURATION_HI,      "WMS_PRESENT_DURATION_HI", 12 )
DEFINE_NAME_AND_HINT( WMS_PRESENT_DURATION_LO,      "WMS_PRESENT_DURATION_LO", 13 )
DEFINE_NAME_AND_HINT( WMS_PRESENT_PLAY_RATE,        "WMS_PRESENT_PLAY_RATE", 14 )
DEFINE_NAME_AND_HINT( WMS_PRESENT_START_TIME,     "WMS_PRESENT_START_TIME", 15 )
DEFINE_NAME_AND_HINT( WMS_PRESENT_ORIGINAL_PHYSICAL_NAME,    "WMS_PRESENT_ORIGINAL_PHYSICAL_NAME", 16 )
DEFINE_NAME_AND_HINT( WMS_PRESENT_ORIGINAL_REQUEST_NAME,     "WMS_PRESENT_ORIGINAL_REQUEST_NAME", 17 )
DEFINE_NAME_AND_HINT( WMS_PRESENT_TOTAL_BYTES_SENT_HI, "WMS_PRESENT_TOTAL_BYTES_SENT_HI", 18 )
DEFINE_NAME_AND_HINT( WMS_PRESENT_TOTAL_BYTES_SENT_LO, "WMS_PRESENT_TOTAL_BYTES_SENT_LO", 19 )
DEFINE_NAME_AND_HINT( WMS_PRESENT_TOTAL_PLAY_TIME_HI,  "WMS_PRESENT_TOTAL_PLAY_TIME_HI", 20 )
DEFINE_NAME_AND_HINT( WMS_PRESENT_TOTAL_PLAY_TIME_LO,  "WMS_PRESENT_TOTAL_PLAY_TIME_LO", 21 )
DEFINE_NAME_AND_HINT( WMS_PRESENT_ALLOCATED_BANDWIDTH,  "WMS_PRESENT_ALLOCATED_BANDWIDTH", 30 )
DEFINE_NAME_AND_HINT( WMS_PRESENT_PLAYLIST_ENTRY_ROLE, "WMS_PRESENT_PLAYLIST_ENTRY_ROLE", 45 )
DEFINE_NAME_AND_HINT( WMS_PRESENT_BANDWIDTH_ALLOCATED_BY_NETWORKSINK, "WMS_PRESENT_BANDWIDTH_ALLOCATED_BY_NETWORKSINK", 48 )
DEFINE_NAME_AND_HINT( WMS_PRESENT_WMSSINK_SELECTED_BITRATE, "WMS_PRESENT_WMSSINK_SELECTED_BITRATE", 51 )
DEFINE_NAME_AND_HINT( WMS_PRESENT_REDIRECT_LOCATION, "WMS_PRESENT_REDIRECT_LOCATION", 70 )
DEFINE_NAME_AND_HINT( WMS_PRESENT_PREROLL_TIME, "WMS_PRESENT_PREROLL_TIME", 81 )
#undef CURRENT_CONTEXT_TYPE
#define CURRENT_CONTEXT_TYPE     WMS_COMMAND_CONTEXT_NAME_TYPE
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_URL,                    "@WMS_COMMAND_CONTEXT_URL", 2 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_URL_SCHEME,             "@WMS_COMMAND_CONTEXT_URL_SCHEME", 3 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_URL_HOSTNAME,           "@WMS_COMMAND_CONTEXT_URL_HOSTNAME", 4 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_URL_PORT,               "@WMS_COMMAND_CONTEXT_URL_PORT", 5 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_URL_PATH,               "@WMS_COMMAND_CONTEXT_URL_PATH", 6 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_URL_EXTRAINFO,          "@WMS_COMMAND_CONTEXT_URL_EXTRAINFO", 7 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_BODY,                   "@WMS_COMMAND_CONTEXT_BODY", 11 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_BODY_TYPE,               "@WMS_COMMAND_CONTEXT_BODY_TYPE", 12 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_TRANSPORT,                "@ TRANSPORT PROPERTIES", 13 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_START_OFFSET,           "@WMS_COMMAND_CONTEXT_START_OFFSET", 16 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_START_OFFSET_TYPE,   "@WMS_COMMAND_CONTEXT_START_OFFSET_TYPE", 17 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_RATE,                   "@WMS_COMMAND_CONTEXT_RATE", 21 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_STREAM_SWITCH,          "@ STREAM SWITCH", 25 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_PUBPOINT_IDENTIFIER,            "@WMS_COMMAND_CONTEXT_PUBPOINT_IDENTIFIER", 40 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_EVENT,            "@WMS_COMMAND_CONTEXT_EVENT", 52 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_EVENT_ADMINNAME,            "@WMS_COMMAND_CONTEXT_EVENT_ADMINNAME", 53 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_LIMIT_CLIENTID,            "@WMS_COMMAND_CONTEXT_LIMIT_CLIENTID", 55 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_LIMIT_CLIENTIP,            "@WMS_COMMAND_CONTEXT_LIMIT_CLIENTIP", 56 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_LIMIT_OLD_VALUE,            "@WMS_COMMAND_CONTEXT_LIMIT_OLD_VALUE", 57 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_PLAYLIST_OBJECT,            "@WMS_COMMAND_CONTEXT_PLAYLIST_OBJECT", 59 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_PUBPOINT_NAME,       "@WMS_COMMAND_CONTEXT_PUBPOINT_NAME", 62 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_PUBPOINT_MONIKER,    "@WMS_COMMAND_CONTEXT_PUBPOINT_MONIKER", 63 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_EVENT_OLD_VALUE,     "@WMS_COMMAND_CONTEXT_EVENT_OLD_VALUE", 64 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_EVENT_NEW_VALUE,     "@WMS_COMMAND_CONTEXT_EVENT_NEW_VALUE", 65 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_EVENT_PROPERTY_NAME, "@WMS_COMMAND_CONTEXT_EVENT_PROPERTY_NAME", 66 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_PLUGIN_NAME,         "@WMS_COMMAND_CONTEXT_PLUGIN_NAME", 69 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_PLUGIN_MONIKER,      "@WMS_COMMAND_CONTEXT_PLUGIN_MONIKER", 70 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_LIMIT_NEW_VALUE,     "@WMS_COMMAND_CONTEXT_LIMIT_NEW_VALUE", 72 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_CACHE_MONIKER,      "@WMS_COMMAND_CONTEXT_CACHE_MONIKER", 87 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_DOWNLOAD_URL,      "@WMS_COMMAND_CONTEXT_DOWNLOAD_URL", 88 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_REDIRECT_URL,      "@WMS_COMMAND_CONTEXT_REDIRECT_URL", 89 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_PUSH_DISTRIBUTION_TEMPLATE, "@WMS_COMMAND_CONTEXT_PUSH_DISTRIBUTION_TEMPLATE", 97 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_PUSH_CREATING_NEW_PUBLISHING_POINT, "@WMS_COMMAND_CONTEXT_PUSH_CREATING_NEW_PUBLISHING_POINT", 99 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_PLAYLIST_ENTRY_UNIQUE_RUNTIME_ID, "@WMS_COMMAND_CONTEXT_PLAYLIST_ENTRY_UNIQUE_RUNTIME_ID", 100 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_REQUEST_URL, "@WMS_COMMAND_CONTEXT_REQUEST_URL", 105 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_ACTIVE_ENTRY_URL, "@WMS_COMMAND_CONTEXT_ACTIVE_ENTRY_URL", 164 )
DEFINE_NAME_AND_HINT( WMS_COMMAND_CONTEXT_ORIGINAL_MMS_URL, "@WMS_COMMAND_CONTEXT_ORIGINAL_MMS_URL", 165 )
#undef CURRENT_CONTEXT_TYPE
#define CURRENT_CONTEXT_TYPE     WMS_TRANSPORT_CONTEXT_NAME_TYPE
DEFINE_NAME_AND_HINT( WMS_TRANSPORT_CONTEXT_DATA_TRANSPORT,         "TRANSPORT PROTOCOL", 5 )
DEFINE_NAME_AND_HINT( WMS_TRANSPORT_CONTEXT_CLIENT_PORT,            "DESTINATION PORT", 7 )
DEFINE_NAME_AND_HINT( WMS_TRANSPORT_CONTEXT_CLIENT_FEEDBACK_PORT,   "CLIENT FEEDBACK PORT", 16 )
#undef CURRENT_CONTEXT_TYPE
#define CURRENT_CONTEXT_TYPE     WMS_CONTENT_DESCRIPTION_CONTEXT_NAME_TYPE
DEFINE_NAME_AND_HINT( WMS_CONTENT_DESCRIPTION_TITLE,            "title", 1 )
DEFINE_NAME_AND_HINT( WMS_CONTENT_DESCRIPTION_AUTHOR,           "author", 2 )
DEFINE_NAME_AND_HINT( WMS_CONTENT_DESCRIPTION_COPYRIGHT,        "copyright", 3 )
DEFINE_NAME_AND_HINT( WMS_CONTENT_DESCRIPTION_DESCRIPTION,      "WMS_CONTENT_DESCRIPTION_DESCRIPTION", 4 )
DEFINE_NAME_AND_HINT( WMS_CONTENT_DESCRIPTION_RATING,           "WMS_CONTENT_DESCRIPTION_RATING", 5 )
DEFINE_NAME_AND_HINT( WMS_CONTENT_DESCRIPTION_PLAYLIST_ENTRY_URL, "WMS_CONTENT_DESCRIPTION_PLAYLIST_ENTRY_URL", 6 )
DEFINE_NAME_AND_HINT( WMS_CONTENT_DESCRIPTION_ROLE,             "WMS_CONTENT_DESCRIPTION_ROLE", 7 )
DEFINE_NAME_AND_HINT( WMS_CONTENT_DESCRIPTION_NO_SKIP,          "WMS_CONTENT_DESCRIPTION_NO_SKIP", 11 )
DEFINE_NAME_AND_HINT( WMS_CONTENT_DESCRIPTION_ALBUM,            "album", 14 )
DEFINE_NAME_AND_HINT( WMS_CONTENT_DESCRIPTION_ARTIST,           "artist", 15 )
DEFINE_NAME_AND_HINT( WMS_CONTENT_DESCRIPTION_BANNERABSTRACT,   "bannerAbstract", 16 )
DEFINE_NAME_AND_HINT( WMS_CONTENT_DESCRIPTION_BANNERINFOURL,    "bannerInfoURL", 17 )
DEFINE_NAME_AND_HINT( WMS_CONTENT_DESCRIPTION_BANNERURL,        "bannerURL", 18 )
DEFINE_NAME_AND_HINT( WMS_CONTENT_DESCRIPTION_GENRE,            "genre", 19 )
DEFINE_NAME_AND_HINT( WMS_CONTENT_DESCRIPTION_LOGURL,           "logURL", 20 )
DEFINE_NAME_AND_HINT( WMS_CONTENT_DESCRIPTION_SERVER_BRANDING_INFO,      "WMS_CONTENT_DESCRIPTION_SERVER_BRANDING_INFO", 22 )
DEFINE_NAME_AND_HINT( WMS_CONTENT_DESCRIPTION_NO_RECEDE,          "WMS_CONTENT_DESCRIPTION_NO_RECEDE", 24 )
#undef CURRENT_CONTEXT_TYPE
#define CURRENT_CONTEXT_TYPE     WMS_CACHE_CONTENT_INFORMATION_CONTEXT_NAME_TYPE
DEFINE_NAME_AND_HINT( WMS_CACHE_CONTENT_INFORMATION_CONTENT_TYPE, "WMS_CACHE_CONTENT_INFORMATION_CONTENT_TYPE", 1 )
DEFINE_NAME_AND_HINT( WMS_CACHE_CONTENT_INFORMATION_EVENT_SUBSCRIPTIONS, "WMS_CACHE_CONTENT_INFORMATION_EVENT_SUBSCRIPTIONS", 2 )
DEFINE_NAME_AND_HINT( WMS_CACHE_CONTENT_INFORMATION_DATA_CONTAINER_VERSION, "WMS_CACHE_CONTENT_INFORMATION_DATA_CONTAINER_VERSION", 3 )
DEFINE_NAME_AND_HINT( WMS_CACHE_CONTENT_INFORMATION_CONTENT_DESCRIPTION_LISTS, "WMS_CACHE_CONTENT_INFORMATION_CONTENT_DESCRIPTION_LISTS", 4 )
#undef CURRENT_CONTEXT_TYPE
#define CURRENT_CONTEXT_TYPE     WMS_ARCHIVE_CONTEXT_NAME_TYPE
DEFINE_NAME_AND_HINT( WMS_ARCHIVE_FILENAME, "WMS_ARCHIVE_FILENAME", 1 )
DEFINE_NAME_AND_HINT( WMS_ARCHIVE_FORMAT_TYPE, "WMS_ARCHIVE_FORMAT_TYPE", 2 )
DEFINE_NAME_AND_HINT( WMS_ARCHIVE_STREAM_HEADERS, "WMS_ARCHIVE_STREAM_HEADERS", 3 )
DEFINE_NAME_AND_HINT( WMS_ARCHIVE_STATUS_CODE, "WMS_ARCHIVE_STATUS_CODE", 4 )
DEFINE_NAME_AND_HINT( WMS_ARCHIVE_FILE_SIZE, "WMS_ARCHIVE_FILE_SIZE", 5 )
DEFINE_NAME_AND_HINT( WMS_ARCHIVE_PACKET_LOSS_PERCENTAGE, "WMS_ARCHIVE_PACKET_LOSS_PERCENTAGE", 6 )
DEFINE_NAME_AND_HINT( WMS_ARCHIVE_CONTENT_DESCRIPTION_LIST_BUFFER, "WMS_ARCHIVE_CONTENT_DESCRIPTION_LIST_BUFFER", 7 )
#endif






