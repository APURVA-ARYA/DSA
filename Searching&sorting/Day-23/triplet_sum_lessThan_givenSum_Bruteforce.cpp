#include<iostream>

using namespace std;

	void countTriplets(int a[], int n, int t)
	{
	  int i,j,k,sum=0,count=0;

for(i=0;i<n-2;i++){
    for(j=i+1;j<n-1;j++){
        for(k=j+1;k<n;k++){
           sum=a[i]+a[j]+a[k];
           if(sum<t){
               cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
               count++;
           }
                
            
           
        }
    }
}

cout<<"total triplets with sum less than given sum is : "<<count<<endl;
	}








int main(){

int a[]={1,3,4,5,6,7,8,91,3,-9,-7,-3};
int n=sizeof(a)/sizeof(a[0]);
int k=8;
countTriplets(a,n,k);

    return 0;
}