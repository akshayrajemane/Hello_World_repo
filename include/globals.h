#ifndef GLOBALS
#define GLOBALS

#include <time.h>

#ifdef _WIN32
	#include <windows.h>
#elif _WIN64
	#include <windows.h>
#elif __linux__
#endif


#include "config.h"
#include "lib.h"

extern char log_file_path[MAX_PATH_SIZE];
extern char full_file_name[MAX_PATH_SIZE];
extern char file_name[MAX_FILE_NAME_SIZE];

extern double start_time_s;
extern double start_time_ns;

#endif