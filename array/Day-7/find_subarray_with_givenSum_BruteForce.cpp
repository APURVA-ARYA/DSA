#include<iostream>
using namespace std;

int main(){
int a[]={1,3,4,5,6,-11,-2};
int n=sizeof(a)/sizeof(a[0]);
int i,j,sum=0,k,start,end;
k=0;


for( i=0;i<n-1;i++){
    sum=a[i];
    for(j=i+1;j<n;j++){
sum=sum+a[j];
if(sum==k){
     start=i;
    end=j;
}
    }
  
}
cout<<"sub array with given sum k= "<<k<<" is :"<<endl;
for(i=start;i<=end;i++){
    cout<<a[i]<<" ";
}

    return  0;
}