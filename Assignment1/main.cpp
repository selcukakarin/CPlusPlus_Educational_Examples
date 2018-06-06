#include <iostream>

using namespace std;

int main()
{
    int count,number,times;
    cout << "How many numbers, divisible by 6, do you want to enter? " ;
    cin >> count;

    while(count>0){
        cout << "Enter an integer, divisible by 6: ";
        cin >> number;
        times=number/6;
        if(number%6==0){
            count--;
            for(;times>0;times--){
                cout << "*";
            }
            cout << "\n" << endl;
        }else{
            cout << "That is a mistake! 15 is not divisible by 6." << endl;
        }
    }
    return 0;
}
