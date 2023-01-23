#include <iostream>
using namespace std;
void my_yulian(string s){
    for(int i=0; i<s.size(); i++){
        if(s[i]+1>='a' && s[i]+1<'z'){
            s[i]=s[i]+1;
        }
        else if(s[i]+1>='A' && s[i]+1<'Z'){
            s[i]=s[i]+1;            
        }
        else if(s[i]+1>'z' || s[i]+1>'Z'){
            s[i]=s[i]-25;
        }
        else{
            continue;
        }
    }
        for(int i=0; i<s.size(); i++){
            cout<<s[i];
        }
}
int main(){
    string s;
    getline(cin, s);
    my_yulian(s);
}