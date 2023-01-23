#include<iostream>
#include<math.h>
using namespace std;
bool degree(int n, int m){
    if(n==1){
        return true;
    }
    while(n>m){
        m*=2;
    }
    if(m==n){
        return true;
    }
    else{
        return false;
    }
    return degree(n, m);
}
int main(){
    int n;
    cin>>n;
    int m=2;
    degree(n, m);
    if(degree(n,m)==true){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}