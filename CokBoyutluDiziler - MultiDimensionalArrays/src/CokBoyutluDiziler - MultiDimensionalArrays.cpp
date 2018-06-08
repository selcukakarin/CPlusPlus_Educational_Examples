//============================================================================
// Name        : CokBoyutluDiziler.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	/*int matris[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << matris[i][j]<<" ";
		}
		cout << endl;
	}*/

	int matris[3][3],input;

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin >> input;
			matris[i][j]=input;
		}
	}

	for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){

				cout << matris[i][j]<<" ";
			}
			cout << endl;
		}




	return 0;
}
