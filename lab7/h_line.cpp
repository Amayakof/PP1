#include <iostream>

using namespace std;

void fibonacci(int n){
    int fibi=1;
    int temp=0;
    if(n == 0){
        cout << 0;
    }
    // else if(n==1){
    //     cout<<0<<' '<<1;
    // }

    cout<<temp<<' '<<fibi<<' ';
    
    for(int i=0; i<n-2; i++){
        int num;
        num = temp + fibi;
        cout<<num<<' ';
        temp = fibi;
        fibi = num; 
    }
}

int main(){
    int n;
    cin >> n;
    fibonacci(n);
}