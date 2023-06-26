#include <iostream>
using namespace std;

int main()
{
	int i = 2;
	long j;
	double d= 3.7;
	int *pi = &i;
	double *pd = &d;
	void *pv= 0;

	i=d;   // warning
	i = static_cast<int>(d);
	i =  (int)d;

	d=i;
	d=static_cast<double>(i);
	d=(double)i;

	pv = pi;
	// pi = pv;    // error
	pi = (static_cast<int*>(pv));
	pi = (int*)pv;

//	j = pd;      // error
//	j = static_cast<long>(pd);     // error
	j = (long)pd;

//	i = (int)pd;   // error
}
