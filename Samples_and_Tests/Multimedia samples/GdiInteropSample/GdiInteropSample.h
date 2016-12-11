/*+@@file@@----------------------------------------------------------------*//*!
 \file		GdiInteropSample.h
 \par Description 
            
 \par  Status: 
            
 \par Project: 
            
 \date		Created  on Thu Nov 17 14:36:21 2016
 \date		Modified on Thu Nov 17 14:36:21 2016
 \author	
\*//*-@@file@@----------------------------------------------------------------*/
#pragma once

// Modify the following defines if you have to target a platform prior to the ones specified below.
// Refer to MSDN for the latest info on corresponding values for different platforms.
#ifndef WINVER              // Allow use of features specific to Windows 7 or later.
#define WINVER 0x0700       // Change this to the appropriate value to target other versions of Windows.
#endif

#ifndef _WIN32_WINNT        // Allow use of features specific to Windows 7 or later.
#define _WIN32_WINNT 0x0700 // Change this to the appropriate value to target other versions of Windows.
#endif

#define WIN32_LEAN_AND_MEAN     // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>

// C RunTime Header Files
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#include <math.h>

#include <d2d1.h>
#include <d2d1helper.h>
#include <dwrite.h>
#include <wincodec.h>

__inline void SafeRelease(void *ppInterfaceToRelease)
{
	IUnknown **pIUnk = (IUnknown **)ppInterfaceToRelease;
	if (*pIUnk != NULL)
	{
		(*pIUnk)->lpVtbl->Release(*pIUnk);

		(*pIUnk) = NULL;
	}
}

#ifndef Assert
#if defined( DEBUG ) || defined( _DEBUG )
#define Assert(b) if (!(b)) {OutputDebugStringA("Assert: " #b "\n");}
#else
#define Assert(b)
#endif //DEBUG || _DEBUG
#endif

#ifndef HINST_THISCOMPONENT
EXTERN_C IMAGE_DOS_HEADER __ImageBase;
#define HINST_THISCOMPONENT ((HINSTANCE)&__ImageBase)
#endif

HRESULT Initialize(void);
void RunMessageLoop(void);
HRESULT CreateDeviceIndependentResources(void);
HRESULT CreateDeviceResources(void);
void DiscardDeviceResources(void);
HRESULT OnRender(const PAINTSTRUCT *ps);
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

extern HWND                  m_hwnd;
extern ID2D1Factory         *m_pD2DFactory;
extern ID2D1DCRenderTarget  *m_pDCRT;
extern ID2D1SolidColorBrush *m_pBlackBrush;