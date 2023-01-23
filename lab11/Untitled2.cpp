#include<bits/stdc++.h>
using namespace std;
int main(){
	int n ;
	cin >> n;
	vector<int> v;
	set<int> st;
	for(int i=0;i<n;i++){
		int x;
		cin  >> x;
		v.push_back(x);
		st.insert(x);
	}
	if(st.size()==v.size()){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}
