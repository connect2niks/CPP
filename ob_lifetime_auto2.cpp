#include <iostream>
#include <cmath>
using namespace std;

class complex
{
	private:
		double re_, im_;
	public:
		complex(double re = 0.0, double im = 0.0): re_(re), im_(im)
		{
		cout << "ctor: (" << re_ << ", " << im_ << ")" << endl;
		}

		~complex()
		{
			cout <<  "dtor: (" << re_ << ", " << im_ << ")" << endl;
		}
		void opcomplex(double i)
			{
				re_ += i;
			       im_ += i;	
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
	complex c[3];
	for (int i = 0; i < 3; i++)
	{
		c[i].opcomplex(i);
		c[i].print();
	}

	return 0;
}
