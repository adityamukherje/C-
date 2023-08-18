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
    stack <string> s;

    s.push("I");
    s.push("am");
    s.push("a");
    s.push("good");
    s.push("boy");

    cout << s.top() << endl;

    s.pop();

    cout << s.top() << endl;


}