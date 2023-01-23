// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
void ascending(vector<int> v){
    for(int i=0; i<v.size(); i++){
        if(v[i]==0){
            continue;
        }
        cout<<v[i]<<' ';
    }
}
int main(){
    vector<int> v;
    int x;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){

        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    ascending(v);
} 