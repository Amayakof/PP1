#include <iostream>
#include <vector>
using namespace std;
int main () {
    int n;
    cin >> n;
    vector <int> v;
    for (int i=0; i<n; i++) {
        int k;
        cin >> k;
        v.push_back(k);
    }
    
    int a, a1;
    cin >> a >> a1;
    for (int i=0; i<v.size(); i++) {
        if (i==a) {
            for (int j=a1; j>=a; j--) {
                cout << v[j] << " ";
            }
            i += a1-a;
        }
        else cout << v[i] << " ";
    }
    return 0;
}