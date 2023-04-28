#include <iostream>
using namespace std;

int area (int a, int b) { return (a*b); }
int area (int c){ return (c*c); }

int main ()
{
	int x = 10, y = 20, z = 5, t;
	t = area(x,y);
	cout << " Area of rectangle = " << t << endl;


        int k=9, u;
        u = area(k);
	cout << "Area of square " << u << endl;

return 0;

}
