#include<iostream>
using namespace std;
void maxvalue(string s){
    int max=INT8_MIN;
    for(int i=0; i<s.size(); i++){
        if(s[i]-48>=max){
            max=s[i]-48;
        }
    }
    cout<<max;
}
int main(){
    string s;
    cin>>s;
    maxvalue(s);
}