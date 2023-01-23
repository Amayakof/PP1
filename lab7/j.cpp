#include <iostream>
#include <string>
using namespace std;
void digits(string s){
    int sum=0;
    for(int i=0; i<s.size(); i++){
        sum+=(s[i]-48)/2;
    }
    cout<<sum;
}
int main(){
    string s;
    cin>>s;
    digits(s);
}