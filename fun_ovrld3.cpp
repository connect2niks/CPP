#include <iostream>
using namespace std;

int area(int a, int b = 10) { return (a*b);}
double area (double c, double d) { return (c*d);}

int main(){

	int x= 10, y = 12, t; double z= 20.5, u = 5.0, f;

	t = area(x);    // binds with int area (int, int = 10)
	cout << "Area = " << t << endl;

        t = area(x,y);    // binds with int area (int, int = 10)
        cout << "Area = " << t << endl;


        f = area(z,u);    // binds with double area (double, double)
        cout << "Area = " << f << endl;

        f = area(z);   // binds with int area (int , int = 10)
        cout << "Area = " << f << endl;

//        f = area(z,y);
  //      cout << "Area = " << f << endl;
	return 0;

}
