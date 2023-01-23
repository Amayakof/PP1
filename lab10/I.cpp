#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int> v;
	vector<int> s;
	for(int i=0;i<n;i++){
		int c;
		cin >> c;
		v.push_back(c);
		s.push_back(c);
	}
	reverse(s.begin(),s.end());
	for(int i=0;i<n;i++){
		if(v[i]==s[i]){
			cout << "OK" << endl;
		}
		else{
			cout << "Instead of " << v[i] << " here was " << s[i] << endl;
		}
	}
}
