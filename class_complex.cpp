#include <iostream>
using namespace std;

class complex
{
	public:
		double re,im;
};

int main()
{
	complex c = {2.3, 5.3};
	cout << c.re << " " << c.im << endl;
	return 0;
}
