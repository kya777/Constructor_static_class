#include <iostream>
#include "Test_Class.h"
#include "Test_Struct.h"
#include "constructor_class.h"
using namespace std;

int main()
{
	/*Test_Class *tclass = new Test_Class;
	Test_Struct *tstruct = new Test_Struct;

	tclass->pubfunc();
	tstruct->pubfunc();

	cout << sizeof(Test_Class) << endl;
	cout << sizeof(Test_Struct) << endl;

	delete tstruct;
	delete tclass;*/

	Constructor_class defaluttemp;
	//Constructor_class inttemp(1);
	//Constructor_class doubletemp(1.0);
	Constructor_class copytemp(defaluttemp);
	Constructor_class copytemp2(Constructor_class(1));
	//copytemp = defaluttemp;


		
	
	

	return 0;
}