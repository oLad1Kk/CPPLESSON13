#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person
{
	string name;
	int index;
public:
	Person();
	Person(string name, int index);

	void show()const;
	bool operator < (const Person& right)const;
};

