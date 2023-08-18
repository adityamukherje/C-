//simple calculator

#include <iostream>
using namespace std;
int main(){
    int a ;
    int b;
    cout<< "enter the valu of a and b to calculate" << endl;
    cin>>a>>b;

    char operation ;
    cout << "enter the opearion u want to perform" << endl;
    cin >> operation;

    switch(operation){
        case '+': cout<< (a+b) << endl;
                 break;
        case '-': cout<< (a-b) << endl;
                 break;
        case '*': cout<< (a*b) << endl;
                 break;
        case '/': cout<< (a/b) << endl;
                 break;
        
        default: cout << "enter a valid operaion" << endl;
    }
}