#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int findLength(char name[]){
    int count =0;
    for(int i=0; name[i] != '\0'; i++){
        count ++;
    }
    return count;
}

void reverseChar (char name[] , int n){
    int start =0;
    int end = n-1;

    while(start <= end){
       swap(name[start++] , name[end--]);
    }
}

int main(){
    char name [20];
    cout << "enter the name " << endl;
    cin >>name ;
    cout << "ur name is  " << name << endl;
    int len = findLength(name);
    cout << " length of the name is  " << len << endl;
    cout << "reverse of the name is  " << reverseChar(name , len);
} 