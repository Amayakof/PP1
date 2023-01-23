// #include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

struct student{
    string name;
    string sname;
    double gpa;
    string mname;
}
;
int main(){
    // s1.name = "bob";
    // s1.mname = "jr."
    // s1.gpa = 2.4;
    // s1.sname = "Smith";

    vector <student> v;
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        student s;
        
        cin>>s.name >> s.mname >> s.sname >> s.gpa;
        v.push_back(s);
    }

    for(int i=0; i<n; i++){
        cout<< v[i].gpa << endl;
    }

    return 0;
}