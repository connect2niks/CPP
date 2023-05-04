#include <iostream>
#include <cmath>
using namespace std;

class complex
{
	private:
		double re_, im_;
	public:
		complex(double re = 0.0, double im = 0.0) : re_(re), im_(im)
	{
		cout << "ctor (" << re_ << ", " << im_ << ")" << endl;
	}   // Ctor

		~complex()
		{
			cout << "Dtor (" << re_ << ", " << im_ << ")" << endl;
		}  // Dtor

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
	unsigned char buf[100];   // Buffer for placement of object
	complex *pc = new complex(4.2, 5.3);  // new: allocate memory, calls Ctor
	complex *pd = new complex[2];  // new[]: allocate memory
				       // calls default Ctor twice

	complex *pe = new (buf) complex(2.6, 3.9); // placement new: only calls Ctor
						   // no alloc. of memory, uses buf

	// use objects
	pc-> print();
	pd[0].print();
	pd[1].print();
	pe -> print();
	// release of object can be done in any order

	delete pc;  // delete: calls Dtor, release memory
	delete [] pd;   // delete []: calls 2 Dtor, release memory
	pe -> ~complex();  // no delete: explicit call to Dtor. use with extreme care

	return 0;
}
