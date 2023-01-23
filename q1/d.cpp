#include <iostream>
using namespace std;
int main(){
    int x, m;
    cin>>x;
    for(int i=1; i<=x; i++){
        if(x%i==0){
            m=i;
            if(m>1){
                cout<<m;
                break;
            }
        }
}}