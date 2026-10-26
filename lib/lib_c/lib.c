#include "lib.h"

int print_time_stamp()
{
	struct timespec end_time;
	double time_stamp = 0;
	
	clock_gettime(CLOCK_MONOTONIC, &end_time);
	
	time_stamp = (double)(end_time.tv_sec - start_time.tv_sec);
	time_stamp *= 1e9;
	
	time_stamp = time_stamp + (double)(end_time.tv_nsec - start_time.tv_nsec);
		
	return((int)time_stamp);
}