#include <iostream>
#include <vector>
using namespace std;

class stack
{
	private :
		vector<char> data;
		int top;

	public:
		stack():top(-1) { data.resize(100);}
		~stack() {};

		int empty()
		{
			return (top == -1);
		}

		void push(char x)
		{
			data[++top] = x;
		}

		void pop()
		{
			--top;
		}

		char top_()
		{
			return data[top];
		}
};

int main()
{
	stack s ;
	char str[10] = "ABCDE";

	for (int i=0; i<5; ++i)
	{
		s.push(str[i]);
	}

	while (!s.empty())
	{
		cout << s.top_();
		s.pop();
	}

	cout << endl;

	return 0;
}
