#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s; cin >> s;
    for(int i = 0; i < s.size(); i++){
        if (s[i] >= 'A' && s[i] <= 'Z'){
            cout<<char(tolower(s[i]));
        }
        else{
            cout<<s[i];
        }
    }
}