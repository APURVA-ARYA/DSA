#include<iostream>
#include<algorithm>
using namespace std;


int main(){
int a[]={1,2,4};
int n=sizeof(a)/sizeof(a[0]);
for(int i=0;i<n;i++){
cout<<next_permutation(a,a+n)<<" ";
}

    return 0;
}