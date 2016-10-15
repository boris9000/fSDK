/*+@@file@@----------------------------------------------------------------*//*!
 \file		BridgeDeviceService.h
 \par Description 
            Extension and update of headers for PellesC compiler suite.
 \par Project: 
            PellesC Headers extension
 \date		Created  on Sat Jul  2 17:23:55 2016
 \date		Modified on Sat Jul  2 17:23:55 2016
 \author	frankie
\*//*-@@file@@----------------------------------------------------------------*/

#ifndef _BRIDGEDEVICESERVICE_H_
#define _BRIDGEDEVICESERVICE_H_
#if __POCC__ >= 500
#pragma once
#endif
#ifndef __propkeydef_h__
#include <propkeydef.h>
#endif
#define DEFINE_DEVSVCGUID DEFINE_GUID
#define DEFINE_DEVSVCPROPKEY DEFINE_PROPERTYKEY
DEFINE_DEVSVCGUID(FORMAT_Undefined, 0x30000000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_Undefined                      L"Undefined"
DEFINE_DEVSVCGUID(FORMAT_Association, 0x30010000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_Association                    L"Association"
DEFINE_DEVSVCGUID(FORMAT_DeviceScript, 0x30020000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_DeviceScript                   L"DeviceScript"
DEFINE_DEVSVCGUID(FORMAT_DeviceExecutable, 0x30030000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_DeviceExecutable               L"DeviceExecutable"
DEFINE_DEVSVCGUID(FORMAT_TextDocument, 0x30040000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_TextDocument                   L"TextDocument"
DEFINE_DEVSVCGUID(FORMAT_HTMLDocument, 0x30050000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_HTMLDocument                   L"HTMLDocument"
DEFINE_DEVSVCGUID(FORMAT_DPOFDocument, 0x30060000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_DPOFDocument                   L"DPOFDocument"
DEFINE_DEVSVCGUID(FORMAT_AIFFFile, 0x30070000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_AIFFFile                       L"AIFFFile"
DEFINE_DEVSVCGUID(FORMAT_WAVFile, 0x30080000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_WAVFile                        L"WAVFile"
DEFINE_DEVSVCGUID(FORMAT_MP3File, 0x30090000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_MP3File                        L"MP3File"
DEFINE_DEVSVCGUID(FORMAT_AVIFile, 0x300A0000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_AVIFile                        L"AVIFile"
DEFINE_DEVSVCGUID(FORMAT_MPEGFile, 0x300B0000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_MPEGFile                       L"MPEGFile"
DEFINE_DEVSVCGUID(FORMAT_ASFFile, 0x300C0000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_ASFFile                        L"ASFFile"
DEFINE_DEVSVCGUID(FORMAT_UnknownImage, 0x38000000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_UnknownImage                   L"UnknownImage"
DEFINE_DEVSVCGUID(FORMAT_EXIFImage, 0x38010000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_EXIFImage                      L"EXIFImage"
DEFINE_DEVSVCGUID(FORMAT_TIFFEPImage, 0x38020000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_TIFFEPImage                    L"TIFFEPImage"
DEFINE_DEVSVCGUID(FORMAT_FlashPixImage, 0x38030000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_FlashPixImage                  L"FlashPixImage"
DEFINE_DEVSVCGUID(FORMAT_BMPImage, 0x38040000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_BMPImage                       L"BMPImage"
DEFINE_DEVSVCGUID(FORMAT_CIFFImage, 0x38050000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_CIFFImage                      L"CIFFImage"
DEFINE_DEVSVCGUID(FORMAT_GIFImage, 0x38070000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_GIFImage                       L"GIFImage"
DEFINE_DEVSVCGUID(FORMAT_JFIFImage, 0x38080000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_JFIFImage                      L"JFIFImage"
DEFINE_DEVSVCGUID(FORMAT_PCDImage, 0x38090000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_PCDImage                       L"PCDImage"
DEFINE_DEVSVCGUID(FORMAT_PICTImage, 0x380A0000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_PICTImage                      L"PICTImage"
DEFINE_DEVSVCGUID(FORMAT_PNGImage, 0x380B0000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_PNGImage                       L"PNGImage"
DEFINE_DEVSVCGUID(FORMAT_TIFFImage, 0x380D0000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_TIFFImage                      L"TIFFImage"
DEFINE_DEVSVCGUID(FORMAT_TIFFITImage, 0x380E0000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_TIFFITImage                    L"TIFFITImage"
DEFINE_DEVSVCGUID(FORMAT_JP2Image, 0x380F0000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_JP2Image                       L"JP2Image"
DEFINE_DEVSVCGUID(FORMAT_JPXImage, 0x38100000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_JPXImage                       L"JPXImage"
DEFINE_DEVSVCGUID(FORMAT_FirmwareFile, 0xB8020000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_FirmwareFile                   L"FirmwareFile"
DEFINE_DEVSVCGUID(FORMAT_HDPhotoImage, 0xB8810000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_HDPhotoImage                   L"HDPhotoImage"
DEFINE_DEVSVCGUID(FORMAT_UndefinedAudio, 0xB9000000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_UndefinedAudio                 L"UndefinedAudio"
DEFINE_DEVSVCGUID(FORMAT_WMAFile, 0xB9010000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_WMAFile                        L"WMAFile"
DEFINE_DEVSVCGUID(FORMAT_OGGFile, 0xB9020000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_OGGFile                        L"OGGFile"
DEFINE_DEVSVCGUID(FORMAT_AACFile, 0xB9030000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_AACFile                        L"AACFile"
DEFINE_DEVSVCGUID(FORMAT_AudibleFile, 0xB9040000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_AudibleFile                    L"AudibleFile"
DEFINE_DEVSVCGUID(FORMAT_FLACFile, 0xB9060000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_FLACFile                       L"FLACFile"
DEFINE_DEVSVCGUID(FORMAT_UndefinedVideo, 0xB9890000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_UndefinedVideo                 L"UndefinedVideo"
DEFINE_DEVSVCGUID(FORMAT_WMVFile, 0xB9810000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_WMVFile                        L"WMVFile"
DEFINE_DEVSVCGUID(FORMAT_MPEG4File, 0xB9820000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_MPEG4File                      L"MPEG4File"
DEFINE_DEVSVCGUID(FORMAT_MPEG2File, 0xB9830000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_MPEG2File                      L"MPEG2File"
DEFINE_DEVSVCGUID(FORMAT_3GPPFile, 0xB9840000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_3GPPFile                       L"3GPPFile"
DEFINE_DEVSVCGUID(FORMAT_UndefinedCollection, 0xBA060000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_UndefinedCollection            L"UndefinedCollection"
DEFINE_DEVSVCGUID(FORMAT_AbstractMultimediaAlbum, 0xBA010000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_AbstractMultimediaAlbum        L"AbstractMultimediaAlbum"
DEFINE_DEVSVCGUID(FORMAT_AbstractImageAlbum, 0xBA020000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_AbstractImageAlbum             L"AbstractImageAlbum"
DEFINE_DEVSVCGUID(FORMAT_AbstractAudioAlbum, 0xBA030000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_AbstractAudioAlbum             L"AbstractAudioAlbum"
DEFINE_DEVSVCGUID(FORMAT_AbstractVideoAlbum, 0xBA040000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_AbstractVideoAlbum             L"AbstractVideoAlbum"
DEFINE_DEVSVCGUID(FORMAT_AbstractAudioVideoAlbum, 0xBA050000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_AbstractAudioVideoAlbum        L"AbstractAudioVideoAlbum"
DEFINE_DEVSVCGUID(FORMAT_AbstractChapteredProduction, 0xBA080000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_AbstractChapteredProduction    L"AbstractChapteredProduction"
DEFINE_DEVSVCGUID(FORMAT_AbstractAudioPlaylist, 0xBA090000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_AbstractAudioPlaylist          L"AbstractAudioPlaylist"
DEFINE_DEVSVCGUID(FORMAT_AbstractVideoPlaylist, 0xBA0A0000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_AbstractVideoPlaylist          L"AbstractVideoPlaylist"
DEFINE_DEVSVCGUID(FORMAT_AbstractMediacast, 0xBA0B0000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_AbstractMediacast              L"AbstractMediacast"
DEFINE_DEVSVCGUID(FORMAT_WPLPlaylist, 0xBA100000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_WPLPlaylist                    L"WPLPlaylist"
DEFINE_DEVSVCGUID(FORMAT_M3UPlaylist, 0xBA110000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_M3UPlaylist                    L"M3UPlaylist"
DEFINE_DEVSVCGUID(FORMAT_MPLPlaylist, 0xBA120000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_MPLPlaylist                    L"MPLPlaylist"
DEFINE_DEVSVCGUID(FORMAT_ASXPlaylist, 0xBA130000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_ASXPlaylist                    L"ASXPlaylist"
DEFINE_DEVSVCGUID(FORMAT_PSLPlaylist, 0xBA140000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_PSLPlaylist                    L"PSLPlaylist"
DEFINE_DEVSVCGUID(FORMAT_UndefinedDocument, 0xBA800000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_UndefinedDocument              L"UndefinedDocument"
DEFINE_DEVSVCGUID(FORMAT_AbstractDocument, 0xBA810000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_AbstractDocument               L"AbstractDocument"
DEFINE_DEVSVCGUID(FORMAT_XMLDocument, 0xBA820000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_XMLDocument                    L"XMLDocument"
DEFINE_DEVSVCGUID(FORMAT_WordDocument, 0xBA830000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_WordDocument                   L"WordDocument"
DEFINE_DEVSVCGUID(FORMAT_MHTDocument, 0xBA840000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_MHTDocument                    L"MHTDocument"
DEFINE_DEVSVCGUID(FORMAT_ExcelDocument, 0xBA850000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_ExcelDocument                  L"ExcelDocument"
DEFINE_DEVSVCGUID(FORMAT_PowerPointDocument, 0xBA860000, 0xAE6C, 0x4804, 0x98, 0xBA, 0xC5, 0x7B, 0x46, 0x96, 0x5F, 0xE7);
#define NAME_PowerPointDocument             L"PowerPointDocument"
DEFINE_DEVSVCPROPKEY(PKEY_GenericObj_ObjectID, 0xEF6B490D, 0x5CD8, 0x437A, 0xAF, 0xFC, 0xDA, 0x8B, 0x60, 0xEE, 0x4A, 0x3C, 2);
#define NAME_GenericObj_ObjectID           L"ObjectID"
DEFINE_DEVSVCPROPKEY(PKEY_GenericObj_StorageID, 0xEF6B490D, 0x5CD8, 0x437A, 0xAF, 0xFC, 0xDA, 0x8B, 0x60, 0xEE, 0x4A, 0x3C, 23);
#define NAME_GenericObj_StorageID           L"StorageID"
DEFINE_DEVSVCPROPKEY(PKEY_GenericObj_ObjectFormat, 0xEF6B490D, 0x5CD8, 0x437A, 0xAF, 0xFC, 0xDA, 0x8B, 0x60, 0xEE, 0x4A, 0x3C, 6);
#define NAME_GenericObj_ObjectFormat        L"ObjectFormat"
DEFINE_DEVSVCPROPKEY(PKEY_GenericObj_ProtectionStatus, 0xEF6B490D, 0x5CD8, 0x437A, 0xAF, 0xFC, 0xDA, 0x8B, 0x60, 0xEE, 0x4A, 0x3C, 26);
#define NAME_GenericObj_ProtectionStatus    L"ProtectionStatus"
DEFINE_DEVSVCPROPKEY(PKEY_GenericObj_ObjectSize, 0xEF6B490D, 0x5CD8, 0x437A, 0xAF, 0xFC, 0xDA, 0x8B, 0x60, 0xEE, 0x4A, 0x3C, 11);
#define NAME_GenericObj_ObjectSize          L"ObjectSize"
DEFINE_DEVSVCPROPKEY(PKEY_GenericObj_AssociationType, 0xEF6B490D, 0x5CD8, 0x437A, 0xAF, 0xFC, 0xDA, 0x8B, 0x60, 0xEE, 0x4A, 0x3C, 32);
#define NAME_GenericObj_AssociationType     L"AssociationType"
DEFINE_DEVSVCPROPKEY(PKEY_GenericObj_AssociationDesc, 0xEF6B490D, 0x5CD8, 0x437A, 0xAF, 0xFC, 0xDA, 0x8B, 0x60, 0xEE, 0x4A, 0x3C, 33);
#define NAME_GenericObj_AssociationDesc     L"AssociationDesc"
DEFINE_DEVSVCPROPKEY(PKEY_GenericObj_ObjectFileName, 0xEF6B490D, 0x5CD8, 0x437A, 0xAF, 0xFC, 0xDA, 0x8B, 0x60, 0xEE, 0x4A, 0x3C, 12);
#define NAME_GenericObj_ObjectFileName      L"ObjectFileName"
DEFINE_DEVSVCPROPKEY(PKEY_GenericObj_DateCreated, 0xEF6B490D, 0x5CD8, 0x437A, 0xAF, 0xFC, 0xDA, 0x8B, 0x60, 0xEE, 0x4A, 0x3C, 39);
#define NAME_GenericObj_DateCreated         L"DateCreated"
DEFINE_DEVSVCPROPKEY(PKEY_GenericObj_DateModified, 0xEF6B490D, 0x5CD8, 0x437A, 0xAF, 0xFC, 0xDA, 0x8B, 0x60, 0xEE, 0x4A, 0x3C, 40);
#define NAME_GenericObj_DateModified        L"DateModified"
DEFINE_DEVSVCPROPKEY(PKEY_GenericObj_Keywords, 0xEF6B490D, 0x5CD8, 0x437A, 0xAF, 0xFC, 0xDA, 0x8B, 0x60, 0xEE, 0x4A, 0x3C, 15);
#define NAME_GenericObj_Keywords            L"Keywords"
DEFINE_DEVSVCPROPKEY(PKEY_GenericObj_ParentID, 0xEF6B490D, 0x5CD8, 0x437A, 0xAF, 0xFC, 0xDA, 0x8B, 0x60, 0xEE, 0x4A, 0x3C, 3);
#define NAME_GenericObj_ParentID            L"ParentID"
DEFINE_DEVSVCPROPKEY(PKEY_GenericObj_AllowedFolderContents, 0xEF6B490D, 0x5CD8, 0x437A, 0xAF, 0xFC, 0xDA, 0x8B, 0x60, 0xEE, 0x4A, 0x3C, 34);
#define NAME_GenericObj_AllowedFolderContents   L"AllowedFolderContents"
DEFINE_DEVSVCPROPKEY(PKEY_GenericObj_Hidden, 0xEF6B490D, 0x5CD8, 0x437A, 0xAF, 0xFC, 0xDA, 0x8B, 0x60, 0xEE, 0x4A, 0x3C, 28);
#define NAME_GenericObj_Hidden              L"Hidden"
DEFINE_DEVSVCPROPKEY(PKEY_GenericObj_SystemObject, 0xEF6B490D, 0x5CD8, 0x437A, 0xAF, 0xFC, 0xDA, 0x8B, 0x60, 0xEE, 0x4A, 0x3C, 29);
#define NAME_GenericObj_SystemObject        L"SystemObject"
DEFINE_DEVSVCPROPKEY(PKEY_GenericObj_PersistentUID, 0xEF6B490D, 0x5CD8, 0x437A, 0xAF, 0xFC, 0xDA, 0x8B, 0x60, 0xEE, 0x4A, 0x3C, 5);
#define NAME_GenericObj_PersistentUID       L"PersistentUID"
DEFINE_DEVSVCPROPKEY(PKEY_GenericObj_SyncID, 0xEF6B490D, 0x5CD8, 0x437A, 0xAF, 0xFC, 0xDA, 0x8B, 0x60, 0xEE, 0x4A, 0x3C, 16);
#define NAME_GenericObj_SyncID              L"SyncID"
DEFINE_DEVSVCPROPKEY(PKEY_GenericObj_PropertyBag, 0xEF6B490D, 0x5CD8, 0x437A, 0xAF, 0xFC, 0xDA, 0x8B, 0x60, 0xEE, 0x4A, 0x3C, 35);
#define NAME_GenericObj_PropertyBag         L"PropertyBag"
DEFINE_DEVSVCPROPKEY(PKEY_GenericObj_Name, 0xEF6B490D, 0x5CD8, 0x437A, 0xAF, 0xFC, 0xDA, 0x8B, 0x60, 0xEE, 0x4A, 0x3C, 4);
#define NAME_GenericObj_Name                L"Name"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_Artist, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 24);
#define NAME_MediaObj_Artist                L"Artist"
DEFINE_DEVSVCPROPKEY(PKEY_GenericObj_DateAuthored, 0xEF6B490D, 0x5CD8, 0x437A, 0xAF, 0xFC, 0xDA, 0x8B, 0x60, 0xEE, 0x4A, 0x3C, 41);
#define NAME_GenericObj_DateAuthored        L"DateAuthored"
DEFINE_DEVSVCPROPKEY(PKEY_GenericObj_Description, 0xEF6B490D, 0x5CD8, 0x437A, 0xAF, 0xFC, 0xDA, 0x8B, 0x60, 0xEE, 0x4A, 0x3C, 45);
#define NAME_GenericObj_Description         L"Description"
DEFINE_DEVSVCPROPKEY(PKEY_GenericObj_LanguageLocale, 0xEF6B490D, 0x5CD8, 0x437A, 0xAF, 0xFC, 0xDA, 0x8B, 0x60, 0xEE, 0x4A, 0x3C, 27);
#define NAME_GenericObj_LanguageLocale      L"LanguageLocale"
DEFINE_DEVSVCPROPKEY(PKEY_GenericObj_Copyright, 0xEF6B490D, 0x5CD8, 0x437A, 0xAF, 0xFC, 0xDA, 0x8B, 0x60, 0xEE, 0x4A, 0x3C, 38);
#define NAME_GenericObj_Copyright           L"Copyright"
DEFINE_DEVSVCPROPKEY(PKEY_VideoObj_Source, 0x346F2163, 0xF998, 0x4146, 0x8B, 0x01, 0xD1, 0x9B, 0x4C, 0x00, 0xDE, 0x9A, 4);
#define NAME_VideoObj_Source                L"Source"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_GeographicOrigin, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 40);
#define NAME_MediaObj_GeographicOrigin      L"GeographicOrigin"
DEFINE_DEVSVCPROPKEY(PKEY_GenericObj_DateAdded, 0xEF6B490D, 0x5CD8, 0x437A, 0xAF, 0xFC, 0xDA, 0x8B, 0x60, 0xEE, 0x4A, 0x3C, 36);
#define NAME_GenericObj_DateAdded           L"DateAdded"
DEFINE_DEVSVCPROPKEY(PKEY_GenericObj_NonConsumable, 0xEF6B490D, 0x5CD8, 0x437A, 0xAF, 0xFC, 0xDA, 0x8B, 0x60, 0xEE, 0x4A, 0x3C, 30);
#define NAME_GenericObj_NonConsumable       L"NonConsumable"
DEFINE_DEVSVCPROPKEY(PKEY_GenericObj_Corrupt, 0xEF6B490D, 0x5CD8, 0x437A, 0xAF, 0xFC, 0xDA, 0x8B, 0x60, 0xEE, 0x4A, 0x3C, 37);
#define NAME_GenericObj_Corrupt             L"Corrupt"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_Width, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 22);
#define NAME_MediaObj_Width                 L"Width"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_Height, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 23);
#define NAME_MediaObj_Height                L"Height"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_Duration, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 19);
#define NAME_MediaObj_Duration              L"Duration"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_UserRating, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 17);
#define NAME_MediaObj_UserRating            L"UserRating"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_Track, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 43);
#define NAME_MediaObj_Track                 L"Track"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_Genre, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 32);
#define NAME_MediaObj_Genre                 L"Genre"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_Credits, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 47);
#define NAME_MediaObj_Credits               L"Credits"
DEFINE_DEVSVCPROPKEY(PKEY_AudioObj_Lyrics, 0xB324F56A, 0xDC5D, 0x46E5, 0xB6, 0xDF, 0xD2, 0xEA, 0x41, 0x48, 0x88, 0xC6, 6);
#define NAME_AudioObj_Lyrics                L"Lyrics"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_SubscriptionContentID, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 5);
#define NAME_MediaObj_SubscriptionContentID L"SubscriptionContentID"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_Producer, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 45);
#define NAME_MediaObj_Producer              L"Producer"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_UseCount, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 6);
#define NAME_MediaObj_UseCount              L"UseCount"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_SkipCount, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 7);
#define NAME_MediaObj_SkipCount             L"SkipCount"
DEFINE_DEVSVCPROPKEY(PKEY_GenericObj_DateAccessed, 0xEF6B490D, 0x5CD8, 0x437A, 0xAF, 0xFC, 0xDA, 0x8B, 0x60, 0xEE, 0x4A, 0x3C, 42);
#define NAME_GenericObj_DateAccessed        L"DateAccessed"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_ParentalRating, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 9);
#define NAME_MediaObj_ParentalRating        L"ParentalRating"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_MediaType, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 10);
#define NAME_MediaObj_MediaType             L"MediaType"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_Composer, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 11);
#define NAME_MediaObj_Composer              L"Composer"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_EffectiveRating, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 12);
#define NAME_MediaObj_EffectiveRating       L"EffectiveRating"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_Subtitle, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 13);
#define NAME_MediaObj_Subtitle              L"Subtitle"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_DateOriginalRelease, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 41);
#define NAME_MediaObj_DateOriginalRelease   L"DateOriginalRelease"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_AlbumName, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 42);
#define NAME_MediaObj_AlbumName             L"AlbumName"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_AlbumArtist, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 25);
#define NAME_MediaObj_AlbumArtist           L"AlbumArtist"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_Mood, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 44);
#define NAME_MediaObj_Mood                  L"Mood"
DEFINE_DEVSVCPROPKEY(PKEY_GenericObj_DRMStatus, 0xEF6B490D, 0x5CD8, 0x437A, 0xAF, 0xFC, 0xDA, 0x8B, 0x60, 0xEE, 0x4A, 0x3C, 31);
#define NAME_GenericObj_DRMStatus           L"DRMStatus"
DEFINE_DEVSVCPROPKEY(PKEY_GenericObj_SubDescription, 0xEF6B490D, 0x5CD8, 0x437A, 0xAF, 0xFC, 0xDA, 0x8B, 0x60, 0xEE, 0x4A, 0x3C, 46);
#define NAME_GenericObj_SubDescription      L"SubDescription"
DEFINE_DEVSVCPROPKEY(PKEY_ImageObj_IsCropped, 0x63D64908, 0x9FA1, 0x479F, 0x85, 0xBA, 0x99, 0x52, 0x21, 0x64, 0x47, 0xDB, 4);
#define NAME_ImageObj_IsCropped             L"IsCropped"
DEFINE_DEVSVCPROPKEY(PKEY_ImageObj_IsColorCorrected, 0x63D64908, 0x9FA1, 0x479F, 0x85, 0xBA, 0x99, 0x52, 0x21, 0x64, 0x47, 0xDB, 5);
#define NAME_ImageObj_IsColorCorrected      L"IsColorCorrected"
DEFINE_DEVSVCPROPKEY(PKEY_ImageObj_ImageBitDepth, 0x63D64908, 0x9FA1, 0x479F, 0x85, 0xBA, 0x99, 0x52, 0x21, 0x64, 0x47, 0xDB, 3);
#define NAME_ImageObj_ImageBitDepth         L"ImageBitDepth"
DEFINE_DEVSVCPROPKEY(PKEY_ImageObj_Aperature, 0x63D64908, 0x9FA1, 0x479F, 0x85, 0xBA, 0x99, 0x52, 0x21, 0x64, 0x47, 0xDB, 6);
#define NAME_ImageObj_Aperature             L"Aperature"
DEFINE_DEVSVCPROPKEY(PKEY_ImageObj_Exposure, 0x63D64908, 0x9FA1, 0x479F, 0x85, 0xBA, 0x99, 0x52, 0x21, 0x64, 0x47, 0xDB, 7);
#define NAME_ImageObj_Exposure              L"Exposure"
DEFINE_DEVSVCPROPKEY(PKEY_ImageObj_ISOSpeed, 0x63D64908, 0x9FA1, 0x479F, 0x85, 0xBA, 0x99, 0x52, 0x21, 0x64, 0x47, 0xDB, 8);
#define NAME_ImageObj_ISOSpeed              L"ISOSpeed"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_Owner, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 26);
#define NAME_MediaObj_Owner                 L"Owner"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_Editor, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 27);
#define NAME_MediaObj_Editor                L"Editor"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_WebMaster, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 28);
#define NAME_MediaObj_WebMaster             L"WebMaster"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_URLSource, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 29);
#define NAME_MediaObj_URLSource             L"URLSource"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_URLLink, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 30);
#define NAME_MediaObj_URLLink               L"URLLink"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_BookmarkTime, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 33);
#define NAME_MediaObj_BookmarkTime          L"BookmarkTime"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_BookmarkObject, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 34);
#define NAME_MediaObj_BookmarkObject        L"BookmarkObject"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_BookmarkByte, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 36);
#define NAME_MediaObj_BookmarkByte          L"BookmarkByte"
DEFINE_DEVSVCPROPKEY(PKEY_GenericObj_DateRevised, 0xEF6B490D, 0x5CD8, 0x437A, 0xAF, 0xFC, 0xDA, 0x8B, 0x60, 0xEE, 0x4A, 0x3C, 43);
#define NAME_GenericObj_DateRevised         L"DateRevised"
DEFINE_DEVSVCPROPKEY(PKEY_GenericObj_TimeToLive, 0xEF6B490D, 0x5CD8, 0x437A, 0xAF, 0xFC, 0xDA, 0x8B, 0x60, 0xEE, 0x4A, 0x3C, 44);
#define NAME_GenericObj_TimeToLive          L"TimeToLive"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_MediaUID, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 38);
#define NAME_MediaObj_MediaUID              L"MediaUID"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_TotalBitRate, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 2);
#define NAME_MediaObj_TotalBitRate          L"TotalBitRate"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_BitRateType, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 3);
#define NAME_MediaObj_BitRateType           L"BitRateType"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_SampleRate, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 15);
#define NAME_MediaObj_SampleRate            L"SampleRate"
DEFINE_DEVSVCPROPKEY(PKEY_AudioObj_Channels, 0xB324F56A, 0xDC5D, 0x46E5, 0xB6, 0xDF, 0xD2, 0xEA, 0x41, 0x48, 0x88, 0xC6, 10);
#define NAME_AudioObj_Channels              L"Channels"
DEFINE_DEVSVCPROPKEY(PKEY_AudioObj_AudioBitDepth, 0xB324F56A, 0xDC5D, 0x46E5, 0xB6, 0xDF, 0xD2, 0xEA, 0x41, 0x48, 0x88, 0xC6, 12);
#define NAME_AudioObj_AudioBitDepth         L"AudioBitDepth"
DEFINE_DEVSVCPROPKEY(PKEY_AudioObj_AudioBlockAlignment, 0xB324F56A, 0xDC5D, 0x46E5, 0xB6, 0xDF, 0xD2, 0xEA, 0x41, 0x48, 0x88, 0xC6, 13);
#define NAME_AudioObj_AudioBlockAlignment   L"AudioBlockAlignment"
DEFINE_DEVSVCPROPKEY(PKEY_VideoObj_ScanType, 0x346F2163, 0xF998, 0x4146, 0x8B, 0x01, 0xD1, 0x9B, 0x4C, 0x00, 0xDE, 0x9A, 12);
#define NAME_VideoObj_ScanType              L"ScanType"
DEFINE_DEVSVCPROPKEY(PKEY_AudioObj_AudioFormatCode, 0xB324F56A, 0xDC5D, 0x46E5, 0xB6, 0xDF, 0xD2, 0xEA, 0x41, 0x48, 0x88, 0xC6, 11);
#define NAME_AudioObj_AudioFormatCode       L"AudioFormatCode"
DEFINE_DEVSVCPROPKEY(PKEY_AudioObj_AudioBitRate, 0xB324F56A, 0xDC5D, 0x46E5, 0xB6, 0xDF, 0xD2, 0xEA, 0x41, 0x48, 0x88, 0xC6, 9);
#define NAME_AudioObj_AudioBitRate          L"AudioBitRate"
DEFINE_DEVSVCPROPKEY(PKEY_VideoObj_VideoFormatCode, 0x346F2163, 0xF998, 0x4146, 0x8B, 0x01, 0xD1, 0x9B, 0x4C, 0x00, 0xDE, 0x9A, 14);
#define NAME_VideoObj_VideoFormatCode       L"VideoFormatCode"
DEFINE_DEVSVCPROPKEY(PKEY_VideoObj_VideoBitRate, 0x346F2163, 0xF998, 0x4146, 0x8B, 0x01, 0xD1, 0x9B, 0x4C, 0x00, 0xDE, 0x9A, 13);
#define NAME_VideoObj_VideoBitRate          L"VideoBitRate"
DEFINE_DEVSVCPROPKEY(PKEY_VideoObj_VideoFrameRate, 0x346F2163, 0xF998, 0x4146, 0x8B, 0x01, 0xD1, 0x9B, 0x4C, 0x00, 0xDE, 0x9A, 15);
#define NAME_VideoObj_VideoFrameRate        L"VideoFrameRate"
DEFINE_DEVSVCPROPKEY(PKEY_VideoObj_KeyFrameDistance, 0x346F2163, 0xF998, 0x4146, 0x8B, 0x01, 0xD1, 0x9B, 0x4C, 0x00, 0xDE, 0x9A, 10);
#define NAME_VideoObj_KeyFrameDistance      L"KeyFrameDistance"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_BufferSize, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 46);
#define NAME_MediaObj_BufferSize            L"BufferSize"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_EncodingQuality, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 48);
#define NAME_MediaObj_EncodingQuality       L"EncodingQuality"
DEFINE_DEVSVCPROPKEY(PKEY_MediaObj_EncodingProfile, 0x2ED8BA05, 0x0AD3, 0x42DC, 0xB0, 0xD0, 0xBC, 0x95, 0xAC, 0x39, 0x6A, 0xC8, 21);
#define NAME_MediaObj_EncodingProfile       L"EncodingProfile"
DEFINE_DEVSVCPROPKEY(PKEY_GenericObj_ReferenceParentID, 0xEF6B490D, 0x5CD8, 0x437A, 0xAF, 0xFC, 0xDA, 0x8B, 0x60, 0xEE, 0x4A, 0x3C, 47);
#define NAME_GenericObj_ReferenceParentID   L"ReferenceParentID"
#endif