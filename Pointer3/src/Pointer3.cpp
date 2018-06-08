//============================================================================
// Name        : Pointer3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int array[]={1,2,3,4};

	cout<<array<<endl;

	int *ptr=array;
	cout<<ptr<<endl;

	int *ptr2=&array[2];
	cout<<ptr2<<endl;

	string arrayString[]={"Selçuk","Akarın"};

	string *ptr3=arrayString;

	cout<<ptr3<<endl;
	cout<<ptr3+1<<endl;
	cout<<*(ptr3+1)<<endl;

	cout<<ptr3[1]<<endl;

	return 0;
}
