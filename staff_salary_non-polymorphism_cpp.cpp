#include <iostream>
using namespace std;
 enum E_TYPE  {Er, Mgr};

class Engineer
{
	protected:
		string name_;
		E_TYPE type_;

	public:
		Engineer (const string &name, E_TYPE e = Er) : name_(name), type_(e) {}
		E_TYPE GetType()  {return type_;}
		void  ProcessSalary() 
		{
			cout << name_ << ": Process salary for Engineer" << endl;
		}
};

class Manager:public Engineer
{
	Engineer *report[10];
	public:
	Manager (const string &name, E_TYPE e = Mgr) : Engineer(name, e)  {}
	void ProcessSalary()
	{
		cout << name_ << ": Process salary for manager" << endl;
	}
};

int main()

{
	Engineer e1("Rohit"), e2("Kavita"), e3("Shambhu");
	Manager m1("Kamal"), m2("Rajiv");

	Engineer  *staff[] = {&e1, &e2, &e3, &m1, &m2};

	for (int i = 0; i<sizeof(staff)/sizeof(Engineer*); ++i)
	
	{
		E_TYPE t = staff[i]->GetType();
		if(t == Er)
			staff[i]->ProcessSalary();

		else if(t == Mgr)
			((Manager *)staff[i])->ProcessSalary();
		else
			cout << "Invalid Staff Type" << endl;
	}
}
