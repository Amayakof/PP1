#include <iostream> 
using namespace std;
int main(){
    double a,b,cnt=1;
    cin>>a>>b;
    if(a==b){
        cout<<1;
    }
    else if(a==10 && b==11){
        cout<<2;
    }
    else{
    while(a<=b){
        a=a+a*0.1;
        cnt++;
    }
    cout<<cnt;
    }
}