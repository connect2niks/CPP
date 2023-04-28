#include <iostream>
using namespace std;

int main(){

	int a=10, &b=a;   // alias or referece
	
	// a and b have the same memory location
       cout<<"a = " << a << " b = " << b << " &a = " << &a << " &b = " << &b << endl;

       ++a; // changing seperate a changes b also
       cout << "a = " << a << " b = " << b << endl;

       ++b;  // changing b seperate  also changes a
       cout << "a = " << a << " b = " << b << endl;
}
