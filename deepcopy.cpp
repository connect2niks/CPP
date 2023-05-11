#include <iostream>
using namespace std;

class A
{
	int i_;    // non pointer daa member
	int *p_;     // pointer data member

	public:

	A(int i, int j) : i_(i), p_(new int(j))  {}   // init with pointer to dynamically created object
	A(const A &a) : i_(a.i_), p_(new int (*a.p_))  {}   // copy constructor
							    // allocation done and value copied - deep copy
	~A()
	{
		cout << "Destruct " << this << ": ";   // object identify
		cout << "i_ = " << i_ << " p_ = " << p_ << "*p_ = "<< *p_ << endl;  // object state
		delete p_;   // release object
	}
};

int main()
{
	A a1(2, 3);
	A a2(a1);

	cout << "&a1 = "  << &a1 << "&a2 = " << &a2 << endl;
}
