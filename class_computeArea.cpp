#include <iostream>
#include <cmath>
using namespace std;

class point 
{
	public :
		int x;
	       int y;
};

class rect
{
	public :
		point tl;
	       point br;

		void computeArea()
		{
			cout <<  abs(tl.x - br.x )*(br.y - tl.y) << endl;
		}
};

int main()
{
	rect r = {{0,2}, {5,7}};
	r.computeArea();

	return 0;
}
