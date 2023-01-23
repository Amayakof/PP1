// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
void rev_at(vector<long long> v, int a, int b){
    for(int i=0; i<v.size(); i++){
        if(i==a){
            cout<<v[b]<<' ';
        }
        else if(i==b){
            cout<<v[a]<<' ';
        }
        else{
            cout<<v[i]<<' ';
        }
    }  
}

int main(){
    vector<long long> v;
    int x;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        v.push_back(x);
    }
    int a, b;
    cin>>a>>b;
    rev_at(v, a, b);
} 