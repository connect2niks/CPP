#include <iostream>
#include <cstring>
using namespace std;

typedef struct _String
{
	char *str;
} String;

String operator+(const String&  s1, const String& s2)
{
	String s;
	s.str = (char *)malloc(strlen(s1.str) + strlen(s2.str) + 1);
	strcpy(s.str, s1.str);
	strcat(s.str, s2.str);
	return s;
}
int main()
{
	String fname, lname, name;
	fname.str = strdup("Nikhil ");
	lname.str = strdup("yadav");
	
	name = fname + lname;   // overloaded operator +
	cout << "first name: " << fname.str << endl;
	cout << "Last name: " << lname.str << endl;
	cout << "Full name: " << name.str << endl;

	return 0;	

}
