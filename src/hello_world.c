#include <stdio.h>
#include <string.h>
#include <direct.h>

#include "globals.h"
#include "lib.h"
#include "log.h"
#include "hello.h"
#include "foo.h"
#include "boo.h"

char log_file_path[MAX_PATH_SIZE] = "\0";
struct timespec start_time;

int get_log_file_path()
{
	if(getcwd(log_file_path, MAX_PATH_SIZE) != NULL)
	{
		printf("CWD path = %s\n", log_file_path);
		strcat(log_file_path, "\\log\\log.txt");
		printf("Log file path = %s\n", log_file_path);
		return 0;
	}
	else
	{
		printf("Failed to get CWD...\n");
		return -1;
	}
}

void init()
{
	clock_gettime(CLOCK_MONOTONIC, &start_time);
	get_log_file_path();
	create_empty_log_file();	
	//Sleep(10);
}

int main()
{
	init(); //Necessary intialization function
	log_info("main.c","Immidiately after init. This is for testing.");
	printf("Hello World\n");
	log_info("main.c","Hello World.");
	printf("My name is Akshay.\n");
	printf("My name is Darshan.\n");
	printf("We both are working on this Project.\n");
	
	
	hello();
	foo();
	boo();
	
	//char *data = "\0";
	//sprintf(data,"From hello_world.c - main, config value = %d\n ", CONFIG_VAL); //TODO: Make log_prints similer to sprintf later
	//log_info("main.c", data);
	
	int time = print_time_stamp();
	printf("Time-stamp from main is = %d", time);
    return 0;
}
