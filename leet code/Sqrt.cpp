// 69. Sqrt(x)
// Easy
// 6.6K
// 4.1K
// Companies
// Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

// You must not use any built-in exponent function or operator.

// For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
 

// Example 1:

// Input: x = 4
// Output: 2
// Explanation: The square root of 4 is 2, so we return 2.
// Example 2:

// Input: x = 8
// Output: 2
// Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.


// class Solution {
// public:

//      int binarySearch(int number){
//          int start =0;
//          int end = number ;
//          int ans = -1;
//          long long int mid = start + (end - start)/2;
//          while(start <= end){
//              long long int squre = mid * mid;
//              if(squre == number){
//                  return mid;
//              }
//              if(squre < number){
//                  ans = mid;
//                  start = mid +1;
//              }
//              else{
//                  end = mid-1;
//              }
//              mid = start + (end - start)/2;
//          }
//          return ans;
//      }
//     int mySqrt(int x) {
//        return binarySearch(x);
//     }
// };








#include<iostream>
#include<limits.h>
using namespace std;

int BinarySearch(int number){
    int start = 0;
    int end = number;
    long long int mid = start + (end - start)/2;
    int ans =0;
    while(start <= end ){
        long long int squre = mid * mid;
        if(squre == number){
            return mid;
        }
        if(squre < mid){
            ans = mid;
            start = mid +1;
        }
         else {
            end = mid -1;
         }
         mid = start + (end - start)/2;
    }
    return ans;
}

int main (){
    int num;
    cout << "enter the number to find the squre root" << endl;
    cin >> num;

    int squreRoot = BinarySearch(num);
    cout << "the squre root of a number " << " " << num << " " << "is" << " " << squreRoot << endl;
}