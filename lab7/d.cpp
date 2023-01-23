#include <iostream>
using namespace std;
void my_sum(string s){
    int sum=0;
    for(int i=0; i<s.size(); i++){
        sum+=s[i]-48;
    }
    cout<<sum;
}
int main(){
    string s;
    cin>>s;
    my_sum(s);
}