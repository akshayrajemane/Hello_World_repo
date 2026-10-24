#include<stdio.h>
#include "my_lib.h"
#include "hello.h"
#include "foo.h"
#include "boo.h"

int main()
{
	printf("Hello World\n");
	printf("My name is Akshay.\n");
	printf("My name is Darshan.\n");
	printf("We both are working on this Project.\n");
	
	hello();
	foo();
	boo();
	
	my_print();
	
    return 0;
}
