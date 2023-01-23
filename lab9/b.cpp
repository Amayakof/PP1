// #include<bits/stdc++.h> 
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
    vector <int> v;
    vector <int> v1;
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
          v.push_back(arr[i]);  
        }
        else{
            v1.push_back(arr[i]);
        }
    }
    sort(v.begin(), v.end());
    sort(v1.begin(), v1.end());
    reverse(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<' ';
    }

    for(int i=0; i<v1.size(); i++){
        cout<<v1[i]<<' ';
    }

    return 0;
}