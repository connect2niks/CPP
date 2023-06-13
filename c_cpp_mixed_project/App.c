#include <stdio.h>
#include "data.h"

Data* c_create_object(int d)
{
	return call_create(d);
}

void c_access_object(Data* data)

{
	printf("Get data %d\n",call_get(data));
	call_set(data, 7);
	printf("Set data %d\n",call_get(data));
}

void c_release_object(Data* data)

{
	call_release(data);
}
