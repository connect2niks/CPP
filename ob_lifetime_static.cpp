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
		cout << "ctor: (" << re_ << ", " << im_ << ") " << endl;
	}

		~complex()
		{
			cout << "dtor: (" << re_ << ", " << im_ << ") " << endl;
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

complex c(4.2, 5.3);    // static (global) object c
			// constructed before main starts and destructed after main ends

int main()
{
	cout << "main() start" << endl;
	complex d(2.4); // ctor for d

	c.print();  // use static object
	d.print();   // use local object

	return 0;
}  // Dtor for d
   // Dtor for c
