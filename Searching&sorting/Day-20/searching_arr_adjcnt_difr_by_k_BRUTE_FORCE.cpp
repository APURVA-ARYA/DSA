#include<iostream>

using namespace std;

int index(int a[],int n,int k,int x){
    int i;
    for(i=0;i<n;i++){
        if(a[i]==x)
        return i;
    }
}

int main(){
int a[]={10,10,30,20,40};
int n=sizeof(a)/sizeof(a[0]);
int k=10;
int x=20;
cout<<index(a,n,k,x);
    return 0;
}