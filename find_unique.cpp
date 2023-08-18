#include<iostream>
#include<limits.h>
using namespace std;

void printArray(int arr [] , int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
     cout << endl;
}

int findUnique(int arr [] , int size){
    int ans =0;
    for(int i=0; i<size; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

// int main (){
//     int size ;
//     cout<<"Enter the size of the array : ";
//     cin>>size;
//     int num [100];
//     cout<<"Enter the elements of the array : ";
//     for(int i=0; i<size; i++){
//         cin >> num[i];
//     }

//     findUnique(num , size);
//     printArray(num , size);
// }