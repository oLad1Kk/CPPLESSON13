#include "Person.h"

Person::Person()
{
	this->name = "undefined";
	this->index = 0;
}

Person::Person(string name, int index)
{
	this->name = name;
	this->index = index;
}

void Person::show() const
{
	cout << "Name :" << name << endl;
	cout << "Index :" << index << endl << endl;
}

bool Person::operator<(const Person& right) const
{
	return this->index < right.index;
}
