#include <iostream>
using namespace std;

class stack
{
	char *data_;
	int top_;

	public :
	stack():data_(new char[10]), top_(-1)
	{
		cout << "stack() called \n";
	}

	~stack()
	{
		cout << "\n~stack() called\n";
	}
};

int main()
{
	char str[10] = "ABCDE";
	stack s;  //init be stack::stack() call
		  //reverse string using stack
		  //
		  //de-init by automatically stack::~stack() call
	return 0;
}
