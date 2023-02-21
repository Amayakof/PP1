#include <iostream>
#include<math.h>
using namespace std;
int main() {
    string s;
    cin>>s;

    int sum=0;
    for(int i=1; i<s.size(); i++){
        sum+=(s[i]-48);
    }

    int modulo=sum-abs(sum/10)*10;
    
    if(modulo==int(s[0]-48)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}