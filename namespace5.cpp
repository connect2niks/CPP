#include <iostream>
using namespace std;

namespace open
{
	int x= 30;
}

namespace open
{
	int y = 40;
}

int main()
{
	using namespace open;

	x=y=78;
	cout << x << ", " << y << endl;
}

