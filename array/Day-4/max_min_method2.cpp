#include<iostream>
#include<algorithm>
using namespace std;

void minmax( int arr[],int n){
int max=0;
int a=9,b=10;
 max=a^b;
        b=a^b;
        a=a^b;
    for(int i=0;i<n;i++){
      
       
    }
    cout<<"a = "<<a;
    cout<<"b = "<<b;
    cout<<"maxm is "<<max;
}

int main(){
      int arr[]={1,-7,-6,-4,9,10};
    int n= sizeof(arr)/sizeof(arr[0]);
   minmax(arr,n);
    return 0;
}