#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int data[] = {1,2,3,4,5,6,7,8},k=9;

	if(binary_search(data, data+9, k))
		cout<<"Found!\n";
	else cout<<"Not Found...\n";

	return 0;
}

