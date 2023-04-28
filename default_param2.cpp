#include <iostream>
using namespace std;

int add (int a = 10, int b = 20)
{
	return (a+b);
}

int main ()

{
	int x = 5, y = 6, z;

	z = add(x,y);
	cout << "sum = " << z << endl;
        z = add(x);
        cout << "sum = " << z << endl;

        z = add();
        cout << "sum = " << z << endl;

	return 0;

}
