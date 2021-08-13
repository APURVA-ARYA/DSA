#include <bits/stdc++.h>

using namespace std;

countWays(int arr[], int m, int n)
        count[n+1]={0};
        count[0]=1;
      for (int i=1;i<=n;i++) 
        for (int j=0;j<m;j++) 
            if (i>=arr[j]) 
                count[i] += count[i - arr[j]];  
    return count[n];

int main(){

 int arr[] = {1,5,6,7,8,0,9}; 
    int m = sizeof(arr)/sizeof(arr[0]); 
    int n=7; 
    cout<< countWays(arr,m,n); 

}