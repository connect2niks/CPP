#include <iostream>
using namespace std;

// four arithmatic operation


float Plus(float a, float b)
{
	return a+b;
}

float Minus(float a, float b)
{
        return a-b;
}

float Multiply(float a, float b)
{
        return a*b;
}

float Divide(float a, float b)
{
        return a/b;
}


// Solution with function pointer


void Switch (float a, float b, float (*pt2func)(float,float))
{
	float result = pt2func(a,b);
	cout << "Result = " << result << endl;
}

int main()
{
	float a=10.5, b = 2.5;
	Switch (a,b, &Plus);
	Switch (a,b, &Minus);
	Switch (a,b, &Multiply);
 	Switch (a,b, &Divide);
	return 0;
}
