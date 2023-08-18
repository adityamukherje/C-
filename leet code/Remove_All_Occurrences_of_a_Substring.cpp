#include<bits/stdc++.h>
#include<iostream>
using namespace std;

 string removeOccurrences(string s, string part) {
        while(s.length() != 0 && s.find(part) < s.length()){
            s.erase(s.find(part) , part.length());
        }
        return s;
    }
    int main(){
        string s ;
        cout << "enter the string" << endl;
        cin >> s;
        string part ;
        cout << "enter the part to dlt from the string" << endl;
        cin >> part;
        string str = removeOccurrences(s , part);
        cout << str << endl;
    }