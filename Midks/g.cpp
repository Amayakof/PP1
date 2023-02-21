#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int n, m, ad;
    cin >> n >> m >> ad;
    if(ad==1){
        for(int i=1; i<=1001; i++){      
            if(pow(i,2)<=m && pow(i,2)>=n){
            cout<<pow(i,2)<<" ";
            }
        }
    }
    else{
        for(int i=1000; i>=n; i--){
            if(pow(i,2)<=m && pow(i,2)>=n){
            cout<<pow(i,2)<<" ";
            }
        }
    }   
}