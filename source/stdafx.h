/*
AutoHotkey

Copyright 2003-2009 Chris Mallett (support@autohotkey.com)

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
*/

// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__35DF5079_0252_4D5A_98BD_71AEE0407B97__INCLUDED_)
#define AFX_STDAFX_H__35DF5079_0252_4D5A_98BD_71AEE0407B97__INCLUDED_

#pragma once

// Insert your headers here
#define _CRT_SECURE_NO_DEPRECATE // Avoid compiler warnings in VC++ 8.x/2005 that urge the use of lower-performing C library functions that protect against buffer overruns.
#define _CRT_NON_CONFORMING_SWPRINTFS // We don't want ISO version of swprintf, which has similar interface with snwprintf (different from sprintf)
#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers
#define _WIN32_WINNT 0x0501
#define _WIN32_IE 0x0501  // Added for v1.0.35 to have MCS_NOTODAY resolve as expected, and possibly solve other problems on newer systems.
#ifdef _MSC_VER
	#include "config.h" // compile-time configrations
	#include "debug.h"

	// C RunTime Header Files
	#include <stdio.h>
	#include <stdlib.h>
	#include <stdarg.h> // used by snprintfcat()
	#include <limits.h> // for UINT_MAX, UCHAR_MAX, etc.
	#include <malloc.h> // For _alloca()
	//#include <memory.h>

	#include <windows.h>
	#include <tchar.h>
	#include <commctrl.h> // for status bar functions. Must be included after <windows.h>.
	#include <shellapi.h>  // for ShellExecute()
	#include <shlobj.h>  // for SHGetMalloc()
	#include <mmsystem.h> // for mciSendString() and waveOutSetVolume()
	#include <commdlg.h> // for OPENFILENAME

	// ATL alternatives
	#include "KuString.h"
	#include "StringConv.h"

	// It's probably best not to do these, because I think they would then be included
	// for everything, even modules that don't need it, which might result in undesired
	// dependencies sneaking in, or subtle naming conflicts:
	// ...
	//#include "defines.h"
	//#include "application.h"
	//#include "globaldata.h"
	//#include "window.h"  // Not to be confused with "windows.h"
	//#include "util.h"
	//#include "SimpleHeap.h"
#endif
// Lexikos: Defining _WIN32_WINNT 0x0600 seems to break TrayTip in non-English Windows, and possibly other things.
//			Instead, define only the necessary constants for horizontal wheel support in Windows Vista and later.
#if (_WIN32_WINNT < 0x0600)
#define WM_MOUSEHWHEEL      0x020E
#define MOUSEEVENTF_HWHEEL  0x01000 /* hwheel button rolled */
#endif

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__35DF5079_0252_4D5A_98BD_71AEE0407B97__INCLUDED_)
