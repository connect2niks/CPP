#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int *p = (int *)operator new(sizeof(int));

	*p = 10;

	cout << *p << endl;

	operator delete(p);

}
