#include <iostream>
using namespace std;
//space is the key!
void class(string n, string m){

    if(n%2==0){
        half=n/2;
    }
    else{
        half=(n/2)+1;
    }
    if(absent>half){
        cout<<"Alikhan is angry";
    }
    else{
        cout<<"Alikhan is OK";
    }
}
int main(){
    int n;
    cin>>n;
    string all;
    cin>>all;

    int m;
    cin>>m;
    string present;
    cin>>present;

    cout<<"Missed students:"<<endl;
    class(n,m);

}