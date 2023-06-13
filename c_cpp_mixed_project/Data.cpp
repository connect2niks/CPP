#include <iostream>
using namespace std;
#include "data.h"

Data::Data(int d): d_(d)
{
	cout << "Created " << d_ << endl;
}

Data::~Data()
{
	cout << "Released " << d_ << endl;

}

int Data::get()
{
	return d_;
}

void Data::set(int d)
{
	d_ = d;
}



