#include <bits/stdc++.h> 
#include<iostream>
#include<limits.h>
#include<vector>
#include<array>
#include<deque>
#include<list>
#include<stack>
using namespace std;

int main (){
    list<int> l ;

    l.push_back(1);
    for(int i:l){
        cout << i << " ";
    }
    cout << endl;
    
    l.push_back(2);
    for(int i:l){
        cout << i << " ";
    }
    cout << endl;

    l.push_front(10);
    for(int i:l){
        cout << i << " ";
    }
    cout << endl;
}