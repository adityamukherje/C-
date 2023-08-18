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
#include<map>
#include<bitset>
#include<algorithm>
using namespace std;

int main (){
    map<int , string> m;

    m[1] = "adi";
    m.insert({2 , "love"});
    m[5] = "honda";
    m.insert({3 , "yahama"});
    m[2] = "suzuki";
    m.insert({4 , "good boy"});

    for(auto i:m){
        cout << i.first << " " << i.second << endl;
    }

}