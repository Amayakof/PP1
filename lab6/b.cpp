#include <iostream>
#include <math.h>
using namespace std;
void sum(double d[], double a[], double b[], int n){
    for(int i=0; i<n; i++){
        d[i]=abs(a[i]-b[i]);
    }

    for(int i=0; i<n; i++){
        cout<<d[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    double d[n];
    double a[n]; 
    double b[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    sum(d, a, b, n);
}