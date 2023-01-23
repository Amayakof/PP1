#include<iostream>
#include<math.h>
using namespace std;
void power(int n){
    int m=pow(2,n);
    cout<<m;
}
int main(){
    int n;
    cin>>n;
    power(n);
}