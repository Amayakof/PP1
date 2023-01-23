//Given 3 numbers a, b and c. Sort this three numbers by descending order.
#include <iostream> 
using namespace std;
int main(){
    int a, b, c, max, med, min;
    cin>>a>>b>>c;
    if(a>b && b>c){
        max=a;
        med=b;
        min=c;
        cout<<max<<" "<<med<<" "<<min;
        return 0; 
    }
    else if(b>a && a>c){
                
        max=b;
        med=a;
        min=c;
        cout<<max<<" "<<med<<" "<<min;
        return 0; 
    }
    else if(a>c && c>b){
        max=a;
        med=c;
        min=b;
        cout<<max<<" "<<med<<" "<<min;
        return 0; 
    }
    else if(c>b && b>a){
        max=c;
        med=b;
        min=a;
        cout<<max<<" "<<med<<" "<<min;
        return 0; 
    }
    else if(c>a && a>b){
        max=c;
        med=a;
        min=b;
        cout<<max<<" "<<med<<" "<<min;
        return 0; 
    }
    else if(b>c && c>a){
        max=b;
        med=c;
        min=a;
        cout<<max<<" "<<med<<" "<<min;
        return 0; 
    }
}