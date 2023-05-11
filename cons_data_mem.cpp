#include <iostream>
using namespace std;

class myclass
{
	const int cprimem_;
	int primem_;

	public:

	const int cpubmem_;
	int pubmem_;

	myclass(int cpri, int ncpri, int cpub, int ncpub): 
		cprimem_(cpri), primem_(ncpri), cpubmem_(cpub), pubmem_(ncpub)  {}
	int getcpri()
	{
		return cprimem_;
	}

/*	void setcpri(int i)
	{
		cprimem_ = i;     // Error 1: Assignment to const data member
	}
*/
	int getpri()
	{
		return primem_;
	}

	void setpri(int i)
	{
		primem_ = i;
	}
};

int main()
{
	myclass myobj(1, 2, 3, 4);

	cout << myobj.getcpri() << endl;
	myobj.setpri(6);
	
	cout << myobj.getpri() << endl;
	myobj.setpri(6);

	cout<< myobj.cpubmem_ << endl;
//	myobj.cpubmem_ = 3;      // Error 2: Assignment to const data member

	cout << myobj.pubmem_ << endl;
	myobj.pubmem_ = 3;

	return 0;
}
