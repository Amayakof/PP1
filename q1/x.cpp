//Print “YES” (without quotes) if exactly two numbers are equal. 
//Otherwise print “NO” (without quotes)
#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    if(a == b && b == c){
        cout<<"NO";
    }

    else if(a == b || b == c || c == a){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
