#include <iostream>
using namespace std;
int main(){
    int mid, end, fin, sum1, sum2;
    cin>>mid>>end>>fin;
    sum1 = mid + end + fin;
    sum2 = mid + end;
    if(sum1>=70 && sum2>=30 && fin>20){
        cout<<"YES!";
    }
    else{
        cout<<"NO.";
    }
    return 0;
}