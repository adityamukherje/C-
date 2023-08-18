#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main (){
//  int arr[3][4];
//  //taking input
//  for(int i=0; i<3; i++){
//     for(int j=0; j<4; j++){
//         cin >> arr[i][j];
//     }
//  }   

//  //out put

//     for(int i=0; i<3; i++){
//     for(int j=0; j<4; j++){
//         cout <<  arr[i][j] << " ";
//     }
//         cout << endl;
//  }  

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
}   