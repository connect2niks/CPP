#include "data.h"

Data* call_create(int d)

{
	return new Data(d);
}

int call_get(Data* data)
{
	return data->get();
}

void call_set(Data* data, int d)

{
	return data->set(d);
}

void call_release(Data* data)

{
	delete data;
}

