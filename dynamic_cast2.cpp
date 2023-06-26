#include <iostream>
using namespace std;
 class A
{
	public:
		virtual ~A()  {}
};
class B:public A  {};

class C 

{
	public:
		virtual ~C()  {}
};

int main()
{
	A a;
	B b;
	C c;

	try
	{
		B &rB1 = b;
		A &rA2 = dynamic_cast<A&>(rB1);
		cout << "Up-cast: Valid " << endl;

		A &rA3 = b;
		B &rB4 = dynamic_cast<B&>(rA3);
		cout << "Down-cast: Valid " << endl;

		try
		{
			A &rA5 = a;
			B &rB6 = dynamic_cast<B&>(rA5);
		}
		catch (bad_cast e)
		{
			cout << "Down-cast: Invalid: " << e.what() << endl;
		}

		try
		{
			A &rA7 = (A&)c;
			C &rC8 = dynamic_cast<C&>(rA7);
		}
		catch(bad_cast e)
		{
			cout << "unrelated-cast: Invalid: " << e.what() << endl;
		}
	}
		catch(bad_cast e)
		{
			cout << "Bad-cast: "<<e.what() << endl;
		}
}
