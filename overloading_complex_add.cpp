#include <iostream>
using namespace std;
struct complex
{
	double re, im;
};

complex operator +(complex &a, complex &b)
{
	complex r;
	r.re = a.re + b.re;
	r.im = a.im + b.im;
	return r;
}

int main()
{
	complex d, d1, d2;
	d1.re = 10.5;
	d1.im = 12.25;

	d2.re = 20.5;
	d2.im = 30.25;

	d = d1+d2;

	cout << "Real: " << d.re << ", ";
	cout << "Imag: " << d.im << endl;

	return 0;
}
