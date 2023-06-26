#include <iostream>
#include <string>
#include <cstring>
using namespace std;
template<class T1 = int, class T2 = string>
class student
{
	T1 roll;
	T2 name;
	public:
	student (T1 r, T2 n):roll(r), name(n)   {}

	void print() const
	{
		cout << "version 1: (" << name << ", " << roll << ") " << endl;

	}
};
template<class T1>
class student<T1, char *>
{
	T1 roll;
	char *name;
	public:
	student(T1 r, char *n): roll(r), name(strcpy(new char(strlen(n)+1), n))  {}
	void print() const
	{
		cout << "version 2: (" << name << ", " << roll << ") " << endl;

	}
};

int main()
{
	student<int, string>s1(2, "Ramesh");
	s1.print();

	student<int> s2(11, "Shilpa");
	s2.print();

	student<> s3(7, "Gagan");
	s3.print();

	student<string> s4("X9", "LaLita");
	s4.print();

	student<int, char*> s5(3, "Gouri");
	s5.print();
}
