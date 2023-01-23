#include <iostream>
using namespace std;
bool found_not(int n, int k, int arr[]){
    for(int i=0; i<n; i++){
        if(arr[i]==k) return true;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;

    if(found_not(n, k, arr)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    


