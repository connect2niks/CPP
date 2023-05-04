#include <iostream>
#include <cmath>
using namespace std;

class complex
{
	double re_, im_;
	 
	public:

		// Constructor

		complex(double re, double im) : re_(re), im_(im)
	{
		cout << "complex Ctor: ";
		print();
	}

		//Copy Constructor

		complex(const complex &c): re_(c.re_), im_(c.im_)
	{
		cout << "complex copy Ctor: ";
		print();
	}

		// Destructor

		~complex()
		{
			cout << "complex Dtor: ";
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

int main()
{
	complex c1(4.2, 5.3), c2(c1), c3 = c2;

	c1.print();
	c2.print();
	c3.print();

	return 0;
}
