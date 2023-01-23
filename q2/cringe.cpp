//#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int cnt=0;
string s = "";

bool cringe( vector <string> v, string s){
    

    
}

int main(){
    int n;
    cin >> n;
    vector <string> v;
    while(n--){
        cin >> s;
        v.push_back(s);
    }

    int m;
    cin >> m;

    while(m--){
        cin >> s;
        cringe(v, s);
    }
    
    if(cringe(v,s)){
        cout << "Rakhmet, Yerla!Krasavchik!@erla1302";
    }
    else{
        cout << "Emae, balin" << endl;
        cout << cnt;
    }

    return 0;
}