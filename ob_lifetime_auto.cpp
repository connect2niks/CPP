#include <iostream>
#include <cmath>
using namespace std;

class complex
{
	private :
		double re_, im_;
	public:
		complex(double re = 0.0, double im = 0.0): re_(re), im_(im)
	{
		cout << "ctor: (" << re_ << ", " << im_ << ") " << endl;
	}
		~complex()
		{
			cout << "Dtor: (" << re_ << ", " << im_ << ") " << endl; 
		}

		double norm()
		{
			return sqrt(re_*re_ + im_*im_);
		}

		void print()
		{
			cout << "|" << re_ << "+j" << im_ << "| =" << norm() << endl;
		}
};

int main()
{
	complex c(4.2, 5.3), d(2.4);
	c.print();
	d.print();

	return 0;

}

