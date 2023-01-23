#include <iostream>
using namespace std;
void my_sorting(int n, int arr[], int t){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>=arr[j+1]){
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
}

void my_multiply(int n, int arr[], int maxx){
    for(int i=0; i<n; i++){
        if(arr[i]*arr[i+1]>=maxx){
            maxx=arr[i]*arr[i+1];
        }
    }
    cout<<maxx;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int t;
    int maxx=INT8_MIN;
    my_sorting(n, arr, t);
    my_multiply(n, arr, maxx);
    return 0;
}