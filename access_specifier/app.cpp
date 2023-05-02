#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
	stack s;
	char str[10] = "ABCDE";
	for (int i = 0; i<5; ++i)
	{
		s.push(str[i]);
	}

	while(!s.empty())
	{
		cout << s.top_(); s.pop();
	}

	return 0;
}
