#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float n, a, b; 
    cin >> a >> b;
    
    for (int i = -60; i < 60; i++) {
        if (pow(2, i) == b/a) {
            n = i;
            cout << "YES "<< n;
            return 0;
        }
    }
    cout << "NO";
}