#include<iostream>
#include<algorithm>
using namespace std;

  void findTwoElement(int a[], int n) {
    sort(a,a+n);
int count=0,temp=0,msng=0;
for(int i=0;i<n;i++){
  if(a[i]==a[i+1])
  {cout<<"a[i]"<<a[i]<<" "<<"a[i+1]"<<a[i+1]<<endl;
    temp=a[i];
    count++;}

if((a[i]!=a[i+1])&&(a[i]!=a[i]+1)){
msng=a[i];
}

  }
  if(count==2){
    cout<<"repeating elem is:"<<temp<<endl;
  }
  cout<<"missing elemnt is "<<msng;
    }



int main(){

int a[]={6,5,2,3,1,5};
int n=sizeof(a)/sizeof(a[0]);
 findTwoElement(a,n);
  return 0;
}