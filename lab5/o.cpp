#include <iostream>
using namespace std;
int main () {
    int max=INT8_MIN;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(int(s[i])>=max){
            max=int(s[i]);
        }
    }
    cout<<char(max);
}