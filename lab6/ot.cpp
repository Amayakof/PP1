#include <iostream>
using namespace std;

void Luckyticket(int n) {
    int sum = 0;
    int a;
    int b;
    b = n % 10;
    while(n!=0) {
        sum += n%10;
        n /= 10;
    }
    a = sum % b;
    if(a == 0) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}
int main() {
    int n;
    cin >> n;
    Luckyticket(n);
    return 0;
}