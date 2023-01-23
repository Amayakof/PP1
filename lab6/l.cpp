#include <iostream>
using namespace std;
void dopustim(string s, int n, int cnt){
    bool valid=false;
    for(int i=0; i<s.size(); i++){
        if(s[i]+1==s[i+1] ^ s[i]-1==s[i-1]){
            cnt++;
        }
    }
    if(cnt==n){
        cout<<"Valid\n";
    }
    else{
        cout<<"Not valid\n";
    }
}

int main(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    int cnt=0;
    dopustim(s,n, cnt);
}