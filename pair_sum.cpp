#include<iostream>
#include<limits.h>
using namespace std;

// not complete till now

int main (){
     int size1;
    cout << "enter the size of the 1st array";
    cin >> size1;
    int num1 [100];

    cout <<"enter the 1st array" << endl;

    for(int i=0; i<size1; i++){
        cin  >> num1[i];
    }

      int size2;
    cout << "enter the size of the 2nd array";
    cin >> size2;
    int num2 [100];

    cout <<"enter the 1st array" << endl;

    for(int i=0; i<size2; i++){
        cin  >> num2[i];
    }

    int sum;
    cout << "enter the number to find sum";
    cin >> sum;

    for(int i=0; i<size1; i++){
        for(int j= i+1; j<size2; j++){
            if(num1[i]+num2[j]==sum){
                cout << i << " " << j ;
            }
        }
    }
    return 0;
}
