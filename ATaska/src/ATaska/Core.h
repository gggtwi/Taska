#pragma once

#ifdef AT_PLATFORM_WINDOWS
	#ifdef AT_BUILD_DLL
		#define ATASKA_API __declspec(dllexport)
	#else
		#define ATASKA_API __declspec(dllimport)
	#endif
#else
	#error "Only Windows platform is supported!"
#endif