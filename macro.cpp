#include <iostream>
using namespace std;

int main()
{
	cout<< "This is the line number " << __LINE__;
	cout<< " of file " << __FILE__ ".\n";
	cout << "Its compillation began " << __DATE__;
	cout << " at " << __TIME__ <<".\n";
	cout << "The compiler gives a __cplusplus value of " << __cplusplus <<".\n";

	return 0;
}
