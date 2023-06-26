#include <iostream>
using namespace std;

class A 
{
	int i_;
public:
	A(int i) : i_(i)  {}
	int get() const { return i_;}
	void set(int j) { i_ = j;}
};

void print(char *str)   { cout << str;}

int main()

{
	const char *c = "sample text";

	// print(const_cast<char *>(c));
	print((char *)(c));

	const A a(1);

	//const_cast<A&>(a).set(5);
	((A&)a).set(5);

	//const_cast<A>(a).set(5);   // error: 'const_cast' : cannnot convert from 'const A' to 'A'
	//
	((A)a).set(5);
}
