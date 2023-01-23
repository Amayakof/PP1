#include <iostream>
using namespace std;
int main() {
    int n, cnt=0, cnt1=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]%2==0){
            cnt++;
        }
        else{
            cnt1++;
        }     
    }

    int even[cnt];
    for(int i=0; i<cnt; i++){
        for(int j=0; j<n; j++){
            if(a[j]%2==0){
                even[i]=a[j];
                cout<<even[i]<<" ";
            }
        }
        break;
    }

    int odd[cnt1];
    for(int i=0; i<cnt; i++){
        for(int j=0; j<n; j++){
            if(a[j]%2!=0){
                odd[i]=a[j];
                cout<<odd[i]<<" ";
            }
        }
        break;
    }
}