#include <iostream>
#include <cmath>
using namespace std;


class complex
{
	double re_, im_;
	public:

	complex(double re, double im) : re_(re), im_(im)
	{
		cout << "Ctor: ";
		print();
	}  // Ctor


	complex(const complex &c) : re_(c.re_), im_(c.im_)
	{
		cout << "copy Ctor: ";
		print();
	}  // CCtor

	~complex()
	{
		cout <<"Dtor: ";
		print();
	} // Dtor

	complex &operator = (const complex &c)
	{
		re_ = c.re_;
		im_ = c.im_;
		cout << "copy: ";
		print();
		return *this;
	}

	double norm()
	{
		return sqrt(re_*re_ + im_*im_);
	}

	void print()
	{
		cout << "|" << re_ << "+j" << im_ << "| = " << norm() << endl;
	}
};

int main()
{
	complex c1(4.2, 5.3), c2(7.9, 8.5);
	complex c3(c2);
	c1.print();
	c2.print();
	c3.print();
	c2 = c1;
	c2.print();

	c1 = c2 = c3;
	c1.print();
	c2.print();
	c3.print();

	return 0;
}
