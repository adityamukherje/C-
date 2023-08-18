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
    queue<string> q;

    q.push("I");
    q.push("am");
    q.push("a");
    q.push("good");
    q.push("boy");

    cout << q.size() << endl;
    cout << q.front() << endl;
    cout << q.back() << endl;

    q.pop();

     cout << q.size() << endl;
    cout << q.front() << endl;

}