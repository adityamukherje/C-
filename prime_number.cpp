//prime number 
#include <iostream>
using namespace std;
int main (){
    int n;
    cout << "enter the number to check weather it is prime or not" << endl;
    cin >> n;
    bool isPrime = 1;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = 0;
        }
    }
    if (isPrime == 0) {
        cout << n << " is not  a prime number " << endl;
    }
    else {
        cout << n << " is  a prime number " << endl;
    }
}