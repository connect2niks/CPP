#include <stdio.h>
#include <stdlib.h>

static void atexit_handler_1(void)
{
	printf("within atexit handler 1 \n");
}

static void atexit_handler_2(void)
{
	printf("within atexit handler 2 \n");

}

int main()
{
	atexit(atexit_handler_1);
	atexit(atexit_handler_2);

	exit(EXIT_SUCCESS);

	printf("This line should never appear  \n");

	return 0;
}	
