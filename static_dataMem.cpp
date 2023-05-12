#include <iostream>
using namespace std;

class myclass
{
	static int x;
	public:

	void get()
	{
		x = 15;
	}
	void print()
	{
		x = x+10;
		cout << "x = " << x << endl;
	}
};

int myclass::x = 0;
int main()
{
	myclass obj1, obj2;
	obj1.get();
	obj2.get();
	obj1.print();
	obj2.print();

	return 0;
}
