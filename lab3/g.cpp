#include <iostream>
using namespace std;
//Given an array consisting of integers. Write a program, 
//which will change all maximal elements to minimal elements of the array. 
//Look to sample to better understand the conditions.

int main(){
    int n,k,m,x,h;
    cin >> n;
    k=0;
    h=1000000001;
    int array[n];
    int a[n];
    for (int m=0; m<n; m++) 
    {
        cin >> array[m];
        if (k < array[m]) 
        {
            k = array[m];
        }
        if (h > array[m]) 
        {
            h = array[m];
        }
    }
    
    for(int x=0; x<n; x++){
        if (array[x] == k){
            array[x] = h;
        }
        cout << array[x] << " ";
    }

    return 0;
}