#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int rowWiseSum(int arr[][100] , int row , int col){
   
    for(int i=0; i<row; i++){
        int rowSum =0 ;
        for(int j=0; j<col; j++){
            rowSum= rowSum + arr[i][j];
        }
        cout << rowSum << " ";
    }
    cout << endl;
}

int colWiseSum(int arr[][100] , int row , int col){
   
    for(int i=0; i<col; i++){
        int colSum =0 ;
        for(int j=0; j<row; j++){
            colSum= colSum + arr[i][j];
        }
        cout << colSum << " ";
    }
    cout << endl;
}




int main (){
    int row; 
    cout << "ente rthe no. of rows" << endl;
    cin >> row;
    int col;
    cout<<"enter the number of columns"<<endl;
    cin>>col;

    int num [100][100];

    cout << "enetr the array" << endl;

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

    cout << " row wise sum of the array is " << endl;
    rowWiseSum(num , row , col);

    cout << " col wise sum of the array is " << endl;
    colWiseSum(num , row , col);

    
} 