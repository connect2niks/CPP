#include <iostream>
using namespace std;
class B
{
	public:
		void f()
		{
			cout << "B:f()"<<endl;
		}
};

class D:public B

{
	void f()
	{
		cout << "D:f()" << endl;
	}
};

int main()
{
	B b;
	D d;

	B *p;

	p = &b;

	p->f();  // B:f()
	
	p = &d;

	p->f();  // B:f()
	
	return 0;
}
