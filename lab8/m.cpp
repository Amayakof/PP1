// #include<bits/stdc++.h>
#include <iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    vector<int>v1;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i+1]!=v[i]){
            v1.push_back(v[i]);
        }
    }
    int sum=0;
    for (int i = 0; i < v1.size(); i++)
    {
        sum+=v1[i];
    }
    cout<<sum;
    return 0;
}