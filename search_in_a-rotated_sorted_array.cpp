#include<iostream>
#include<limits.h>
using namespace std;

//  not complete

int getPivot(int arr[] , int search){
    int start = 0;
    int end = size -1;
    int mid = start + (end - start)/2;

    while(start < end){
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

int binarySearch(int arr[] , int size , int key ){
     int start = 0;
    int end = size -1;
    int mid = start + (end - start)/2;

    while(start <= end){
        if(arr[mid == key]){
            return mid;
        }
        if(key > arr[mid]){
            start = mid +1;
        }
        else{
            end = mid-1
        }
         int start = 0;
         mid = start + (end - start)/2;
    }

}

int main(){
     int size;
    cout << "enter the size of the array" << endl;
    cin >> size;
    int num [100];
    cout <<"enter the array" << endl ;
    for(int i=0; i<size; i++){
        cin >> num[i];
    }
     int key;
    cout << "enter the key to search is the array";
    cin >> key;

    int pivot = getPivot(num , size);

    if(key > = num[pivot] && k <= num[size-1]){
        return binarySearch(num , size , key );
    }
    else{
        return binarySearch(num , 0 , pivot-1 , key);
    }
}