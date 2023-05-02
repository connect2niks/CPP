#include <iostream>
#include <cstring>
using namespace std;

class stack
{
	private:
		char *data_;
		int top_;
	public:
		stack(size_t = 10);   // size of data_ defaulted
		~stack()
		{
			delete data_[];
		}

		int empty()
		{
			return (top_ == -1);
		}

		void push (char x)
		{
			data_[++top_] = x;
		}

		void pop()
		{
			--top_;
		}

		char top()
		{
			return data_[top_];
		}
};

stack::stack(size_t s) : data_(new char[s], top_(-1))
{
	cout << "Stack created with max size = " << s << endl;
}

int main()
{
	char str[] = "ABCDE";
	int len = strlen(str);

	stack s(len);

	for (int i = 0; i<len; ++i)
	{
		s.push(str[i]);
	}

	while (!s.empty())
	{
		cout << s.top();
		s.pop();
	}

	return 0;
}
