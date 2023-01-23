#include <iostream>
#include<math.h>
using namespace std;
int main() {
    int n, m, row = 1, column = 1;
    cin>>n>>m;
    int arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0; i<n; i++){
        int sum = 0;
        for(int j=0; j<m; j++){
            sum += arr[i][j];
        }
        cout<<"The sum of row number "<<row<<" is "<<sum<<endl;
        row++;
    }

    for(int j=0; j<m; j++){
        int sum = 0;
        for(int i=0; i<n; i++){
        sum += arr[i][j];        
        }

        cout<<"The sum of column number "<<column<<" is "<<sum<<endl;
        column++;
    }

}