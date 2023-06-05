#include <iostream>
using namespace std;

class uncopyable

{
	protected:
		uncopyable()  {}   // allow construction 
		~uncopyable() {}   // and destruction of derived objects....

	private:
		uncopyable(const uncopyable&);  //...but prevent copying
		uncopyable& operator=(const uncopyable &);
};

class myclass:private uncopyable   // class no longer declares copy ctor or copy assign operator
{
	//.....
};

int main()

{
	myclass test1, test2;
	test2 = test1;     // error: use of deleted function
			   // 'myclass& myclass::operator=(const myclass&)'
}
