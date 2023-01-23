#include <iostream>
using namespace std;
void odd(string num, int cnt){
    for(int i=0; i<num.size(); i++){
        if(int(num[i])%2==0){
            cnt++;
        }
    }
    if(cnt==num.size()){
        cout<<"Valid\n";
    }
    else{
        cout<<"Not valid\n";
    }

}
int main(){
   string num;
   cin>>num;
   int cnt=0;
   odd(num, cnt); 
}