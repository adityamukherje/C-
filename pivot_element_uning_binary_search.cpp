#include<iostream>
#include<limits.h>
using namespace std;

int getPivot(int arr[] , int size){
    int start =0;
    int end = size -1;
    int mid = start + (end - start)/2;
    while(start<end){
        if(arr[mid] >= arr[0]){
            start = mid +1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}

 int main (){
    int size;
    cout << "enter the size of the array" << endl;
    cin >> size;
    int num [100];
    cout <<"enter the array" << endl ;
    for(int i=0; i<size; i++){
        cin >> num[i];
    }

    int pivot = getPivot(num , size);
    cout << pivot << endl;
 }