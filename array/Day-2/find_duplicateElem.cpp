#include<iostream>
using namespace std;

void duplicateElem( int a[],int l){
for(int i=0;i<l;i++){
  for(int j=i+1;j<l;j++)
  if(a[i]==a[j]){
      cout<<"\n duplicate elem is : "<<a[i]<<endl; 
      break;
  }
 
}
 
}

int main(){

int arr[]={ 1,2,3,3,4,4};
duplicateElem(arr,6);

    return 0;
}