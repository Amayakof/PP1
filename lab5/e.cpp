//int j=s.size(); j>=0; j--
#include <iostream>
using namespace std;
int main(){
    int sumodd=0, sumeven=0;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i+=2){
        sumeven+=s[i];
    }
    for(int i=1; i<s.size(); i+=2){
        sumodd+=s[i];
    }

    if(sumeven==sumodd){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}