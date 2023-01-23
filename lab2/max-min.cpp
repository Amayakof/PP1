#include <iostream>
using namespace std;
int main(){
    int n, maxx = INT_MIN, minn = INT_MAX;
    cin>>n;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if (x>maxx)
        {
            maxx = x;

            int a= x%2;
            x=x/2;
            int b= x%2;
            x=x/2;
            int c= x%2;
            x=x/2;
            int d= x%2;



        }
        if(x<minn)
        {
            minn = x;

            int a= x%2;
            x=x/2;
            int b= x%2;
            x=x/2;
            int c= x%2;
            x=x/2;
            int d= x%2;
        }

    maxx = pow(2,3)*a + pow(2,2)*b + pow(2,1)*c + pow(2,0)*d;
    
         
    }
    cout<<maxx & minn;
}
