#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int l, r;
    cin>>l>>r;
    for(int i=l; i<r+1; i++){
        cout<<s[i];
    }
    return 0;
}