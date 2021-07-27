#include<iostream>


using namespace std;

int main(){
int a[]={1,2,3,-6};
int sum=0,start=0,end=0;
int n=sizeof(a)/sizeof(a[0]);

for(int i=0;i<n;i++){
    sum=a[i];
 for(int j=i+1;j<n;j++){
     sum+=a[j];
     if(sum==0){
         start=i;
         end=j;
     }
 }

}
cout<<"the given subarray is : "<<endl;

for(int i=start;i<=end;i++){
    cout<<a[i]<<"\t";
}

    return 0;
}