#include<algorithm>
#include<iostream>
using  namespace std;


void threeWayPartition(int a[], int n, int x, int y){
    
     int smallest=0,largest=n-1,i=0;

while(i<n) {

if(a[i]<x){
    swap(a[smallest],a[i]);
    smallest++;
    i++;
    }
else if(a[i]>y){
swap(a[largest],a[i]);
largest--;
i++;
    }
else
i++;

}
cout<<"partioned array is :"<<endl;
for(int i=0;i<n;i++){
    cout<<a[i]<<"\t";
       }

}
int main(){
    int x=3,y=4;
 int a[]={11,12,3,-1,-2,0,1,2,4,5,10,7,13};
    int n= sizeof(a)/sizeof(a[0]);
     threeWayPartition(a,n,x,y);
    return 0;
}