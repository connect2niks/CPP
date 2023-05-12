#include <iostream>
using namespace std;

class Printer
{
	bool blackNwhite, bothsided;
	Printer(bool bw = false, bool bs = false) : blackNwhite(bw), bothsided(bs)
	{
		cout<< "Printer Constructed" << endl;
	}
	~Printer()
	{
		cout << "Printer Destructed" << endl;
	}

	public: 

	static const Printer &printer(bool bw = false, bool bs = false)
	{
		static Printer myprinter(bw, bs);   // the singleton   -- constructed the first time
		return myprinter;
	}

	void print(int np) const
	{
		cout << "Printing " << np << "Pages " << endl;
	}
};

int main()
{
	Printer :: printer().print(10);
	Printer :: printer().print(20);
}
