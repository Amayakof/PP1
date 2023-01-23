#include <iostream>
#include <map>
// #include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    map <string, int> m;
    map <string, int> :: iterator it;
    while(n--){
        cin>>s;
        m[s]+=1;
        for (it = m.begin(); it != m.end(); it++){
        if ((*it).second == 1) {
            cout << "new user added" << endl;
        }
        else{
            cout << "user already exists" << endl;
        }
    }
    }


}