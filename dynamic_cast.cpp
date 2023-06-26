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

	B* pB = &b;
	A* pA = dynamic_cast<A*>(pB);

	cout << pB << "Cast to" << pA << ": Up-cast: Valid" << endl;

	pA = &b;
	pB = dynamic_cast<B*>(pA);
	cout << pA << "cast to" << pB << ": Down-cast: Valid" << endl;
	
	pA = &a;
	pB = dynamic_cast<B*>(pA);
	cout << pA << "cast to" << pB << ": Down-cast: Invalid" << endl;

	pA = (A*)&c;
	C *pC = dynamic_cast<C*>(pA);
	cout << pA<< "Cast to" << pC <<  ": unrelated cast: Invalid" << endl;
	
	pA = 0;
	pC = dynamic_cast<C*>(pA);
	cout << pA << "casts to" << pC << ": unrelated-cast: valid for null" << endl;

	pA = &a;
	void *pV = dynamic_cast<void *>(pA);
	cout << pA << "casts to" << pV << ": cast-to-void: valid" << endl;
}	
