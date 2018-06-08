//============================================================================
// Name        : Referanslar.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void degerDegistir(int &ref){
	ref=20;
}

int main() {
	int a=10;

	cout<<"a'nın değeri : "<<a<<endl;

	degerDegistir(a);

	cout<<"a'nın yeni değeri : "<<a<<endl;


	return 0;
}
