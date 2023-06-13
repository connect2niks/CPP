#include <iostream>
using namespace std;

class shapes
{
	public:
		virtual void draw() = 0;
};

class polygon:public shapes
{
	public:
		void draw()
		{
			cout << "polygon: Draw by triangulation" << endl;
		}
};

class closedconics:public shapes

{
	public:
};

class triangle : public polygon
{
	public:
		void draw()
		{
			cout << "Triangle: Draw by lines" << endl;
		}
};

class Quad : public polygon
{
        public:
                void draw()
                {
                        cout << "Quadrilateral: Draw by lines" << endl;
                }
};

class circle : public closedconics
{
        public:
                void draw()
                {
                        cout << "Circle: draw by Breshenham  algorithm" << endl;
                }
};

class Ellipes : public closedconics
{
        public:
                void draw()
                {
                        cout << "Ellipes: Draw by ....." << endl;
                }
};


int main()
{
	shapes *arr[] = {new triangle, new Quad, new circle, new Ellipes};

	for(int i = 0; i<sizeof(arr)/sizeof(shapes *);i++)
		arr[i]->draw();
}
