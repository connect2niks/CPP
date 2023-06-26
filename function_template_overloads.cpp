#include <iostream>
#include <cstring>
using namespace std;

template<class T> T Max(T x, T y)  {return x>y?x:y;}

template<> char* Max<char *>(char *x, char *y)    // template specialization

{return strcmp (x,y)>0?x:y;}

template <class T, int size> T Max(T x[size])
{	T t = x[0];
	for (int i = 0; i <  size; ++i)
{
	if (x[i] > t)
		t = x[i]; }
return t;
}

int main()
{
	int arr[] = {2,5,6,3,7,9,4};
	cout << "Max(arr) = " << Max<int, 7>(arr) << endl;
}
