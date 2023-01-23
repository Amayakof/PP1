#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
void hypo(float a, float b, float c){
    c=sqrt(pow(a,2)+pow(b,2));
    cout<<setprecision(4)<<c;
}
int main(){
    float a;
    cin>>a;
    float b;
    cin>>b;
    float c;
    hypo(a,b,c);
}