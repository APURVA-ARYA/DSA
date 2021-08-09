#include<iostream>
using namespace std;

void findmaxsum(int a[],int n){
 int sum1=arr[0],sum2=0,res;
    for (int i=1;i<n;i++){
        if(sum1>sum2){
            res=sum1;
        }
        else
       res=sum2;

        sum1=sum2+arr[i];
        sum2=res;
    }
    if(sum1>sum2){
        cout<<"maxm sum is: "<<sum1<<endl;
    }
    else
    cout<<"maxm sum is : "<<sum2<<endl;

}

int main(){
int a[]={5,15,10,40,50,35,90,5};
int n=sizeof(a)/sizeof(a[0]);
findmaxsum(a,n);

    return 0;
}