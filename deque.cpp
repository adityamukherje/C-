#include <bits/stdc++.h> 
#include<iostream>
#include<limits.h>
#include<vector>
#include<array>
#include<deque>
#include<list>
using namespace std;

int main (){
    deque<int> v;

    v.push_back(1);
    for(int i:v){
        cout << i << " ";
    }
    cout << endl;
     v.push_back(2);
    for(int i:v){
        cout << i << " ";
    }
    cout << endl;
     v.push_back(3);
    for(int i:v){
        cout << i << " ";
    }
    cout << endl;

    v.push_front(20);
     for(int i:v){
        cout << i << " ";
    }
    cout << endl;

    v.push_back(30);
     for(int i:v){
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();
     for(int i:v){
        cout << i << " ";
    }
    cout << endl;

    v.pop_front();
     for(int i:v){
        cout << i << " ";
    }
    cout << endl;
    
}