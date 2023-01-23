#include <iostream>
using namespace std;
//Find all exact squares of natural numbers that do not exceed a given number N.
int main(){
    int n, cnt=1;
    cin>>n;
    while(cnt*cnt <= n){
        cout<<cnt*cnt<<endl;
        cnt++;
    }
    return 0;
}
