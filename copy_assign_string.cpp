#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class String
{
	public:
		char *str_;
		size_t len_;

		String (char *s) : str_(strdup(s)), len_(strlen(str_))  {}  // Ctor

		String(const String &s) : str_(strdup(s.str_)), len_(s.len_)  {}  // CCtor 

		~String()
		{
			free(str_);
		}  // Dtor

		String &operator = (const String &s) {
			free(str_);   // Release existing memory
			str_ = strdup(s.str_);   // perform deep copy
			len_ = s.len_;    // copy data member of built-in type
			return *this;    // return object for chain assignment
		}

		void print()
		{
			cout << "(" << str_ << ": " << len_ << ")" << endl;
		}
};

int main()
{
	String s1 = "football", s2 = "cricket";
	s1.print();
	s2.print();
	s2 = s1;
	s2.print();

	return 0;
}


