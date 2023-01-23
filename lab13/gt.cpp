#include <iostream>
#include <math.h>
using namespace std;

int n, m ,mode;
int main(){
	cin>>n>>m>>mode;
	if(mode==1){
	     for(int i=n; i<=m; i++){
	     	int k=sqrt(i);
	     	if(pow(k,2)==i){
	     		cout<<i<<" ";
			 }
		 }	
	}else{
		for(int i=m; i>=n; i--){
	     	int k=sqrt(i);
	     	if(pow(k,2)==i){
	     		cout<<i<<" ";
			 }
		 }
	}
}