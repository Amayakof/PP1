#include<iostream>
using namespace std;
int main(){
    bool penalty = true;
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int max;
    cin>>max;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]>max){
                penalty = false;
            }
        }
        if(penalty==false){
            cout<<"Penalty!";
            return 0;
        }
    }   
    cout<<"No penalty for today.";
}