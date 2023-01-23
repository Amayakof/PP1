#include <iostream>
#include<math.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            arr[i][j]=j+1;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}