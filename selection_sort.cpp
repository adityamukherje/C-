#include <bits/stdc++.h> 
#include<iostream>
#include<limits.h>
using namespace std;

void printArray(int arr [] , int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl ;
} 

int selectionShort(int arr [] , int n){
    for(int i=0; i<n-1; i++){
        int minIndex = i;

        for(int j=i+1; j<n; j++){
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }

        if(minIndex != i){
            swap(arr[minIndex] , arr[i]);
        }
        
    }
}

int main(){
    int n;
    cout << "enter the size of the array";
    cin >> n;

    int num [100];

    cout <<"enter the array";

    for(int i=0; i<n; i++){
        cin>>num[i];
    }

   selectionShort (num , n);
   printArray (num , n);

}