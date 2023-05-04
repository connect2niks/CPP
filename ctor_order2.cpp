#include <iostream>
using namespace std;

int init_m1(int m)
{
	cout << "Init_m1 : " << m << endl;
	return m;
}

int init_m2(int m)
{
	cout << "Init_m2 : " << m << endl;
	return m;
}

class x
{
	int m2_;
	int m1_;
	public:
	x(int m1, int m2) : m1_(init_m1(m1)), m2_(init_m2(m2))
	{
		cout << "Ctor: " << endl;
	}

	~x()
	{
		cout << "Dtor: " << endl;
	}
};

int main()
{
	x a(2, 3);
	return 0;
}
