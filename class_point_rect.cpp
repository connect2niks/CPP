#include <iostream>
using namespace std;

class point
{
	public :
		int x; int y;
};

class rect
{
	public:
		point tl; point br;
};


int main()
{
	rect r = {{0,2}, {5,7}};

	cout <<  "[( " << r.tl.x<<", " << r.tl.y << " ) ( " << r.br.x << ", "<<r.br.y << " )]" << endl;

	return 0;
}
