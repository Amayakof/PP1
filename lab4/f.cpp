#include <iostream>
using namespace std;
int main() {
    int n, maxx=INT8_MIN, a, b;
    cin>>n;
    int array[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>array[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(array[i][j]>maxx){
                maxx=array[i][j];
            }
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(array[i][j]==maxx){
                a=1+i;
                b=1+j;
                cout<<a<<" "<<b;
                return 0;
            }
        }
    }
}