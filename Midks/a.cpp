#include <iostream>
using namespace std;
int main() {
    int m,n, odd=0, even=0, cnt1=0, cnt2=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            even+=a[i];
            cnt1++;
        }
        else{
            odd+=a[i];
            cnt2++;
        } 
    }
    cout<<"Left hand magic power: "<<even*cnt1<<endl;
    cout<<"Right hand magic power: "<<odd*cnt2<<endl;
}