#include <iostream>
using namespace std;
void oddV(string txt){
    for(int i = 0; i < txt.size(); i++) {
        if(txt[i] >= 97 && 122 >= txt[i]) {
            if(i % 2 == 0) {
                cout << char(txt[i] - 32);
            } else {
                cout << char(txt[i]);
            } 
        } else {
            cout << char(txt[i]);
        }
    }

}
int main(){
    string txt;
    cin>>txt;
    oddV(txt);
}