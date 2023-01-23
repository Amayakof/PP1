#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string arr[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[i][j]=".";
        }
    }
    int m;
    m=n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j==m-1){
                cout<<i+1;
                m--;
            }
            else{
                cout<<arr[i][j];
            }
        }
        cout<<endl;
    }
    return 0;
}