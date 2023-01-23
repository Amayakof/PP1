#include <iostream>
#include<math.h>
using namespace std;
int main() {
    int n, m, perfect;
    cin>>n>>m;
    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            float perfect=sqrt(arr[i][j]);
            if(pow(perfect,2)==arr[i][j]){
                cout<<sqrt(arr[i][j])<<" ";
            }
            else{
                cout<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}