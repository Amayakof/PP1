#include <iostream>
#include <math.h>
using namespace std;
int main(){
    //Print ’Perfecto’, if given number n is perfect square, otherwise print ’Simple’.
    long n, m;
    cin>>n;
    m = n;
    n = sqrt(n);
    if(pow(n,2) == m){
        cout<<"Perfecto";
    }
    else{
        cout<<"Simple";
    }
    }