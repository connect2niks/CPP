#include <iostream>
using namespace std;

namespace name1
{
	int v11 = 1;
	int v12 = 2;
}

namespace name2
{
	int v21 = 3;
	int v22 = 4;
}

using namespace name1;    // All symbols of namespace name1 will be available
using name2::v21;   // only v21 symbol of namespace name2 will be available

int main()
{
	cout << v11 << endl;
	cout << name1::v12 << endl;
	cout << v21 << endl;
	cout << name2::v21 << endl;
//	cout << v22 << endl;
	cout << name2::v22 << endl;
}
