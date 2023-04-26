#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int i, int j)  // function pointer
{
	return (i>j);
}

int main()
{
	int data[] = {32,71,12,45,26};

	sort(data, data+5, compare);

	for(int i=0; i<5; i++)
		cout << data[i] << " ";
	cout << endl;

	return 0;

}
