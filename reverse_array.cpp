#include<iostream>
#include<limits.h>
using namespace std;

void printArray(int arr[] , int n){
    for(int i=0;i<n;i++){
        
        cout << arr[i]  << " ";
    }
    cout << endl;
}

int reverse(int arr[] , int n){
    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(arr[start] , arr[end]);
        start ++;
        end --;
    }
}

int main (){
    int size;
    cout <<"enter the size of an array"<< endl;
    cin >> size;
    int num[100] ;
    cout << "enter the array" << endl;
    for(int i=0; i<size; i++){
        
        cin >> num[i];
    }

     reverse (num , size) ;
   

    printArray (num , size);
   

}