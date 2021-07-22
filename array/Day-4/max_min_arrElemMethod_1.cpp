#include<algorithm>
#include<iostream>

using namespace std;

void minmax(int a[],int n){
    int maxm=0;int minm=INT16_MAX;
    for(int i=0;i<n;i++){
      maxm= max(maxm,a[i]);
      minm=min(minm,a[i]);
      
    }

cout<<"maxm value is "<<maxm<<endl;
cout<<"minm value is "<<minm<<endl;


 
}

int main(){

    int a[]={1,-7,-6,-4,9,10};
    int n= sizeof(a)/sizeof(a[0]);
   minmax(a,n);

    return 0;
}