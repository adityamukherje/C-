#include <bits/stdc++.h> 
#include<iostream>
#include<limits.h>
#include<vector>
#include<array>
#include<deque>
#include<list>
#include<stack>
#include<queue>
#include<set>
using namespace std;

int main (){
    set<int> s;
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(3);

    for(auto i:s){
        cout << i << " ";
    }
    cout << endl;

    set<int> ::iterator it  = s.begin();
    it++;

    s.erase(it);

      for(auto i:s){
        cout << i << " ";
    }
    cout << endl;
}