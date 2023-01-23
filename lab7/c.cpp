#include<iostream>
using namespace std;
bool checkmate(int n, int arr[], int value){
    int cnt=0;
    for(int i=0; i<n; i++){
        if(arr[i]==value){
            return true;
        }
        else{
            cnt++;
        }
    }
    if(cnt==n){
        return false;
    }
    return checkmate(n, arr, value);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int value;
    cin>>value;
    if(checkmate(n, arr, value)==true){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}