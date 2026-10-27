#include <stdio.h>
#include <string.h>

#include "config.h"
#include "lib.h"
#include "log.h"
#include "hello.h"
#include "foo.h"
#include "boo.h"

//Global variables
char log_file_path[MAX_PATH_SIZE];
char full_file_name[MAX_PATH_SIZE];
char file_name[MAX_FILE_NAME_SIZE];
double start_time_s;
double start_time_ns;

void init()
{
	get_time(&start_time_s, &start_time_ns);
	get_log_file_path(log_file_path);
	create_log_file(log_file_path);
	//Sleep(10);
}

int main()
{
	init(); //Necessary intialization function
	log_info(log_file_path, get_time_stamp(start_time_s,start_time_ns),"main.c","Immidiately after init. This is for testing.");
	printf("Hello World\n");
	log_info(log_file_path, get_time_stamp(start_time_s,start_time_ns),"main.c","Hello World.");
	printf("My name is Akshay.\n");
	printf("My name is Darshan.\n");
	printf("We both are working on this Project.\n");
	
	
	hello();
	foo();
	boo();
	
	//char *data = "\0";
	//sprintf(data,"From hello_world.c - main, config value = %d\n ", CONFIG_VAL); //TODO: Make log_prints similer to sprintf later
	//log_info("main.c", data);
	
	int time = get_time_stamp(start_time_s,start_time_ns);
	printf("Time-stamp from main is = %d", time);
    return 0;
}
