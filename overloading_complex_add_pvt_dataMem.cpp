#include <iostream>
using namespace std;

class complex
{
	double re, im;   // data members
			 //
	public:

	complex(double a = 0.0, double b = 0.0): re(a), im(b)  {}

	~complex()  {}
	
	void display();
	
	double real()
	{
		return re;
	}

	double imag()
	{
		return im;
	}

	double set_re(double r)
	{
		re = r;
	}

	double set_imag(double i)
	{
		im = i;
	}
};

void complex:: display()
{
	cout << re << "+j" << im << endl;
}

complex operator +(complex &t1, complex &t2)
{
	complex sum;
	sum.set_re(t1.real() + t2.real());
	sum.set_imag(t1.imag() + t2.imag());
	return sum;
}

int main()
{
	complex c1(4.5, 25.25), c2(8.3, 10.25), c3;
	cout << "1st complex no.: ";
	c1.display();
	cout << "2nd complex no. : ";
	c2.display();

	c3 = c1 + c2;    // overload operator +

	cout << "sum: ";
	c3.display();

	return 0;
}
