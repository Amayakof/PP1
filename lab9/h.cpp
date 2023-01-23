// #include<bits/stdc++.h>
#include <iostream>
#include<map>
using namespace std;

int main(){
    int n;
    cin>>n;

    map<string, int> m;
    map<string, int> :: iterator it;

    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        // m[s] = t + 1;
        m.insert(make_pair(s, i+1));
        // m.insert({s, i+1});
    }

    return 0;
}