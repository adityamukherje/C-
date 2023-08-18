#include <bits/stdc++.h> 
#include<iostream>
#include<limits.h>
#include<vector>
#include<array>
#include<deque>
using namespace std;

int main(){
    vector<int> v;
    cout << "capacity of an array" << " " << v.capacity() << endl;

    v.push_back(1);
    for(int i:v){
        cout << i <<" ";
    }
    cout << endl;
     cout << "capacity of an array" << " " << v.capacity() << endl;
      cout << "size of an array" << " " << v.size() << endl;

      v.push_back(2);
       for(int i:v){
        cout << i <<" ";
    }
    cout << endl;
      cout << "capacity of an array" << " " << v.capacity() << endl;
      cout << "size of an array" << " " << v.size() << endl;

      v.push_back(3);
       for(int i:v){
        cout << i <<" ";
    }
    cout << endl;
      cout << "capacity of an array" << " " << v.capacity() << endl;
      cout << "size of an array" << " " << v.size() << endl;

      v.push_back(10);
       for(int i:v){
        cout << i <<" ";
    }
    cout << endl;
      cout << "capacity of an array" << " " << v.capacity() << endl;
      cout << "size of an array" << " " << v.size() << endl;

      v.push_back(15);
       for(int i:v){
        cout << i <<" ";
    }
    cout << endl;
      cout << "capacity of an array" << " " << v.capacity() << endl;
      cout << "size of an array" << " " << v.size() << endl;

      v.push_back(20);
       for(int i:v){
        cout << i <<" ";
    }
    cout << endl;
      cout << "capacity of an array" << " " << v.capacity() << endl;
      cout << "size of an array" << " " << v.size() << endl;

      v.pop_back();
       for(int i:v){
        cout << i <<" ";
    }
    cout << endl;
      cout << "capacity of an array" << " " << v.capacity() << endl;
      cout << "size of an array" << " " << v.size() << endl;

        v.pop_back();
       for(int i:v){
        cout << i <<" ";
    }
    cout << endl;
      cout << "capacity of an array" << " " << v.capacity() << endl;
      cout << "size of an array" << " " << v.size() << endl;
}