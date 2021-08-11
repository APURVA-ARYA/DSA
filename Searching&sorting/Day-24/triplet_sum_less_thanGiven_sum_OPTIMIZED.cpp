#include<iostream>
#include<algorithm>

using namespace std;

	void countTriplets(int a[], int n, int t)
	{
	  int i,j,k,sum=0,count=0;
sort(a,a+n);
for(i=0;i<n-2;i++){
   j=i+1;
   k=j+1;
  
   while(j<k){
 sum=a[i]+a[j]+a[k];
            if(sum<t){
                count=count+(k-j);
                j++;
}  
else
k--;

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