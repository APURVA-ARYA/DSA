#include<bits/stdc++.h>
using namespace std;

void fib(int arr[],int n)
{
for(int i=2;i<=n;i++)
{  
 arr[i]=arr[i-1]+arr[i-2];
 }

}


int main()

{ int n;
 cout<<"Enter n to find the Fibonacci: ";
   cin>>n;
    int a[n+1];
       a[0]=0;
       a[1]=1;
    fib(a,n);
    cout<<a[n]<<endl;

}

 