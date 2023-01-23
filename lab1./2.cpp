//Code is constructed from two numbers n and m. The first number - age of the contestant. The second number 
//- sum of the first and the last digits of the 3-digit random number k given by administration of the finals. 
//Help Almat to construct the code.
#include <iostream>

using namespace std;
int main(){
    int n, m, k;
    cin>>n>>k;
    m=k%10 + k/100;
    cout<<n+m;
    return 0;
}
