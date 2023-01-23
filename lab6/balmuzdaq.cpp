#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int cnt=0;
    string bin;
    cin>>bin;

    for(int i=0; i<bin.size(); i++){
        if(bin[i]==48){
            cnt++;
        }
        if(bin[i]==49){
            if(cnt==0){
            cout<<"a";
            }
            else if(cnt>0 && cnt<26){
            cout<<char(97+cnt);
            }
            cnt=0;
        }
    }

    return 0;
}