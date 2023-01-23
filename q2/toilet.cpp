//#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
    string s;
    int x;

int main(){
    int n;
    cin >> n;
    vector <string> v;
    vector <int> v1;

    while(n--){

        cin >> s;

        cin >> x;
        v.push_back(s);
        v1.push_back(x);
    }

    vector <string> fin;
    for(int i=0; i<v1.size()-1; i++){
        if(v1[i] <= i){
            fin.push_back(v[i]);
        }
        v1[i] -= 1;
    }
    cout << fin.size() << endl;
    for(int i = 0; i < fin.size(); i++){
        cout<< fin[i] << endl;
    }

    return 0;
}