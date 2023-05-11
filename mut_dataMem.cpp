#include <iostream>
using namespace std;
class myclass
{
	int mem_;
	mutable int mutmem_;

	public:

	myclass(int m, int mm) : mem_(m), mutmem_(mm)  {}

	int getmem() const
	{
		return mem_;
	}

	void setmem(int i)
	{
		mem_= i;
	}

	int getmutmem() const
	{
		return mutmem_;
	}

	void setmutmem(int i) const
	{
		mutmem_ = i;
	}   // ok to change mutable
};

int main()
{
	const myclass myconsobj(1, 2);

	// myconsobj.setmem(3) << endl;   // error to invoke

	cout << myconsobj.getmutmem() << endl;
	myconsobj.setmutmem(4);

	return 0;
}

