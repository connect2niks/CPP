#include <iostream>
#include <cstdlib>
using namespace std;

namespace myns
{
	int abs(int n)
	{
		if(n < -128)  return 0;
		if(n > 127) return 0;
		if(n < 0) return -n;
		return n;
	}
}

int main()
{
	cout << myns::abs(-203) << " " << myns::abs(-6) << " " << myns::abs(77) << " " << myns::abs(179) << endl;
	cout << abs(-203) << " " << abs(-6) << " " << abs(77) << " " << abs(179) << endl; 
}
