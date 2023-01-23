#include<bits/stdc++.h>

// #include <iostream>
// #include<vector>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    string s1 = "";
    bool isTruth=1;
    for(int i=0; i<s.size(); i++){
        if(s[i]!=' '){
            s1+=s[i];
            if(s[i]>='0' && s[i]<='9'){
                isTruth = 0;
            }         
        }

        else{
            if(isTruth==1){
                cout<<s1<<endl;
            }
            s1="";
            isTruth=1;
        }
    }
    
    if(isTruth==1){
        cout<<s1<<endl;
    }
}