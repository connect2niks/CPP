#include <iostream>
using namespace std;

class Engineer
{
	protected:
		string name_;
	public:
		Engineer(const string &name) : name_(name)  {}
		virtual void ProcessSalary()
		
		{
			cout << name_ << ": Process salary for engineer" << endl;
		}
};

class Manager : public Engineer
{
	Engineer *report[10];
	public: 
	Manager (const string &name) : Engineer(name)  {}
	void ProcessSalary()
	{
		cout <<  name_ << ": Process salary for Manager" << endl;
	}
};

class Director: public Manager
{
	Manager *report[10];
	public:
	Director(const string &name) : Manager(name)  {}
	void ProcessSalary()
	
	{
		cout<< name_ << ": Process salary for Director" << endl;
	}
};

int main()
{
	Engineer e1("Rohit"), e2("Kavita"), e3("Sham");

	Manager m1("Kamala"), m2("Rajiv");
	Director d("Niks");

	Engineer *staff[] = {&e1, &e2, &e3, &m1, &m2, &d};

	for(int i = 0; i<sizeof(staff)/sizeof(Engineer*); ++i)
		staff[i] -> ProcessSalary();
}

