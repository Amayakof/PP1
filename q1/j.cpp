//You have amount of three products a,b,c and costs of three products costa,costb,costb and money that you have

//costs of products between 1 and 10000, amount of producnts between 1 and 100
#include <iostream>
using namespace std;
int main(){
    int a, b, c, costa, costb, costc, money;
    cin>>a>> b>> c>> costa>> costb>> costc>> money;
    a = a * costa;
    b = b * costb;
    c = c * costc;
    if(a+b+c <= money){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
