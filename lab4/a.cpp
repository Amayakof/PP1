#include <iostream>
using namespace std;
int main() {
    //Given a two-dimensional array n x n. Find the largest number in array.
    int n, maxx=INT8_MIN;
    cin>>n;
    int arr[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]>=maxx){
                maxx=arr[i][j];
            }
        }
    }
    cout<<maxx;
}