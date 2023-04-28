#include <iostream>
using namespace std;

int add(int a, int b) {return (a+b);}
double add (double c, double d) {return (c+d);}

int main ()
{
	int x = 5, y = 6, z;
	x = add(x,y);
	cout << "int sum = " << x << endl;

	double m = 3.5, n = 3.1, o;
	o = add(m,n);
	cout << "double sum = " << o << endl;

	return 0;
}

