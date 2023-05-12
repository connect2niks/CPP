#include <iostream>
using namespace std;
class myclass
{
	int data;
	public:
	myclass(int i) : data(i) {}

	friend void display(const myclass &a);			 
};

void display(const myclass &a)
{
	cout<< "Data = " << a.data;
}

int main()
{

	myclass obj(10);
	display(obj);
	return 0;
}
