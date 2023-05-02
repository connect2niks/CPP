#include <iostream>
using namespace std;

class x
{
	public:
		int m1;
		int m2;

		void f(int k1, int k2)
		{
			m1 = k1;   //implicit access without this pointer
			this->m2 = k2;  //explicit access with this pointer
			cout << "ID = " << this << endl; 
		}
};

int main()
{
	x a;
	a.f(2, 3);
	cout << "Addr = " << &a << endl;
	cout << "a.m1 = " << a.m1 << "  a.m2 = " << a.m2 << endl;

	return 0;

}
