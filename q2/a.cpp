//#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    string s;
    getline (cin, s);

    char c;
    cin >> c;
    int repeat;
    for(int i=0; i<s.size(); i++){
        if(s[i] == c){
            cout << i + 1 << endl;
            repeat = i;
            break;
        }
    }
    for(int i = s.size(); i>=0; i--){
        if(i != s.size() - repeat){
            if(s[i] == c){
                cout << s.size() - i + 1 << ' ';
            }
        }
    }

    return 0;
}