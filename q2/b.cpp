//#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> v;
    while(n!=0){
        int x;
        x = n%10;
        n = n/10;
        v.push_back(x);
    }
    int sum = 0;
    for(int i=0; i<v.size(); i++){
        sum += v[i];
    }
    cout << sum;


    return 0;
}