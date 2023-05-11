#include <iostream>
#include <cmath>
using namespace std;

class complex
{
	double re_, im_;

	public:

	complex(double re, double  im) : re_(re), im_(im)
	{
		cout << "Ctor: ";
	       	print(); 
	}   // Ctor

/*
	complex(const complex &c) : re_(c.re_), im_(c.im_)
	{
		cout << "copy Ctor: ";
		print();
	}   // comment this copy constructor for free constructor
*/
	~complex()
	{
		cout << "Dtor: ";
		print();		
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

void display(complex c_param)
{
	cout << "Display: ";
	c_param.print();
}

int main()
{
	complex c(4.2, 5.3);
	display(c);
	return 0;
}



