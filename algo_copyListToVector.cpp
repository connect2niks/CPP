#include <iostream>
#include <vector>
#include <list>
#include <algorithm>   // copy

using namespace std;

void f(vector<double>& vd, list<int>& li)
{
	if (vd.size() < li.size() )
	{
		cerr << "Target container too small" << endl;
		return;
	}

	cout << "dst before copy: ";
	for(auto& x:vd)
		cout << x << ' ';
	cout << endl;

	copy(li.begin(),li.end(),vd.begin());
	cout << "dst after copy: ";
	for(auto &x:vd)
		cout << x << ' ';
	cout << endl;


	sort(vd.begin(),vd.end());
	cout << "dst after sort: ";
	for (auto &x:vd)
		cout << x << ' ';
	cout << endl;
}

int main()
{
	list<int> li = {2,7,5,6,8,9};
	vector<double> vd(li.size());

	cout << "src before copy: ";
	for(auto &x:li)
		cout << x << ' ';
	cout << endl;

	f(vd, li);

}
