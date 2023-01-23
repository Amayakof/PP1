#include <iostream> 
using namespace std; 
int main() { 
    string s; 
    cin >> s; 
    int sum1=0, sum2=0;

#include <iostream> 
using namespace std; 
int main() { 
    string s; 
    cin >> s; 
    string t = ""; 

    for(int i = s.size() - 1; i >= 0; i--) { 
        t+=s[i]; 
    } 
   if(s == t) { 
    cout << "YES"; 
   } else { 
    cout << "NO"; 
   } 
    return 0; 
}

    for(int i=0; i<(s.size()+1)/2; i++) { 
        sum1+=int(s[i]);
    } 
    for(int j=s.size()-1; j>s.size()/2; j-- ){

        sum2+=int(s[j]);
    }
    if(sum1-sum2>=97 && sum1-sum2<123){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0; 
}