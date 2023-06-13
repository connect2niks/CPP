#include <iostream>
using namespace std;

#include "data.h"

Data d(10);

int main()

{
	Data* p = c_create_object(5);
	c_access_object(p);
	c_release_object(p);
}
