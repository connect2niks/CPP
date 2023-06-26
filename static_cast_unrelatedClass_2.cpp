#include <iostream>
using namespace std;

class B;

class A
{
	public:
		A(int i =0)
		{
			cout << "A::A(i)\n";
		}
		A(const B&)
		{
			cout << "A::A(B&)\n";
		}
};

class B  {};

int main()

{
	A a;
	B b;
	int i = 5;

	// B ==> A
	
	a = b;
	a = static_cast<A>(b);
	a = (A)b;


	// int ==> A
	
	a=i;
	a = static_cast<A>(i);
	a = (A)i;
}
