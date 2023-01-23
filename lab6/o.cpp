#include <iostream>
#include<string>
using namespace std;
void ticket(string s, int sum){
    for(int i=0; i<s.size(); i++){
        sum+=s[i]-48;
    }
    cout<<sum<<endl;//watafac
    cout<<s[s.size()-1];//correct
    // if(sum%s[s.size()-1]==0){
    //     cout<<"Yes";
    // }
    // else{
    //     cout<<"No";
    // }
}

int main(){
    string s;
    cin>>s;
    int sum;
    ticket(s, sum);
}