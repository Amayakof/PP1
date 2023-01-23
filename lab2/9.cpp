#include <iostream>
using namespace std;
//Among n numbers 
//you need to count the number of numbers that ends with 7.
int main(){
    int n;
    cin>>n;
    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(x % 10 == 7)
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}