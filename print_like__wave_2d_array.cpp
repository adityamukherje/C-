#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<int> printWave(vector<vector<int>> arr , int nRows , int mCols ){
    vector<int> ans;
    for(int i=0; i<mCols; i++){
        if(i & 0){
            // odd index -> buttom to top
            for(int j= nRows -1; j>=0; j--){
               
                ans.push_back(arr[j][i]);
            }
        }
        else{
            for(int j=0; j<nRows; j++){

                ans.push_back(arr[j][i]);
            }
        }
    }
    return ans;
}

int main (){

}