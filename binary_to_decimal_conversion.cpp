#include<iostream>
#include<math.h>
using namespace std;

int main (){
    int n ;
    cout << "enter the binary number to convert to decimal" << endl;
    cin >> n;
    int i =0;
    int answer = 0;
    while(n!=0){
        int digits = n % 10;
        if(digits==1){
            answer = answer + pow(2 , i);
            
        }

        n = n / 10;
        i++;
    }
     cout << "the number in decimal form is :" << answer << endl;
}