#include <bits/stdc++.h> 
#include<iostream>
#include<limits.h>
#include<vector>
#include<array>
using namespace std;

void printArray (int arr[] , int n){
    for(int i=0 ;i<n;++i){
         cout<<arr[i] << " ";
    }
       cout << endl;
}


int bublesort (int arr[] , int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] > arr[j]){
                swap(arr[i] , arr[j]);
            }
        }
    }
}

int main(){

    int n;
    cout << "enter the size of the array" << endl ;
    cin >> n;
    int num [100];
    cout <<"enter the array" << endl;
    for(int i=0; i<n; i++){
        cin>>num[i];
    }
    bublesort (num, n);
    printArray (num, n);
}