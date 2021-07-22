#include<iostream>
#include<algorithm>
using namespace std;
 
 int trappingWater(int a[], int n){
  sort(a,a+n);
        int sum=0,gap=0;
        for(int i=0;i<n;i++){
           gap=a[n-2]-a[i];
           if(gap<0){
               continue;
           }
           else{
                sum=sum+gap;
           }
          
        }
        return sum;
 }

 int main(){
     int a[]={1,2,4,0,7};
     int n = sizeof(a) / sizeof(a[0]);
     cout<<"trapped water height is "<<trappingWater(a,n);
 }