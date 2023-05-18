#include <iostream>
using namespace std;

int d = 0;

namespace name1
{
	int d = 1;

	namespace name2
	{
		int d = 2;
	}
}


int main()
{
	cout << d << endl;
	cout << name1::d << endl;
	cout << name1::name2::d << endl;
	return 0;
}
