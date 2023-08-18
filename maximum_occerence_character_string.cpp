#include<bits/stdc++.h>
#include<iostream>
using namespace std;

char getMaxOccrenceCharacter(string s){
    int arr [26] = {0};
    for (int i= 0 ;i <s.length(); ++i){
        char ch = s[i];
        int number = 0;
        if(ch >= 'a' && ch <= 'z'){
            number = ch - 'a';
        }
        else{
            number = ch - 'A';
        }
        arr[number]++;
    }
    int max = -1;
    int ans = 0;
    for(int i=0; i<26; i++){
        if(max < arr[i]){
            ans = i;
            max = arr[i];
        }
    }
    char finalAns = 'a' + ans;
    return finalAns;
}

int main (){
    string str;
    cout << "enter the string " << endl;
    cin>>str;
    cout<<getMaxOccrenceCharacter(str) << endl;
}