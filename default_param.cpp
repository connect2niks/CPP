#include <iostream>
using namespace std;

int func(int a = 10)
{
	return a;
}

int main ()
{
	int x = 5, y;

	y = func(x);
	cout << " y = " << y << endl;

	y = func();
	cout << " y = " << y << endl;

	return 0;
}
