#include<bits/stdc++.h>
using namespace std;
int main() {
	int A,B,K;
	cin >> A >> B >> K;
    int cnt = 0;
 
  for(int i = min(A,B);1<=i;i--){
		if((A%i) == 0 && (B%i) == 0) cnt++;
            if(cnt == K){
			cout << i << endl;
			return 0;
		}
	}
}
