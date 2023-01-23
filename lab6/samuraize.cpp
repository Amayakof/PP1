#include <iostream>
using namespace std;
int sum(int a, int b)
{
    a=a+1;
    if(a==b){
        return a;
    }
    return a + sum(a, b);
}

int main()
{
	int a, b;
    cin>>a>>b;
	cout << sum(a,b) + a;
}