#include<iostream>
using namespace std;

void intersection(int a[],int n,int b [],int m){
    int i=0,j=0;
   


       for(i=0;i<n;i++){
           for(j=0;j<m;j++){
 
           if(a[i]==b[j]){
              cout<<b[j]<<"\n";
           }
           } 
       }
  


    
}
int main(){
 int a[]={2,3,4,5,11,80,1};
        int b[]={1,2,80};
    int n= sizeof(a)/sizeof(a[0]);
    int m= sizeof(b)/sizeof(b[0]);
    intersection(a,n,b,m);
    return 0;
}