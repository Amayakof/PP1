#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> s;
	vector<string> v;
	for(int i=0;i<n;i++){
		string x;
		cin >> x;
		int f;
		cin >> f;
		v.push_back(x);
		s.push_back(f);
		
	}
	sort(s.begin(),s.end());
	sort(v.begin(),v.end());
	for(int i=0;i<n;i++){
		cout << v[i] << " " << s[i] << endl;
	}
}
