#include <iostream>
using namespace std;
int main () {
    int n, cnt = 0;
    string s;
    cin>>s>>n;
    for(int i = 0; i<s.size(); i++){
        if(s[i]>=48 && s[i]<=57){
            cnt++;
        }
    }
    if(cnt==n){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}