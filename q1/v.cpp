#include<iostream>
#include <math.h>
using namespace std;
int main(){
    //Powers of 2, from 2 pow of 0 to 2 pow of n
    long n, p;
    cin>>n;
    for(int i = 0; i<=n; i++){
        p = pow(2, i);
        cout<<p<<endl;
    }
}