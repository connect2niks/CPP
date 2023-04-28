#include <iostream>
using namespace std;

enum E 
{
	c0 = 0, c1 = 1, c2 = 2
};


E operator+(const E &a, const E &b)
{
	unsigned int c = a, d = b;
	unsigned int t  = (c + d)%3;
	return (E)t;
}

int main()
{
	E a = c1, b = c2;
	int x = -1;

	x = a+b;
	cout << x << endl;
	return 0;
}
