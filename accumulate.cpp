#include <iostream>
#include  <list>
#include <numeric>    // accumulate
#include <functional>  // multiplies
using  namespace std;

void f(list<int> &ld)
{
	int product = accumulate(ld.begin(),ld.end(),1,multiplies<int>());

	cout << product << endl;
}

int main()
{
	list<int> l = {1,2,3,4};

	f(l);
}


