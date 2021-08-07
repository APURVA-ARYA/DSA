#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int index(int a[],int n,int x,int k){
int ans=-1,i=0;
while(i<n){
if(a[i]==x){
ans=i;
break;
}
else{
i=i+max(1,abs(a[i]-x)/k);
ans=i;}
}
return ans;
}


int main(){

int a[]={10,10,30,20,40,50,60,80,70};
int n=sizeof(a)/sizeof(a[0]);
int k=10;
int x=40;
cout<<index(a,n,k,x);
    return 0;
}