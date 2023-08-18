#include<iostream>
using namespace std;

int fact(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact *i;
    }
    return fact;
}

int ncr(int n , int r){
    int numerator = fact(n);
    int denomerator = fact(r) * fact(n-r);
    int answer = numerator / denomerator;

    return answer;
}

int main (){
    int n , r;
    cin >> n >> r;
    cout << ncr(n,r);
}