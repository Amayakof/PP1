// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<long long> v;
    int x;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        v.push_back(x);
    }
    int k;
    cin>>k;
    for(int i=0; i<v.size(); i++){
        if(i==k){
            continue;
        }
        cout<<v[i]<<' ';
    }
} 