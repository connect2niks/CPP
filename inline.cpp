#include <iostream>
using namespace std;
inline int square(int x) {return x*x;}
int main()
{
	int a=3, b;
	b= square(a);
	cout << "Square : " << b << endl;
	return 0;
}
