#include <iostream>
using namespace std;

int d = 0;

namespace name1
{
	int d = 1;
}

int main()

{
	using name1::d;

	cout << d << endl;
	cout << name1::d << endl;
	cout <<::d << endl;
}
