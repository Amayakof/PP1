// #include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int gcd(int a, int b){
  while(b!=0){
    int c = a%b ;
      a=b;
      b=c;}
  return a;
}

int main () {
   int n;
   cin >> n ;
   int a[n];
   vector <int> v;
   for (int i=0;i<n;i++) {
      cin >> a[i];
   } for (int i = 0 ;i<n ;i++){
      for (int j=i+1;j<n;j++) {
         int ans = gcd(a[i],a[j]);
         v.push_back(ans);
      } sort(v.begin(),v.end(),greater<int>());
   } cout << v[0] ;
}