#ifndef CONFIG_H
#define CONFIG_H

#include <time.h>

#ifdef _WIN32
	#include <windows.h>
#elif _WIN64
	#include <windows.h>
#elif __linux__
#endif

#define NO_OF_ITERATIONS 10
#define CONFIG_VAL 3
#define MAX_PATH_SIZE 1024
#define MAX_FILE_NAME_SIZE 128

#endif