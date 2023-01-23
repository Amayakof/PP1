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
    reverse(v.begin(), v.end());
    int k;
    cin>>k;
    int sum=0;
    for(int i=0; i<k; i++){
        sum+=v[i];
    }
    cout<<sum;
    return 0;
}