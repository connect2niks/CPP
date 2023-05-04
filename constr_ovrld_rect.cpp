#include <iostream>
using namespace std;

class pt
{
	public:
		int x_, y_;
		pt(int x, int y):
			x_(x), y_(y) {}
};

class rect
{
	pt lt_, rb_;
	
	public:
	rect(pt lt, pt rb):
		lt_(lt), rb_(rb){ }
	rect(pt lt, int h, int v):
		lt_(lt), rb_(pt(lt.x_+v, lt.y_+h)) { }
	rect(int h, int v):
		lt_(pt(0, 0)), rb_(pt(v, h)) { }

	int area()
	{
		return (rb_.x_ - lt_.x_) * (rb_.y_ - lt_.y_);
	}	
};

int main()
{
	pt p1(2, 5), p2(8, 10);
	rect r1(p1, p2);
	rect r2(p1, 5, 6);
	rect r3(5, 6);

	cout << "Area of r1 = " << r1.area() << endl;
	cout << "Area of r2 = " << r2.area() << endl;
	cout << "Area of r3 = " << r3.area() << endl;

	return 0;
}
