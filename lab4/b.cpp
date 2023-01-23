#include <iostream>
#include<math.h>
using namespace std;
int main() {
    int n, maxx=INT8_MIN, previous=INT8_MIN, cnt=0;
    cin>>n;
    int arr[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]>=maxx){
                maxx=arr[i][j];
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] > previous && arr[i][j] < maxx){
                previous = arr[i][j];
            }
            if(previous==maxx){
                 cnt++;
            }
        }
    }

    if(previous==-128){
         cout << "0" << endl;
     }

    else{
        cout << previous << endl;
    }
}