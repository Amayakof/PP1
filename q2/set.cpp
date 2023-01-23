//#include<bits/stdc++.h>
#include <iostream>
#include <set>
using namespace std;

int main(){
    set <int> sed;
    for(int i=0; i<4; i++){
        int x;
        cin >> x;
        sed.insert(x);
    }

    set <int> :: iterator it = sed.begin();
    for(it = sed.begin(); it!= sed.end(); it++){
        cout << *it << ' ';
    }


    return 0;
}