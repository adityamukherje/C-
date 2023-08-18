#include<iostream>
#include<limits.h>
using namespace std;

bool isPossible ( int arr[] , int n , int m , int mid){
    int studentCount = 1;
    int pageSum = 0;
    for(int i=0; i<n; i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            studentCount ++;
            if(studentCount > m || arr[i] > mid){
                return false;
            }
            pageSum == arr[i];
        }
    }
    return true;
}

int alocateBook ( int arr[] , int n , int m ){
    int start =0;
    int sum =0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    int end = sum;
    int ans = -1;
    int mid = start + (end - start)/2;
    while(start <= end){
        if(isPossible ( arr ,  n ,  m ,  mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid +1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
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
    int student = 2;

    int lowest = alocateBook(num , size , student);
    cout << lowest << endl;
    
}