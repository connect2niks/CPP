#define NDEBUG
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

// when run yeild 'i' os 0


int main()
{
	int i = 0;
	assert(++i == 0);   // Assert 0 here    
	
	printf("i is %d \n",i);

	return 0;
}

void _assert(int test, char const *test_image, char const * file, int line)
{
	if (!test)
	{
		printf("Assertion failed: %s, file %s, line %d \n",test_image,file,line);
		abort();
	}
}
