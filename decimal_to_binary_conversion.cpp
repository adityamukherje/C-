#include<iostream>
#include<math.h>
using namespace std;

int main (){
    int n;
    cout << " enter the decemal number to convert in baniry " << endl;
    cin >> n;
    int i=0;
    int answer =0;
    while(n != 0){
        int bits = n & 1;
        answer = (bits * pow(10 , i)) + answer;
        n = n >> 1;
        i++;
    }
   cout << " the number in a decimal format is :" << " " << answer << endl;
}