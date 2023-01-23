//If a triangle with sides x, y, z is valid, output is Valid,
// otherwise Invalid.
#include <iostream>
using namespace std;
int main(){
    long  x, y, z;
    cin>>x>>y>>z;
    if(x + y > z && y + z > x && x + z > y){
        cout<<"Valid";
    }
    else{
        cout<<"Invalid";
    }
}

