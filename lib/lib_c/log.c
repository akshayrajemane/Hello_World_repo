#include "log.h"

char file_name[MAX_FILE_NAME_SIZE] = "\0";

int create_empty_log_file()
{
	FILE* fp;
	const char *data = "**********This is the start of log file**********";
	
	fp = fopen(log_file_path, "w");
	if(fp == NULL)
	{
		printf("Error: Log file is not created.\n");
		return -1;
	}
	else
	{
		printf("Log file is created successfully.\n");
		fputs(data, fp);
		fputs("\n", fp);
		//fwrite(data, sizeof(char), strlen(data), fp);
		//fwrite("\n" ,1 ,1, fp);
		fclose(fp);
		return 0;
	}
}

int logger(char *data)
{
	FILE* fp;
	
	fp = fopen(log_file_path, "a");
	if(fp == NULL)
	{
		printf("Error: Log file is not opening...\n");
		return -1;
	}
	else
	{
		fputs(data, fp);
		fputs("\n", fp);
		fclose(fp);
		return 0;
	}	
}

void log_info(char *f_name, char *msg)
{
	int msg_size = strlen(msg);
	msg_size = msg_size + 128; //adding 128 bytes exter for time_stamp + INFO + file_name
	char data[msg_size];
	
	//Implement LOG_INFO level(info,warning,error,debug) check before printing message.
	sprintf(data,"[%d] [INFO] [%s] [%s] \n", print_time_stamp(), f_name, msg);
	logger(data);
}

void log_warning(char *f_name, char *msg)
{
	int msg_size = strlen(msg);
	msg_size = msg_size + 128; //adding 128 bytes exter for time_stamp + WARNING + file_name
	char data[msg_size];
	
	//Implement LOG_INFO level(info,warning,error,debug) check before printing message.
	sprintf(data,"[%d] [INFO] [%s] [%s] \n", print_time_stamp(), f_name, msg);
	logger(data);
}

void log_error(char *f_name, char *msg)
{
	int msg_size = strlen(msg);
	msg_size = msg_size + 128; //adding 128 bytes exter for time_stamp + ERROR + file_name
	char data[msg_size];
	
	//Implement LOG_INFO level(info,warning,error,debug) check before printing message.
	sprintf(data,"[%d] [INFO] [%s] [%s] \n", print_time_stamp(), f_name, msg);
	logger(data);
}

void log_debug(char *f_name, char *msg)
{
	int msg_size = strlen(msg);
	msg_size = msg_size + 128; //adding 128 bytes exter for time_stamp + DEBUG + file_name
	char data[msg_size];
	
	//Implement LOG_INFO level(info,warning,error,debug) check before printing message.
	sprintf(data,"[%d] [INFO] [%s] [%s] \n", print_time_stamp(), f_name, msg);
	logger(data);
}

