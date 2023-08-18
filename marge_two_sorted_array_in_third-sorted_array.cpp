#include<bits/stdc++.h>
#include<iostream>
#include<limits.h>
using namespace std;

void printFirstArray(int arr[] , int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
}
void printSecondArray (int xyz[] , int y){
    for(int i = 0; i < y; i++){
        cout << xyz[i] << " ";
}
cout<<endl;
}

void printTwoSortedArray (int arr[] , int n , int xyz[] , int y){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    for(int i=0; i<y; i++){
        cout << " " <<  xyz[i] << " ";
    }
    cout << endl;
}

void printLastSortedArray(int abc[] , int size){
    for(int i=0; i<size; i++){
        cout <<abc [i] << " ";
    }
    cout << endl;
}

int margeFirstsortedArray (int arr [] , int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
}

int margeSecondSortedArray(int xyz[] , int y){
    for(int i=0; i<y-1; i++){
        for(int j=i+1; j<y; j++){
            if(xyz[i] > xyz[j]){
                swap(xyz[i] , xyz[j]);
            }
        }
    }
}

int margeThirdSortedArray(int arr[] , int n , int xyz[] , int y , int abc[]){
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<y){
        if(arr[i] < xyz[j]){
            abc[k] = arr[i];
            k++;
            i++;
        }
        else{
            abc[k]=xyz[j];
            k++;
            j++;
        }
    }
    while(i<n){
        abc[k] = arr[i];
        i++;
        k++;
    }
    while(j<y){
        abc[k] = xyz[j];
        k++;
        j++;
    }
    
}

int main (){
    int n;
    cout << " enter the size of the first array";
    cin >> n ;
    int num [100];
    cout << "enter the array" << endl;
    for(int i=0; i<n; i++){
        cin >> num[i] ;
    }
    cout << "sorting the 1st array" << endl;
    margeFirstsortedArray(num , n);
    printFirstArray(num, n) ;
    cout << endl;

    int y;
    cout << "enter the size of the second array" << endl;
    cin >> y;
    int xyz[100];
    cout << "enter the 2nd array" << endl;
    for(int i=0; i<y; i++){
        cin >> xyz[i];
    }

    cout << "shorting the 2nd array " << endl;
    margeSecondSortedArray(xyz, y );
    printSecondArray(xyz, y ) ;
    cout << endl;

    cout << "marging two array in the third array" << endl;
//    cout <<  margeFirstsortedArray(num , n) + margeSecondArray(xyz , y);
   printTwoSortedArray(num , n , xyz , y);

   cout << endl;

   cout << "finally sorting the third array" << endl;
   int size = n+y;
   int abc [] = {0};
   margeThirdSortedArray(num , n , xyz , y , abc );
   printLastSortedArray(abc , size);

}