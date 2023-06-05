#include <iostream>
using namespace std;

class B

{
	public:
		B()
		{
			cout << "B ";
		}

		~B()
		{
			cout << "~B " << endl;
		}
};

class C
{
	public:
		C()
		{
			cout << "C ";
		}

		~C()
		{
			cout << "~C ";
		}
};

class D:public B
{
	C data;  // Embedded object
	
	public:
	D()
	
	{
		cout <<"D "<<endl;
	}

	~D()
	
	{
		cout << "~D ";
	}
};

int main()
{
	D d;
}

