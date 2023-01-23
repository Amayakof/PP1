#include<iostream>
using namespace std;
int arr[1001][1001];
void Matrix(int n, int m){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n, m;
    cin >> n >> m;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> arr[i][j];
        }
    }
    Matrix(n, m);
}