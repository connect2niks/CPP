#include <iostream>
using namespace std;

class B
{
	protected: int data;
	public:
		   B(int d = 0) : data(d)
	{
		cout << "B::B(int): " << data << endl;
	}
		   ~B()
		   {
			   cout << "B::~B(): " << data << endl;
		   }
};

class D: public B
{
	int info;
	public:
	D(int d, int i) : B(d), info(i)
	{
		cout << "D::D(int, int): " << data << ", " << info << endl;
	}
	D(int i): info(i)
	{
		cout << "D::D(int): " << data << ", " << info << endl; 
	}
	~D()
	{
		cout << "D::~D(int): " << data << ", " << info << endl;
	}
};

int main()
{
	B b;
	D d1(1, 2);
	D d2(3);
}
