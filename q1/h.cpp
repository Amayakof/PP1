#include <iostream>
using namespace std;
int main(){
    float n, m, b, all;
    cin>>n>>m>>b;
    all = n+m;
    all = all * 0.1;
    if(b>=all)
    cout<<"Boris, you are punished!";
    else{
        cout<<"You are my sweet baby";
    }
    return 0;
}