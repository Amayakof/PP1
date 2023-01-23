#include<iostream>
#include<limits.h>
using namespace std;

void maxel(int max, int a[]){
    for(int i=0;i<4; i++){
        if(a[i]>=max){
            max=a[i];
        }
    }
    cout<<max;
}
int main(){
    int max=INT_MIN;

    int a[4];
    for(int i=0; i<4; i++){
        cin>>a[i];
    }
    maxel(max, a);
}