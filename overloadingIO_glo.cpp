#include <iostream>
using namespace std;
class complex
{
	public : double re, im;
		 complex(double r = 0, double i = 0): re(r), im(i) {}
};

ostream& operator<<(ostream& os, const complex &a)
{
	os << a.re << "+j" << a.im << endl;
	return os;
}

istream& operator>>(istream& is, complex &a)
{
	is >> a.re >> a.im;
}

int main()
{
	complex d;

	cin >> d;

	cout << d;
}

