#include <iostream>
using namespace std;
int main(){
    int n, a, b, c, d, sum1, sum2;
    cin>>n;
    a = n/1000;
    b = (n/100)%10;
    c = (n/10)%10;
    d = n%10;
    sum1 = a*b*c*d;
    sum2 = a+b+c+d;
    cout<<sum1 + sum2;


    return 0;
}