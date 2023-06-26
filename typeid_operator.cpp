#include <typeinfo>
#include <iostream>
using namespace std;

// polymorphic Heirarchy
//
class A
{
	public:
		virtual ~A()  {}
};

class B:public A  {};

int main()
{
	A a;
	cout << typeid(a).name() << ": " << typeid(&a).name() << endl;    // static
	A *p = &a;
	cout << typeid(p).name() << ": " << typeid(*p).name() << endl;   // dynamic

	B b;
        cout << typeid(b).name() << ": " << typeid(&b).name() << endl;   // static
        p = &b;
        cout << typeid(p).name() << ": " << typeid(*p).name() << endl;    // dynamic


	A &r1 =a;
	A &r2 = b;
	cout <<  typeid(r1).name() << ": " << typeid(r2).name() << endl;   // dynamic
}

