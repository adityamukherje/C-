#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

// void rotateArray(vector <int> & nums , int k){
//     int temp;
//     vector<int> = temp(nums.size());
//     for(int i=0; i<nums.size(); i++){
//         temp((i+k)% nums.size()) = nums[i];
//     }
//     temp = nums;
// }


// not completed;;;;;;;;;;;;;;;


// leet code
  void rotate(vector<int>& nums, int k) {
        vector<int> temp(nums.size());
        for(int i=0; i<nums.size(); i++){
            temp[(i+k) % nums.size()] = nums[i];
        }
        nums = temp;
        
    }

//     void printArray(vector<int> & nums){
//         for(int i=0; i<nums.size() ; i++){
//             cout << nums[i] << " ";
//         }
//         cout << endl;
//     }




//     int rotateArray(int arr[] , int n , int k){
//         for(int i=0; i<n; i++){
//             arr[(i+k) %n] = arr[i];
//         }
//     }

//     void printArray(int arr[] , int n){
//     for(int i=0;i<n;i++){
        
//         cout << arr[i]  << " ";
//     }
//     cout << endl;
// }
    
//     int main(){
//     int size;
//     cout <<"enter the size of an array"<< endl;
//     cin >> size;
//     int value;
//     cout << "enter the value to rotate" << endl;
//     cin>>value;
//     vector<int> nums;
//     cout << "enter the array" << endl;
//     for(int i=0; i<size; i++){
        
//         cin >> size;
//         nums.push_back(size);
//     }

//     rotate(nums, value);
//     printArray(nums);

// }

// int main (){
//      int size;
//     cout <<"enter the size of an array"<< endl;
//     cin >> size;
//     int value ;
//     cout << "enter the value to rotate" << endl;
//     cin>>value;
//     int num[100] ;
//     cout << "enter the array" << endl;
//     for(int i=0; i<size; i++){
        
//         cin >> num[i];
//     }

//     rotateArray(num , size , value);
//     printArray(num , size);
// }