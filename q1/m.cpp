#include <iostream>
using namespace std;
int main(){
    int n, a, d, ind, sum = 0;
    cin>>n>>a>>d;
    for(int i = 1; i<=n; i++){
        ind = a + (i-1) * d;
        cout<<ind<<endl;
        sum = sum + ind;
    }
    cout<<"sum: "<< sum;
}