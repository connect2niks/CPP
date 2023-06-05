#include <iostream>
using namespace std;

class B
{
	protected:
		int data;
	public:
		B(int d =0) : data(d) {}
		friend ostream& operator<<(ostream& os, const B &b)
		{
			os << "B object: ";
		       	os << b.data << endl;
			return os;
		}
};

class D:public B
{
	int info;
	
	public:
	D(int d,int i): B(d), info(i)  {}
	friend  ostream& operator << (ostream& os, const D &d)
	{
		os << "D object: ";
	       	os << d.data << ", " << d.info << endl;
	       return os;	
	}	
};

int main()
{
	B b(0);
	D d(1, 2);
	return 0;
}
