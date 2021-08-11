#include<iostream>

using namespace std;

void printFirstItemThenFirstHalfThenSayHi100Times(int a[],int n){
cout<<"first elemnt is "<<a[0]<<endl;
int i=0;
int middle=n/2;
while(i<=middle){
    cout<<a[i]<<" ";
    i++;
}
cout<<endl;
for(i=0;i<100;i++){
    cout<<"Hi"<<endl;
}
}


int main(){
int a[]={1,2,3,4,5,67,89,90,32,21,65,-9,34,67,-9,8,9,-1};
int n=sizeof(a)/sizeof(a[0]);
printFirstItemThenFirstHalfThenSayHi100Times(a,n);
    return 0;
}