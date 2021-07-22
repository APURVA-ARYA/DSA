#include<iostream>
using namespace std;

void maxminelem(int a[],int n){
    int maxm=0;int minm=INT16_MAX;
for(int i=0;i<n;i++){
    if(a[i]>maxm){
        maxm=a[i]; }
      if(a[i]<minm){
            minm=a[i];
        }   
 
}
 cout<<"max elem is: "<<maxm<<endl;
 cout<<"minm elem is: "<<minm<<endl;
}


int main(){
int a[]={-1,-4,2,-9,0};
int sizea=sizeof(a)/sizeof(a[0]);
maxminelem(a,sizea);


    return 0;
}