#include<iostream>
#include<algorithm>
using namespace std;

void merge(int a[],int b[],int n,int m){
   
int i=n-1,j=0;
while(i>=0&&j<m){
if(a[i]>b[j]){
    a[i]=a[i]^b[j];
    b[j]=a[i]^b[j];
    a[i]=a[i]^b[j];
  
}
 
i--;j++;

}
cout<<" array first: "<<endl;
for ( int i = 0; i < n - 1; i++)
	{
	
		if (a[i] > a[i + 1])
		{
			int temp = a[i];
			a[i] = a[i + 1];
			a[i + 1] = temp;
			
			i = -1;
		}
    
	}
	for(i=0;i<n;i++){
      cout<<a[i]<<endl;
    }

cout<<" array second: "<<endl;
for ( int j=0; j <m-1; j++)
	{
	
		if (b[j] > b[j+1])
		{
			int temp = b[j];
			b[j] = b[j+1];
			b[j+1] = temp;
			
			j=-1;
		}
    
	}
	for(j=0;j<m;j++){
      cout<<b[j]<<endl;
    }

    }


int main(){

int a[]={-1,2,5,8,71};
        int b[]={4,6,7,10,11};
    int n= sizeof(a)/sizeof(a[0]);
    int m= sizeof(b)/sizeof(b[0]);
     merge(a,b,n,m);
    return 0;
}