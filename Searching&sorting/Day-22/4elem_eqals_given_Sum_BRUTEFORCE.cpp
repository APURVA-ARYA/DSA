#include<iostream>
using namespace std;

int foursum( int a[],int n,int s ){
int i,j,k,l,sum=0;
for(i=0;i<n-3;i++){
    for(j=i+1;j<n-2;j++){
        for(k=j+1;k<n-1;k++){
            for(l=k+1;l<n;l++){
                sum=a[i]+a[j]+a[k]+a[l];
                if(sum==s){
                    cout<<"qudruplet is: "<<a[i]<<a[j]<<a[k]<<a[l]<<endl;
                    return 1;
                }
               
            }
        }
    }
}
return 0;
}


int main(){

    int a[]={12,1,-3,-5,90,78,5,6,7,1,-3,-5};
    int n=sizeof(a)/sizeof(a[0]);
    int k=1;
    int chck=foursum(a,n,k);
    if(chck==0){
        cout<<"no quadruplet found "<<endl;
    }
else 
cout<<foursum(a,n,k);
}