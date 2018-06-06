#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

int randomNumberGenerate() {
   int rnd;
   rnd = rand() % 6 + 1 ;
   return rnd;
}

int main()
{
    srand(time(NULL));
    int Numbers[6]={0,0,0,0,0,0};
    int times,temp,maxNumber=Numbers[0];

    cout << "Write the number of times you want to throw a dice: " ;
    cin >> times;

    for(;times>0;times--){
        temp=randomNumberGenerate();
        switch(temp){
            case 1 : Numbers[0]++;
            break;
            case 2 : Numbers[1]++;
            break;
            case 3 : Numbers[2]++;
            break;
            case 4 : Numbers[3]++;
            break;
            case 5 : Numbers[4]++;
            break;
            case 6 : Numbers[5]++;
            break;
        }
    }
    for(int  i=0;i<6;i++){
        if(Numbers[i]>maxNumber){
            maxNumber=Numbers[i];
        }
    }
    for(int i=0;i<6;i++){
            switch(i){
                case 0 : cout << "\n1 appeared " << Numbers[i] << "-times\n";
                break;
                case 1 : cout << "2 appeared " << Numbers[i] << "-times\n";
                break;
                case 2 : cout << "3 appeared " << Numbers[i] << "-times\n";
                break;
                case 3 : cout << "4 appeared " << Numbers[i] << "-times\n";
                break;
                case 4 : cout << "5 appeared " << Numbers[i] << "-times\n";
                break;
                case 5 : cout << "6 appeared " << Numbers[i] << "-times\n";
                break;
            }
    }
    for(int  i=0;i<6;i++){
        if(Numbers[i] == maxNumber){
            switch(i){
                case 0 : cout << "\n1 appeared the most times.";
                break;
                case 1 : cout << "\n2 appeared the most times.";
                break;
                case 2 : cout << "\n3 appeared the most times.";
                break;
                case 3 : cout << "\n4 appeared the most times.";
                break;
                case 4 : cout << "\n5 appeared the most times.";
                break;
                case 5 : cout << "\n6 appeared the most times.";
                break;
            }

        }
    }


    return 0;
}
