#include<bits/stdc++.h>
// #include <iostream>
// #include <map>
// #include<iterator>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    map <int, int> m;

    while(n--){
        int x;
        cin>>x;
        m[x]+=1;
    }

    map <int, int> :: iterator it;

    for(it = m.begin(); it!= m.end(); it++){
        if((*it).first==k){
            cout<<(*it).second;
            return 0;
        }
    }
    cout<<0;
    return 0;
}