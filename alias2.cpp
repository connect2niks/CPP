#include  <iostream>
using namespace std;

int main ()
{
	int i =2;
	int &j = i;
	const int &k = 5;
	const int &l = j+k;

	cout << i << ", " << &i << endl;
	cout << j << ", " << &j << endl;
        cout << k << ", " << &k << endl;
        cout << l << ", " << &l << endl;

}
