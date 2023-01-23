// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define fr(i,n) for(int i=0;i<n;i++)
int main(){
 int n , m; 
 bool tr = 0;
 cin >> n >> m ;
 vector <string> ff ;
 vector <string> ss ;
 fr (i,n) {
    string sr ;
    cin >> sr ;
    ff.push_back(sr) ;
 } fr(i,m) {
    string st ;
    cin >> st;
    ss.push_back(st);
 } int cnt = 0;
 fr (i,ss.size()){
    fr(j,ff.size()){
        if (ss[i].find(ff[j])!=string::npos)
        cnt += 1000 ;
    } 
 } if (cnt >= 1000) {
    cout << "Emae , ballin" << endl ;
    cout << cnt ;
 } else cout << "nerabotaet" ;
}