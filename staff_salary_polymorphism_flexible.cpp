#include <string>
#include <iostream>
using namespace std;

class Employee
{
	protected:
		string name_;

	public:

		virtual void ProcessSalary() = 0;
		virtual ~Employee()   {}
};

class Engineer: public Employee
{
	public:
		Engineer(const string &name)  { name_ = name;}
		void ProcessSalary()
		{
			cout << name_ << ": Process salary for Engineer" << endl;
		}
};

class Manager : public Engineer 

{
	Engineer *report[10];
	public:

	Manager(const string &name): Engineer(name)  {}

	void ProcessSalary()
	{
		cout << name_ << ": Process salary for Manager" << endl;
	}
};

class Director : public Manager

{
        Manager *report[10];
        public:

        Director(const string &name): Manager(name)  {}

        void ProcessSalary()
        {
                cout << name_ << ": Process salary for Director" << endl;
        }
};

class SalesExecutive : public Employee

{
        public:

        SalesExecutive(const string &name) { name_ = name;}

        void ProcessSalary()
        {
                cout << name_ << ": Process salary for sales Executive" << endl;
        }
};


int main()
{
	Engineer e1("Rohit"), e2("Kavita"), e3("Shambhu");
	Manager m1("Asif"), m2("Suryansh");
	Director d("Niks");
	SalesExecutive s1("Haribabu"), s2("Misba");

	Employee *staff[] = {&e1, &e2, &e3, &m1, &m2, &d, &s1, &s2};

	for(int i=0; i<sizeof(staff)/sizeof(Employee *); ++i)
		staff[i]->ProcessSalary();
}


