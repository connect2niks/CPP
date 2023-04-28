#include <iostream>
using namespace std;

void func1(int &, int);

int main ()
{
	int a=20;
	cout << " a = " << a << ", " << " &a " << &a << endl;

	func1(a,a);
}

void func1(int &b, int c)
{
	  cout << " b = " << b << ", " << " &b " << &b << endl;
          cout << " c = " << c << ", " << " &c " << &c << endl;


}
