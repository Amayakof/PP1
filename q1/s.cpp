//If this triangle isosceles output Yes else No.
#include <iostream>
using namespace std;
int main(){
    int a, b, c;
    cin>>a>>b>>c;
    if(a == b ^ b == c ^ c == a){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
