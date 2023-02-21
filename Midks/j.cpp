#include<iostream>
using namespace std;
int main(){
    int min=INT8_MAX, max=INT8_MIN;
    string s; 
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]<min){
            min=s[i];
        }
    }
    for(int i=0; i<s.size(); i++){
        if(s[i]>=max){
            max=s[i];
        }
    }
    cout<<char(max)<<" "<<char(min);
    return 0;
}