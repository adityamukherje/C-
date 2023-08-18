#include<iostream>
#include<limits.h>
using namespace std;

int firstOccrence (int arr [] , int size , int key){
    int start =0;
    int end = size -1;
    int mid = start + (end - start)/2;
    int ans =-1;
    while(start<=end) {
        if(arr[mid] == key){
            ans = mid;
            end = mid -1;
        }
        if(key> arr[mid]){
            start=mid+ 1 ;
        }
        else{
            end = mid -1;
        }
        mid = start + (end - start)/2;
    }
    
}

int lastOccrence (int arr [] , int size , int key){
    int start =0;
    int end = size -1;
    int mid = start + (end - start)/2;
    int ans =-1;
    while(start<=end) {
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        if(key> arr[mid]){
            start=mid+ 1 ;
        }
        else{
            end = mid -1;
        }
        mid = start + (end - start)/2;
    }
    
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
    int key;
    cout << "enter the key to search is the array";
    cin >> key;

    int firstOccor = firstOccrence(num , size , key);
    int secondOccor = lastOccrence(num , size , key);

    cout << "the 1st occrence of the key " << " " << key << " " << "int the array is at the index " 
                                                      << " " << firstOccor << endl;

    cout << "the last occrence of the key " << " " << key << " " << "int the array is at the index " 
                                                      << " " << secondOccor << endl;
}