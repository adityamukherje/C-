#include<bits/stdc++.h>
#include<iostream>
#include<limits.h>
using namespace std;

string reverseString(string s){
	reverse(s.begin(), s.end());
	s.insert(s.end(), ' ');
	int j = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ') {
			reverse(s.begin() + j, s.begin() + i);
			j = i + 1;
		}
	}
	s.pop_back();
	return s;
}

    int main (){
        string str = " i am a good boy";
        // cout << "enter the string to reverse" << endl;
        // cin >> str;

        cout << reverseString(str) << endl;

    }