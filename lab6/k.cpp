#include <iostream>
using namespace std;
void Summ(string s, int sum){
    for(int i=0; i<s.size(); i++){
        sum+=s[i]-48;
    }
    cout<<sum;
}
int main(){
    string s;
    cin>>s;
    int sum=0;
    Summ(s, sum);
}