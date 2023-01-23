#include<iostream>
using namespace std;
bool cheater(int n, int k, int arr[]){
    int cnt=0;
    for(int i=0; i<n-1; i++){
         if(int(arr[i+1])-int(arr[i])<=k){
            cnt++;        
         }
    }
    if(cnt!=0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n, k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    if(cheater(n, k, arr)==true){
        cout<<"cheater";
    }
    else{
        cout<<"no";
    }
}