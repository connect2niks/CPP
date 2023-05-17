#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;
class mystr
{
	const char *name_;
	public:

	explicit mystr(const char *s) : name_(strdup(s)) {}
	~mystr()
	{
		free ((void *)name_);
	}

	friend bool operator == (const mystr &s1, const mystr &s2)
	{
		return !strcmp(s1.name_, s2.name_);
	}

	friend bool operator == (const mystr &s1, const string &s2)
	{
		return !strcmp(s1.name_, s2.c_str());
	}

	friend bool operator == (const string &s1, const mystr &s2)
	{
		return !strcmp(s1.c_str(), s2.name_);
	}
};

int main()
{
	mystr ms1("red"), ms2("red"), ms3("blue");
	string ss1("red"), ss2("red"), ss3("blue");

	if(ms1 == ms2)
		cout << "Match ";
	else
		cout << "Mismatch ";

        if(ms1 == ms3)
                cout << "Match ";
        else
                cout << "Mismatch ";

	if(ms1 == ss2)
                cout << "Match ";
        else
                cout << "Mismatch ";

        if(ms1 == ss3)
                cout << "Match ";
        else
                cout << "Mismatch ";

        if(ss1 == ms2)
                cout << "Match ";
        else
                cout << "Mismatch ";

        if(ss1 == ms3)
                cout << "Match ";
        else
                cout << "Mismatch ";

        if(ss1 == ss2)
                cout << "Match ";
        else
                cout << "Mismatch ";

        if(ss1 == ss3)
                cout << "Match ";
        else
                cout << "Mismatch ";

	return 0;
}
