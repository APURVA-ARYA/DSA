#include<iostream>


using namespace std;

int main(){
int a[]={1,2,3,56,-4,55,-3};
int k=52,sum=0,start=0,end=0;
int n=sizeof(a)/sizeof(a[0]);

for(int i=0;i<n;i++){
 for(int j=i+1;j<n;j++){
     sum=a[i]+a[j];
     if(sum==k){
         start=i;
         end=j;
         cout<<"start index is : "<<start<<"elemnt is "<<a[start]<<" end index is "<<end<<" nxt elem is "<<a[end]<<endl;
     }
 }

}

    return 0;
}