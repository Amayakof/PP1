#include <iostream> 
using namespace std; 
int main() { 
    string s; 
    cin >> s; 
    for(int i =0; i < s.size(); i++) { 
        if(int(s[i]) >= 97 && int(s[i]) < 122) { 
            cout << char(s[i] + 1 ); 
        } else if(int(s[i] == 122)) { 
            cout << char(s[i] - 25); 
        } 
    } 
    return 0; 
}