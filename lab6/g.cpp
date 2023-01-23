#include <iostream>
using namespace std;
void Vowels(char c){
    if (c=='a'|| c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U') {
        return;
    }
    else cout << c;
}

int main () {
    string c;
    getline(cin,c);
    for (int i=0; i<c.size(); i++) {
        Vowels(c[i]);    
    }
    return 0;
}