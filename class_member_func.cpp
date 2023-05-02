#include <iostream>
#include <cmath>
using namespace std;

class complex
{
	public:
		double re,im;

		double norm()
		{
			return sqrt(re*re + im*im);
		}

		void print()
		{
			cout << "|"<<re<<"+j"<<im<<"| = "<<norm()<<endl;
		}
};

int main()
{
	complex c = {4.2, 5.3};
	c.print();
	return 0;
}

