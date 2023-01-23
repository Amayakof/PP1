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
    reverse(v.begin(), v.end());
    for(int i=0; i<n; i++){
        cout<<v[i]<<' ';
    }
} 