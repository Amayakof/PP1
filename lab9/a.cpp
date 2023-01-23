// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

bool comp(pair<int, int>& a, pair<int, int>& b){
    if(a.first == b.first){
        return a.second < b.second;
    }
    return a.first < b.first;
}

int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> v;//вектор пар

    while(n--){
        int x, y;
        cin >> x >> y;
        v.push_back({x,y});
    }
    sort(v.begin(), v.end(), comp);//comp->uslovie
    for(auto i : v){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
    
}