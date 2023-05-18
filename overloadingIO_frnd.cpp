#include <iostream>
using namespace std;

class complex

{
	double re, im;
	public:

	complex(double r=0, double i=0) : re(r), im(i)  {}

	friend ostream& operator<<(ostream& os,  const complex &a);
	friend istream& operator>>(istream& is, complex &a);
	
};
ostream& operator<<(ostream& os, const complex &a)
{
	os << a.re << "+j" << a.im << endl;
	return os;
}

istream& operator>>(istream& is, complex &a)
{
	is >> a.re >> a.im;
	return is;
}

int main()

{
	complex d;

	cin >> d;

	cout << d;
}
