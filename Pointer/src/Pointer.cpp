//============================================================================
// Name        : Pointer.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int a=5;

	int *ptr=&a;

	cout << "Değişkenin adresi : "<< &a<<endl;
	cout <<"Değişkenin adresi : "<<ptr<<endl;

	cout <<"DEğişkenin değeri : "<<*ptr<<endl;

	*ptr=6;

	cout<<"Değişkenin yeni değeri : "<<a<<endl;

	return 0;
}
