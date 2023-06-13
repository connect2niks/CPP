#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Employee
{
	protected:
		string name_;
		vector<Employee*> reports_;

	public:

		virtual void ProcessSalary() = 0;
		virtual ~Employee()   {}
		static vector<Employee*> staffs;
		void Addstaff(Employee* e)  {staffs.push_back(e);};
};

class Engineer: public Employee
{
	public:
		Engineer(const string &name)  { name_ = name;
						Addstaff(this);	}
		void ProcessSalary()
		{
			cout << name_ << ": Process salary for Engineer" << endl;
		}
};

class Manager : public Engineer 
{
	public:

	Manager(const string &name): Engineer(name)  {}

	void ProcessSalary()
	{
		cout << name_ << ": Process salary for Manager" << endl;
	}
};

class Director : public Manager

{
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

        SalesExecutive(const string &name) { name_ = name;
						Addstaff(this);	}

        void ProcessSalary()
        {
                cout << name_ << ": Process salary for sales Executive" << endl;
        }
};

vector<Employee*> Employee::staffs;
int main()
{
	Engineer e1("Rohit"), e2("Kavita"), e3("Shambhu");
	Manager m1("Asif"), m2("Suryansh");
	Director d("Niks");
	SalesExecutive s1("Haribabu"), s2("Misba");

	vector<Employee*>::const_iterator it;

	for(it = Employee::staffs.begin(); it<Employee::staffs.end(); ++it)
		(*it)->ProcessSalary();
}


