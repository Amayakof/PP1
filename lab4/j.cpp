#include <iostream>
#include<math.h>
using namespace std;
int main() {
    int n, m, sum;
    cin>>n>>m;
    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            sum = i+j;
            if(sum % 2 == 0){
                cout<<arr[i][j]+1<<" ";
            }
            else{
                cout<<arr[i][j]-1<<" ";
            }
        }
        cout<<endl;
    }
}