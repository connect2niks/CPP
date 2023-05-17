#include <iostream>
using namespace std;

class myclass
{
	int data;

	public:

	myclass(int d): data(d)  {}

	myclass &operator++()
	{
		++data;
		return *this;
	}

	myclass operator++(int)
	{
		myclass t(data);
		++data;
		return t;
	}

	void display()
	{
		cout << "Data = " << data << endl;
	}
};

int main()
{
	myclass obj1(8);
	obj1.display();

	myclass obj2 = obj1++;
	obj2.display();
	obj1.display();
	
	obj2 = ++obj1;
	obj2.display();
	obj1.display();

	return 0;

}
