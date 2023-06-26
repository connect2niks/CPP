#include <iostream>
using namespace std;

class person
{
	public:
		person(int x)
		{
			cout << "Person: Person(int x)" << endl;
		}
			person()
			{
				cout << "Person: Person()" << endl;
			}
};

class faculty : virtual public person
{
	public: faculty(int x): person(x)
		{
			cout << "Faculty: faculty(int)" << endl;
		}
};

class student: virtual public person
{
	public:
		student(int x): person(x)
	{
		cout << "student: student(int)" << endl;
	}
};

class TA: virtual public faculty, public student
{
	public:
		TA(int x): student(x),faculty(x),person(x)
	{
		cout << "TA: TA(int)" << endl;
	}
};

int main()
{
	TA ta(30);
}
