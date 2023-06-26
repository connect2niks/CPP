#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

class Engineer 
{
	protected:
		string name_;
	public:
		Engineer(const string& name) : name_(name)  {}

		virtual void ProcessSalary()
		{
			cout << name_ << ": Process Salary for Engineer" << endl;
		}
};

class Manager : public Engineer
{
	Engineer *report_[10];
	public:
	Manager(const string &name) : Engineer(name)  {}

	void ProcessSalary()
	{
		cout << name_ << ": Process Salary for Manager" << endl;
	}
};

class Director : public Manager
{
	Manager *report[10];
	public:
	Director(const string& name): Manager(name)  {}

	void ProcessSalary ()
	{
		cout << name_ << ": Process salary for Director" << endl;
	}
};

int main()
{
	Engineer e("Rohit");
	Manager m("Kamala");
	Director d("Niks");

	Engineer *staff[] = { &e, &m, &d};

	for  (int i = 0; i< sizeof(staff)/sizeof(Engineer*);++i)
	{
		cout << typeid(staff[i]).name()  << ": " << typeid(*staff[i]).name() << endl;
	}


}
