#include<bits/stdc++.h>
#include<iostream>
using namespace std;

char findLength(char name[]){
    int count =0;
    for(int i=0; name[i] != '\0'; i++){
        count ++;
    }
    return count;
}

char upperToLower (char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

char checkPalindrome(char name [] , int n ){
    int s =0;
    int e = n-1;
    while(s <= e){
        if  ( upperToLower (name[s]) != upperToLower (name[e])  ){
            cout << "not  a palindrome" << endl;
        }
         else{
        s++;
        e--;
         }
    }

    cout << "palindrome" << endl;
   
}

int main (){
    char name [20];
    cout << "enter the character" << endl;
    cin >> name ;
    int len = findLength(name);
    cout << checkPalindrome(name , len);
}