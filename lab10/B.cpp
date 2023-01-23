#include<bits/stdc++.h>
using namespace std;  
long long int gen(){
    static int i = -1;
    i++;
    long long int x = 1;
    for(int j = 1; j <= i; j++) x *= i;
    return x;
}
  
int main(){
    int n; 
	cin >> n;  
    vector< long long int> v(n + 1); 
    generate(v.begin(), v.end(), gen);
    for (vector<long long int> :: iterator it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    } 
}
