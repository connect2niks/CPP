#include <iostream>
using namespace std;

class node;

class list
{
	node *head;
	node *tail;

	public:

	list(node *h = 0) :  head(h), tail(h)  {}
	void display();
	void append(node *p);
};

class node 
{
	int info;
	node *next;
	public:

	node(int i) : info (i), next(0)  {}
	//friend void list::display();
	//friend void list::append(node *);
	friend class list;
};

void list::display()
{
	node *ptr = head;
	while(ptr)
	{
		cout << ptr->info << " ";
		ptr = ptr->next;
	}
}

void list::append(node *p)
{
	if(!head)
	{
		head = tail = p;
	}
	else
	{
		tail->next = p;
		tail = tail->next;
	}
}

int main()
{
	list l;

	node n1(1), n2(2), n3(3);
	l.append(&n1);
	l.append(&n2);
	l.append(&n3);

	l.display();

	return 0;
}
