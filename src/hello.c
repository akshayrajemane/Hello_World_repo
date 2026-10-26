#include "hello.h"

int hello()
{
	printf("Hello.\n");
	printf("Darshan!!!\n");
	printf("Hello.\n");
	printf("Akshay!!!.\n");

	for(int i=0; i<NO_OF_ITERATIONS; i++)
	{
		printf("From hello.c for loop iteration no %d. \n", i);		
	}
	
	return 0;	
}
