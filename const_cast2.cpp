#include <iostream>
using namespace std;
struct type
{
	type(): i(3)  {}
	void m1(int v)  const
	{
	//	this->i = v;  // error c3490: 'i' cannot be modified -- accessed through a const objects
	const_cast<type*>(this)->i = v;  
	}
	int i;
};

int main()
{
	int i=3;
	const int& cref_i = i;
	const_cast<int&> (cref_i) = 4;
	cout << "i = " << i << '\n';

	type t ;
	t.m1(4);
	cout << "type::i = " << t.i << '\n';

	const int j = 3;
	int* pj = const_cast<int *>(&j);
	*pj = 4;
	cout<<j<<" " <<*pj << endl;

	void (type::*mfp)(int) const = &type::m1;
	//const_cast<void(type::*)(int)>(mfp);
}

