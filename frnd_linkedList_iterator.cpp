#include <iostream>
using namespace std;

class node;
class list;

class iterator

{
	node *node;
	list *list;

	public:

	iterator() : node (0), list(0)  {}

	void begin(list *);
	bool end();
	void next();
	int data();

};


class list
{
	node *head;
	node *tail;

	public:

	list(node *h = 0) :  head(h), tail(h)  {}
	void append(node *p);
	friend class iterator;
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
	friend class iterator;
};
void iterator::begin(list *l)
{
	list = l;
	node = l->head;
}

bool iterator::end()
{
	return node == 0;
}

void iterator::next()
{
	node = node ->next;
}

int iterator::data()
{
	return = node->info;
}
void list::append(node *p)
{
	
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
