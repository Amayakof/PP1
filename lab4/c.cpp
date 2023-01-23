
//Given a two-dimensional array of size n x m (n rows, m columns). 
//Write a program, which outputs count of negative numbers in array.
#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int array[n][m];

    int cnt=0;

        for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>array[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(array[i][j]<0){
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;

}