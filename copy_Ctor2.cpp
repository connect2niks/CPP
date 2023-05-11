#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class String
{
	public:
		char *str_;
		size_t len_;

		String(char *s) : str_(strdup(s)), len_(strlen(str_)) {}  // Ctor

	//	String(const String &s) : str_(strdup(s.str_)), len_(s.len_)  {}  // CCtor
										  // comment it for free

		~String()
		{
			free(str_);
		}

		void print()
		{
			cout << "(" << str_ << ": " << len_ << ")" << endl;
		}
};

void strtoupr(String a)
{
	for(int i = 0; i<a.len_; ++i)
	{
		a.str_[i] = toupper(a.str_[i]);
	}
	cout << "strToUpper: ";
	a.print();
}

int main()
{
	String s = "NIKS";
	s.print();
	strtoupr(s);
	s.print();

	return 0;
}
