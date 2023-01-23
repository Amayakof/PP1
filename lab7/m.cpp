#include<iostream>
using namespace std;
void my_recurs(int n){
    if(n==0){
        return;
    }
    my_recurs(n-1);
    cout<<n<<" ";;
}

int main(){
    int n;
    cin>>n;
    my_recurs(n);
}