#include<iostream>
using namespace std;
void compare(int a[], int b, int n){
    bool exist=false;
    for(int i = 0; i < n; i++){
        if(a[i]==b){
            exist=true;
        }
    }
    if(exist==true){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }

}
int main(){
    int n, cnt=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int b;
    cin>>b;
    compare(a,b,n);
}