#include <iostream> 
using namespace std;
int main(){
    int m, s, a, b;
    cin>>m>>s>>a>>b;

    if(m >= a && s >= b)
    {
        cout<<"Yes";
    }
    
    else if(s<b && m>a)
    {
        m=m-a;
        b=b-s;
        if(m>=b)
        {
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
    }

    else{
        cout<<"No";
    }

}