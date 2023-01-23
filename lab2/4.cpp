//min ver
#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;

    if (n<=k)
    {
    cout<< 2;
    return 0;
    }
    
    if(2 * n % k != 0)
    {
    cout << (2 * n)/k + 1;
    } 
    else
    {
    cout << (2 * n)/k;
    }
}