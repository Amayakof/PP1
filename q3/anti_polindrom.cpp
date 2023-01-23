#include <iostream>
#include<string>
using namespace std;
void anti_polindrom(string s){
    int cnt=0;
    for(int i=s.size(); i>=0; i--){
        string s1;
        s1=s;
        reverse(s1.begin(), s1.end());
        if(s==s1){
            s.pop_back();
            if(i==0){
                cout<<0;
            }
        }
        else{
            cout<<i;
            break;
        }
    }
}
int main(){
    string s;
    cin>>s;
    anti_polindrom(s);
}