#include<bits/stdc++.h>
#include<iostream>
#include<limits.h>
using namespace std;

void printArray(int arr[] , int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int moveZeros (int arr[] , int n){
    int i=0;
   for(int j=0; j<n; j++){
    if(arr[j]!=0){
        swap(arr[j], arr[i]);
        i++;
    }
  }
}

int main (){
    int n;
    cout << " enter the size of the  array";
    cin >> n ;
    int num [100];
    cout << "enter the array" << endl;
    for(int i=0; i<n; i++){
        cin >> num[i] ;
    }
    moveZeros(num , n);
    printArray(num , n);
}