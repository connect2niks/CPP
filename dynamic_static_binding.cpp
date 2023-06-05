#include  <iostream>
using namespace std;

class B
{
	public:
		void f()
		{
			cout << "B:f()" << endl;
		}

		virtual void g ()
		{
			cout  << "B:g()" << endl;
		}
};

class D:public B
{
	public:
		void f()
		{
			cout << "D:f()" << endl;
		}

		virtual void g()
		{
			cout << "D:g()" << endl;
		}
};

int main()
{
	B b;
	D d;
	B *pb = &b;
	B *pd = &d;   // upcast
	
	B &rb = b;
	B &rd = d;  // upcast
	

	b.f();  // B:f()
	b.g();   // B:g()
	d.f();   // D:f()
	d.g();    // D:g()


	pb->f();
	pb->g();
	pd->f();
	pd->g();

	rb.f();
	rb.g();
	rd.f();
	rd.g();

	return 0;



}
