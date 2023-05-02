#include <iostream>
#include <cmath>
using namespace std;

class complex
{
	private: 
		double re_, im_;
	public:
		complex(double re = 0.0, double im = 0.0)   // constructor with default parameters
	:	re_(re), im_(im)   {}

		double norm()
		{
			return sqrt(re_*re_ + im_*im_);
		}

		void print()
		{
			cout << "|" << re_ << "+j" << im_ << "| = " <<norm() << endl;
		}

};

int main()
{
	complex c1(4.2, 5.3), c2(4.2), c3;

	c1.print();
	c2.print();
	c3.print();

	return 0;
}
