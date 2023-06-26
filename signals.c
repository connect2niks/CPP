#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void SignalHandler(int signal)
{
	printf("Application Aborting......\n");
}

int main()

{
	typedef void (*SignalHandlerPointer)(int);

	SignalHandlerPointer previousHandler;

	previousHandler = signal(SIGABRT, SignalHandler);

	abort();

	return 0;
}
