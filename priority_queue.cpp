#include <bits/stdc++.h> 
#include<iostream>
#include<limits.h>
#include<vector>
#include<array>
#include<deque>
#include<list>
#include<stack>
#include<queue>
using namespace std;

int main (){
    // max heap

    priority_queue<int> maxi;

    maxi.push(1);
    maxi.push(2);
    maxi.push(10);
    maxi.push(9);
    maxi.push(7);
    maxi.push(16);

    int n = maxi.size();
    for(int i=0; i<n; i++){
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    //min heap

    priority_queue<int , vector<int> , greater<int> > mini;

    mini.push(1);
    mini.push(2);
    mini.push(10);
    mini.push(9);
    mini.push(7);
    mini.push(16);

    int m = mini.size();
    for(int i=0; i<m; i++){
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

}