#pragma once
#include <iostream>
using namespace std;
class Constructor_class
{
public:
	Constructor_class();
	~Constructor_class();

	Constructor_class(int test);
	Constructor_class(double test);
	
	Constructor_class(const Constructor_class& temp);
	Constructor_class& operator= (Constructor_class& temp)
	{
		cout << "Call Copy Assignment Constructor" << endl;
		arr = temp.arr;
		*temp.arr = NULL;
		temp.arr = nullptr;
		return *this;
	}


private:
	int* arr = NULL;
};

