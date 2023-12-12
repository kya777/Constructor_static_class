#include "constructor_class.h"
#include "iostream"
#include <memory>
using namespace std;
Constructor_class::Constructor_class()
{
	cout << "Call Default Constructor" << endl;
	arr = new int(20);
}

Constructor_class::~Constructor_class()
{
	cout << "Call Destructor" << endl;
	delete arr;
}

Constructor_class::Constructor_class(int test)
{
	cout << "Call int Constructor" << endl;
	arr = new int(10);
}

Constructor_class::Constructor_class(double test)
{
	cout << "Call double Constructor" << endl;
	arr = new int(10);
}

Constructor_class::Constructor_class(const Constructor_class& temp)
{
	cout << "Call copy Constructor" << endl;
	// ����Ʈ �����͸� �ϴ� ���� ���縦 �ϴ� �ؾ� �ϴµ�.
	arr = new int(10);
	memcpy(arr, temp.arr, sizeof(int));
}
