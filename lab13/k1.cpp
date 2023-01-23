#include <iostream>
using namespace std;
int main(){
    int n, cnt=0;
    cin>>n;
    int arra[n];
    int arrb[n];
    for(int i=0; i<n; i++){
        cin>>arra[i];
    }

    for(int i=0; i<n; i++){
        cin>>arrb[i];
    }
    int t;
    cin>>t;
    for(int i=0; i<n; i++){
        if(arra[i]<=t && arrb[i]>=t){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;

}