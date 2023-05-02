
#include "stack.h"

stack::stack() : data(new char[100]), top(-1) {}
stack::~stack()
{
	delete[] data;
}

int stack::empty()
{
	return (top == -1);

}

void stack::push(char x)
{
	data[++top] = x;
}

void stack::pop()
{
	--top;
}

char stack::top_()
{
	return data[top];
}
