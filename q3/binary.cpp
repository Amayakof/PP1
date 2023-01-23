#include <iostream>
#include<math.h>
using namespace std;
void binary(string s, int sum){
    reverse(s.begin(), s.end());
    for(int i=0; i<s.size(); i++){
        if(s[i]-48==1){
            sum+=pow(2,i);
        }
        else{
            continue;
        }
    }
    cout<<sum;
}

int main(){
    string s;
    cin>>s;
    int sum=0;
    binary(s, sum);
}
