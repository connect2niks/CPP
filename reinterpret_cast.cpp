#include <iostream>
using namespace std;

class A  {}  ;
class B {};

int main()
{
	long i = 2;
	double d= 3.7;
	double *pd = &d;

//	i = pd;    // error
	i = reinterpret_cast<long>(pd);
	i = (long)pd;

	cout << "pd" << " " << i << endl;

	A *pA;
	B *pB;

//	pA = pB;   // error
	pA = reinterpret_cast<A*>(pB);
	pA = (A*)pB;
}	
