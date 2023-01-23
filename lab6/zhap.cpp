#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    bool res=false;
    int n, m, q, cnt=0, cnt1=0;
    cin>>n>>m;
    int arr[n][m];
    //input part
    for(int i=0; i<n;i++){
        for(int j=0; j<n;j++){
            cin>>arr[i][j];
        }
    }
    cin>>q;
    int test[q];
    for(int i=0; i<q; i++){
        cin>>test[i];
    }
    //cnt pt
    for(int h=0; h<q; h++){
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(test[h]<=arr[i][j]){
                   cnt++;  
                }
            }
            if(cnt==m){
                res=true;
            }
            if(res==true){
            cnt1++;
            }
        }
        cout<<cnt1<<" ";
        cnt1=0;
        res=false;
    }
}