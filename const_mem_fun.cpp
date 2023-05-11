#include <iostream>
using namespace std;
class myclass
{
	int myprimem_;

	public:

	int mypubmem_;

	myclass (int mpri, int mpub) : myprimem_(mpri), mypubmem_(mpub) {}

	int getmem() const
	{
		return myprimem_;
	}	

	void setmem(int i)
	{
		myprimem_ = i;
	}

	void print() const
	{
		cout << myprimem_ << ", " << mypubmem_ << endl;
	}
};

int main()
{
	myclass myobj(0, 1);   // non-const object

	const myclass myconstobj(5, 6);   // const object
					  // non-const object can invoke all member function and update data members

	cout << myobj.getmem() << endl;

	myobj.setmem(2);

	myobj.mypubmem_ = 3;

	myobj.print();

	// const object cannot allow any change

	cout << myconstobj.getmem() << endl;

//	 myconstobj.setmem(7) << endl;
//	myconstobj.mypubmem_ = 8;

	myconstobj.print();

	return 0;
}


