#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream myfile("example.txt");
	string line;
	if(myfile.is_open())
	{
		while(getline(myfile, line))
			cout << line << '\n';

		myfile.close();
	}
	else cout << "unable to open flie";
}
