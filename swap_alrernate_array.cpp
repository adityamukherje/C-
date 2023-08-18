#include<iostream>
#include<limits.h>
using namespace std;

void printArray(int arr [] , int size){
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl ;
} 

int swapAlternate(int arr [] , int size){
    for(int i=0 ; i<size; i+=2){
        if(i+1 < size){
            swap(arr[i] , arr[i+1]);
        }
    }
}

int main(){
    int size;
    cout << "enter the size of the array";
    cin >> size;
    int num [100];

    cout <<"enter the array" << endl;

    for(int i=0; i<size; i++){
        cin  >> num[i];
    }



    cout << "the alter nate of the given array is" << endl;
    swapAlternate (num , size);
    printArray (num , size);
}