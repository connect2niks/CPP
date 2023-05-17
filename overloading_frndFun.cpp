#include <iostream>
using namespace std;
class complex
{
	double re, im;
	public:
	explicit complex(double r = 0, double  i = 0) : re(r), im(i)  {}   // no explicit conversion is allowed
	void disp()
	{
		cout << re << "+j" << im << endl;
	}

	friend complex operator +(const complex &a, const complex &b)
	{
		return complex(a.re + b.re, a.im + b.im);
	}  // overload 1

	friend complex operator +(const complex &a, double d)
	{
		complex b(d);  // create temp. obj.
		return a+b;
	} // overload 2

	friend complex operator +(double d, const complex &b)
	{
		complex a(d);
		return a+b;
	}
};

int main()
{
	complex d1(2.5, 3.2), d2(1.6, 3.3), d3;
	d3 = d1 + d2;  d3.disp();
	d3 = d1 + 6.2; d3.disp();
	d3 = 4.2 + d2; d3.disp();

	return 0;

}
