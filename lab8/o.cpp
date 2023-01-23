// #include<bits/stdc++.h>
#include <iostream>
#include<vector>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<char>v;
    
    for(int i=0; i<s.size(); i++){
        v.push_back(tolower(s[i]));
    }

    sort(v.begin(), v.end());

    vector<char>v1;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i+1]!=v[i]){
        v1.push_back(v[i]);
        }
    }

    cout<<v1.size()<<endl;

    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v1[i]<<' ';
    }
    return 0;
}