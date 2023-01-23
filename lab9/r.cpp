// #include <bits/stdc++.h>
#include <iostream>
#include<vector>
using namespace std;
#define ll long long

string s;
char c;
vector <int> v;

int main(){
	cin>>s>>c;
	for(int i=0; i<s.length(); i++){
		if(s[i]==c){
			v.push_back(i);
		}
	}
	if(v.size()==0){
		return 0;
	}
	if(v.size()==1){
		cout<<v[0]+1;
		return 0;
	}
	if(v.size()>1){
		cout<<v[0]+1<<" "<<v[v.size()-1]+1;
		return 0;
	}
}

