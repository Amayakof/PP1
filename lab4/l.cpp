#include <iostream>
#include<math.h>
using namespace std;
int main() {
    int n, m, sum=0;
    cin>>n>>m;
    int arr[n][m];
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"coordinates of min elements: "<<endl;
    
    for(int j=0; j<m; j++){
        int min=INT8_MAX;
        for(int i=0; i<n; i++){
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
        sum+=min;
        for(int i=0; i<n; i++){
            if(arr[i][j]==min){
                cout<<i+1<<";"<<j+1<<endl;
                for(int k=0; k<n; k++){
                    
                }
            }
        }
    }

    cout<<endl;
    cout<<"Their sum: "<<endl;
    cout<<sum;
    return 0;
}