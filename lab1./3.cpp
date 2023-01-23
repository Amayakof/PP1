#include<iostream>
#include<math.h>
using namespace std;
int main(){
   //num -> 4bit
   //4bit -> rev
   //4bitrev -> num
   int n;
   cin>>n;

   int a= n%2;
    n=n/2;
   int b= n%2;
    n=n/2;
   int c= n%2;
    n=n/2;
   int d= n%2;

   int N = pow(2,3)*a + pow(2,2)*b + pow(2,1)*c + pow(2,0)*d;
   cout <<N;
   return 0;
}

