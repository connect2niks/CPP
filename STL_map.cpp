#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<char,int> mymap;

	mymap['a'] = 10;
	mymap.insert(pair<char, int>('c', 30));
	map<char,int>::iterator it = mymap.begin();
	mymap.insert(it,pair<char,int>('b', 20));
	mymap['d'] = 40;

	for(it = mymap.begin(); it!=mymap.end(); ++it)
		cout << it->first << " => " << it->second << endl;

	it = mymap.find('c');
	if(it!=mymap.end())
		cout << "value of mymap['c'] = " << it ->second << endl;
}
