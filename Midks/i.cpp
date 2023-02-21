#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n];
    int b[n];
    int max = INT8_MIN;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
                b[i] = max;
            }        
        }
        max = 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = b[i];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}