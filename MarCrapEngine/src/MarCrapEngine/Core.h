#pragma once

// Preprocessor directives to export dll file when in MCE or import dll file when in Sandbox
#ifdef MCE_PLATFORM_WINDOWS
	#ifdef MCE_BUILD_DLL
		#define MCE_API __declspec(dllexport)
	#else
		#define MCE_API __declspec(dllimport)
	#endif
#else
	#error Use Windows you dickhead.
#endif