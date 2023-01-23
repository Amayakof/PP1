//#include<bits/stdc++.h>
#include <iostream>
#include <vector>
#include <map>
using namespace std;
void my_comp(vector<pair<string, pair<string,int>>> &v){
    
}

int main(){
    int n;
    cin >> n;
    vector<pair<string, pair<string,int>>> v;
    while(n--){
        string name;
        string day;
        int priority;
        cin >> name >> day >> priority;
        v.push_back({name, {day, priority}});
    }

    map <string, int> m;
    m["Monday"] = 1;
    m["Tuesday"] = 2;
    m["Wednesday"] = 3;
    m["Thursday"] = 4;
    m["Friday"] = 5;
    m["Saturday"] = 6;
    m["Sunday"] = 7;

    sort(v.begin(), v.end(), my_comp(v));

    return 0;
}