#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool isPresent(int arr [][100] , int target , int row , int col){
         for(int i=0; i<row; i++){
        for(int j=0; j<col; j++) {
            if(arr[row][col] == target){
                return 1;
            }
        }
    }
    return 0;
}

int main (){
    int row; 
    cout << "ente rthe no. of rows" << endl;
    cin >> row;
    int col;
    cout<<"enter the number of columns"<<endl;
    cin>>col;

    int num [100][100];

// taking input

   for (int i=0; i<row; i++){
      for(int j=0; j<col; j++){
        cin >>num[i][j];
        } 
    }


// print
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++) {
            cout << num[i][j] << " ";
        }
        cout << endl;
    }

    cout << "enter the element to search" << endl;
    int target ;
    cin >>target;

    if(isPresent(num , target , row , col)){
        cout << "element found" << endl;
    }
    else{
        cout << "not found" << endl;
    }
}