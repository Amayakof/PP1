// #include<bits/stdc++.h>
#include <iostream>
#include <map>
using namespace std;

int main(){
    int n;
    cin>>n;
    map <string, int> m;
    map <string, int> :: iterator it;   
    while(n--){
        string s;
        int a;
        m[s] += a;
    }

    for(it = m.begin(); it!=m.end(); it++){
        cout<< it-> first << " " << it-> second <<endl;
    }
    return 0;
}