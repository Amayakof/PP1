#include <iostream>
using namespace std;

int main()
{
	int n, cnt=0;
	cin >> n;
	for (int i = 2; i <= n; i++) {
		if(i == 0 || i == 1){
			continue; 
		}
		bool res = true;
		for( int j = 2; j < i/2 + 1; j++){
			if(i%j == 0){
				res = false;
			}
		}
		if(res == true){
			cout<<i<<" ";
			cnt++;
		}
		}
    cout<<endl<<cnt;
	return 0;
}
