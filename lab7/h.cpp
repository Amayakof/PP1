#include <iostream>

using namespace std;

void fibonacci(int n, int num){
    int fibi=1;
    int temp=0;
    if(n == 1){
        cout << 0;
    }
    else if(n==2){
        cout<<1;
    }
    else{
        for(int i=0; i<n-2; i++){
        num = temp + fibi;
        temp = fibi;
        fibi = num; 
        }
        cout<<num;
    }
}

int main(){
    int n;
    cin >> n;
    int num=0;
    fibonacci(n, num);
}