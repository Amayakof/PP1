#include <iostream>
#include <math.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int m = sqrt(n);
    if( m * m != n)
    {
        cout<<"No"<<endl;
    }
    else
    {
        cout<<"Yes"<<endl;
    }
    return 0;
}
