#include<iostream>
#include<string>
using namespace std;
bool polindrome(string s, string s1){
    if(s1==s){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    string s;
    cin>>s;
    string s1;
    s1=string(s.rbegin(), s.rend());

    if(polindrome(s, s1)==true){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

}