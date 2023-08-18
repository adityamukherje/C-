#include<iostream>
#include<limits.h>
using namespace std;

bool search ( int arr [] , int size , int key){
    for(int i=0; i<size; i++){
        if(key == arr[i]){
            return 1;
        }
        
    }
    return 0;
}

int main (){
    int size;
    cout <<"enter the size of an array"<< endl;
    cin >> size;
    int num[100] ;
    int key ;
    cout <<"enter the key to find in an  array"<< endl;
    cin >> key;

     for(int i=0; i<size ; i++){
        cout << "enter the array" << endl;
        cin >> num[i];
    }

    bool found = search(num , 10 , key);
    if(found){
        cout << "Element found" << endl;
    }
    else{
        cout << "Element not found" << endl;
    }
}