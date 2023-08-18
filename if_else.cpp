#include <iostream>
using namespace std;


// checking positive or negitive number

int main(){
    int a ;
    cout << "enter a" << endl ; 
    cin >> a ;
    
    // cin >> a; not working

    if (a >= 0){
        cout << " a is a positive number " << endl ;
    }
     else{
        cout << " a is a negative number " << endl ;
     }
}

