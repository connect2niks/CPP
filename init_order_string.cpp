#include<iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class String
{
	char *str_;     // if we swap the sequence of these data members it showing segmentation fault
			// because in Ctor list len_ will be initialize fisrt and str_ is not initalized yet 
	size_t len_;
		
	public:

	String(char *s): str_(strdup(s)), len_(strlen(str_))
	{
		cout << "Ctor: ";
		print();
	}

	~String()
	{
		cout << "Dtor: ";
		print();
		free(str_);
	}

	void print()
	{
		cout << "(" << str_ << ": " << len_  << ")" << endl;
	}

	size_t len()
	{
		return len_;
	}
};

int main()
{
	String s = "Niks";
	s.print();

	return 0;
}

