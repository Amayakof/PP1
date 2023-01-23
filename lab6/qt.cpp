#include<iostream>
#include<cmath>
using namespace std;
float my_Function(float a, float b){
float c= (b*100) / a;
return c;
}
int main(){
    float a,b;
    cin>>a>>b;
    cout<<my_Function(a,b);
    return 0;
}