#include <iostream>
using namespace std;

namespace mynamespace
{
	int mydata;   // variable in namespace
	void myfun()  
	{
		cout << "mynamespace myfunction " << endl;
	}     // function in namespace
	class myclass
	
	{
		int data; 
		public:
		myclass(int d) : data(d)  {}
		void display()
		{
			cout << "myclass = " << data << endl;
		}
	};   // class in namespace
}

int main()

{
	mynamespace :: mydata = 10;    // variable name qualified by namespace name

	cout << "mynamespace::mydata = " << mynamespace::mydata << endl;

	mynamespace:: myfun();  // function name qualified by namespace name

	mynamespace:: myclass obj(25);  // class name qualified by namespace name

	obj.display();
	return 0;
}
