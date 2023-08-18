#include<iostream>
#include<limits.h>
using namespace std;

int binarySearch(int arr[] , int size , int key){
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;
    while (start<=end) {
        if(arr[mid] == key){
            return mid;
        }
        if(key>arr[mid]){
            start = mid+1;
        }
        else{
            mid = end-1;
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
   int index =  binarySearch(num , size , key);
   cout << "the key" << " " << key << " " << "is in the index " << " " << index << endl;
}