#include <iostream>
using namespace std;
void ToUpper(char a){
    if(a>=97&&a<123){
        a=a-32;
    }
    cout<<a;
}
int main(){
    char a;
    cin>>a;
    ToUpper(a);
}