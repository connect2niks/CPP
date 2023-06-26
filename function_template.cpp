#include <iostream>
using namespace std;

template<class T>
T Max(T x, T y)
{
	return x > y ? x : y;
}

int main()
{
	int a = 3, b = 5, iMax;
	double c = 2.1, d = 5.3, dMax;

	iMax = Max<int>(a, b);
	cout << "Max(" << a << ", " << b << ") = " << iMax << endl;

	dMax = Max<double>(c,d);
	cout << "Max(" << c << ", " << d << ") = " << dMax << endl;
		
}
