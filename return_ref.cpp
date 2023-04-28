#include <iostream>
using namespace std;

int &func(int &x)
{
	cout << " x = " << x << " &x = " << &x << endl;
	return x;
}

int main ()
{
	int a = 10;
        cout << " a = " << a << " &a = " << &a << endl;
	int &b = func (a);
        cout << " b = " << b << " &b = " << &b << endl;

	return 0;

}
