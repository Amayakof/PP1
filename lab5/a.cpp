#include <iostream>
using namespace std;
int main(){
    //You’re given string you need to output amount of 
    //capital and small letters in string.
    int cnts=0, cntb=0;
    string a;
    cin>>a;
    for(int i=0; i<=a.size(); i++){
        if(a[i]>=65 && a[i]<=92){
            cntb++;
        }
        else if(a[i]>=97 && a[i]<=122){
            cnts++;
        }
        else{
            continue;
        }
    }
    cout<<cnts<<" "<<cntb;
    return 0;
}