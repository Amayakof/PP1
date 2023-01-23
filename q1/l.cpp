#include <iostream>
using namespace std;
int main () {
    int z;
    cin >> z;
    int m=1;
    int p=500000;
    int have;
    int save, save1;
    save1=((z*30)/100);
    while (save1<p){
        have=((z*10)/100)+z;
        z=have;
        save=((z*30)/100);
        save1 += save;
        m++;
        if (save1>=p) {
            cout << m;
            return 0;
        }

    }
    cout << m;
}