#include <iostream>
using namespace std;

class A
{
	int i_;
	int *p_;

	public:

	A(int i, int j) : i_(i), p_(new int(j))  {}
	~A()
	{
		cout << "Destruct " << this << ": ";
		cout << "i_ = " << i_ << " p_ = " << p_ << "*p_ = "<< *p_ << endl;
		delete p_;
	}
};

int main()
{
	A a1(2, 3);
	A a2(a1);

	cout << "&a1 = "  << &a1 << "&a2 = " << &a2 << endl;
}
