#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int data[] = {5,4,3,2,1};

	replace(data, data+5, 5, 0);

	for (int i=0; i<5; i++)
		cout<< data[i]<<" ";
	cout<<endl;

	return 0;

}
