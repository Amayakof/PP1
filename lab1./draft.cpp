#include <iostream>
using namespace std;
int main() {
  int n, even = 0, odd = 0;

  cin >> n;
   
  int a[n] ;
  
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++) {
    if (a[i] % 2 == 0) {
      even++;
    }
    else if (a[i] % 2 == 1){
      odd++;
    }
  }
  cout << even << " " << odd << endl;
  
  return 0;
}