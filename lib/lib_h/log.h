#ifndef LOG_H
#define LOG_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "config.h"
#include "globals.h"

typedef enum 
{
	LOG_INFO, //0
	LOG_WARNING, //1
	LOG_ERROR, //2
	LOG_DEBUG //3
} LOG_LEVEL; //4


int create_empty_log_file();
int logger(char *msg);
void log_info(char *f_name, char *msg);
void log_warning(char *f_name, char *msg);
void log_error(char *f_name, char *msg);
void log_debug(char *f_name, char *msg);

#endif
