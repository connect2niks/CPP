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
	
	complex operator +(complex &c)
{
        complex r;
        r.re = re + c.re;
	r.im = im + c.im;
	return r;
}

};

void complex:: display()
{
	cout << re << "+j" << im << endl;
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
