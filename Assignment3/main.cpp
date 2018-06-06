#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string reverseStr(string& str)
{
    int n = str.length();

    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
        return str;
}

int main()
{
    int times;
    string input,otherInput;
    cout << "Enter the number of forbidden strings: " ;
    cin >> times;

    cout << "Enter the forbidden string: " ;
    cin >> input;

    while(times>0){
    cout << "Enter a string: " ;
    cin >> otherInput;
    if(otherInput==input){
            times--;
    }else{
        for(int i=0;i<otherInput.length();i++){
            if(otherInput[i]=='a'){
                otherInput[i]='o';
            }
        }
        cout << reverseStr(otherInput) << endl;
    }
    }


    return 0;
}
