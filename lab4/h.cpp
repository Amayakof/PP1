#include <iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n>>m;
    string arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            arr[i][j]=".";
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}