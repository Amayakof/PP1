#include <iostream>
using namespace std;
int main () {
    string s;
    string t;
    int cnt=0;
    cin>>s>>t;
    // if(s.lenght==t.length){

    // }
    for(int i = 0; i<s.length(); i++){
        if(s[i]==t[i]){
            cnt++;
        }
    }
    if(cnt == t.length()){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}