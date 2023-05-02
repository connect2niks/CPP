#include <iostream>
#include <string>
using namespace std;

class emp
{
	private:
		string name;  // read and write
		string add;    // write only
		double sal_fix;    // read only
		double sal_var;    // not visible

	public:
		emp()
		{
			sal_fix = 1200;
			sal_var = 10;
		}

		string get_name()
		{
			return name;
		}

		void set_name(string name)
		{
			this->name = name;
		}

		void set_add(string add)
		{
			this->add = add;
		}

		double get_sal_fix()
		{
			return sal_fix;
		}
		double sal()
		{
			return (sal_fix + sal_var);
		}
};

int main()
{
	emp e1;
	e1.set_name("Niks");
	e1.set_add("Roorkee");
	cout << e1.get_name() << endl;
	cout << e1.get_sal_fix() << endl;
	cout << e1.sal() << endl;

	return 0;
}


