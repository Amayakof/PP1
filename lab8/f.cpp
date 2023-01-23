// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
void put_into(int n, int arr[]){
    int k, a;
    cin>>k>>a;
    for(int i=0; i<n; i++){
        if(i==k){
            cout<<a<<' '<<arr[i]<<' ';
        }
        else cout<<arr[i]<<' ';
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector <int> v;
    put_into(n, arr);
}