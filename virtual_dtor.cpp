#include <iostream>
using namespace std;

class B

{
	int data;
	public:
	B(int d) : data(d)
	{
		cout << "B()" << endl;
	}
	~B()
	{
		cout << "~B()" << endl;
	}
	virtual void print()
	{
		cout << data;
	}
};

class D: public B
{
	int *ptr;
	public:
	D(int d1, int d2) : B(d1), ptr(new int (d2))
	{
		cout << "D()" << endl;
	}

	~D()
	{
		cout << "~D()" << endl;
		delete ptr;
	}

	void print()
	{
		B::print();
		cout << " " << *ptr;
	}
};

int main()
{
	B *p = new B(2);
	B *q = new  D(3, 5);

	p -> print();
	cout << endl;

	q -> print();
	cout << endl;

	delete p;
	delete q;
	return 0;

}
