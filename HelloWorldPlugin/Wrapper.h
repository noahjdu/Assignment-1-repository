#pragma once

#include "LibSettings.h"
#include "Greeter.h"

#ifdef __cplusplus
extern "C"
{
#endif

	LIB_API int Add(int first, int second);
	LIB_API char* SayHello();
	LIB_API void SetGreeting(char* greeting);

#ifdef __cplusplus
}
#endif