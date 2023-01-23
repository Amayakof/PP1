#include<iostream>
#include<string>
using namespace std;
void even_dig(string s, int cnt){
    for(int i=0; i<s.size(); i++){
        if(s[i]%2==0){
            cnt++;
        }
        else{
            continue;
        }
    }
    cout<<cnt;
}
int main(){
    string s;
    cin>>s;
    int cnt=0;
    even_dig(s, cnt);
}