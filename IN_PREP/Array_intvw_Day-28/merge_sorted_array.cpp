#include<bits/stdc++.h>

using namespace std;

void mergedarr(int a[],int n,int b[],int m){
int merge[n+m];
int i=0,j=0,k=0;
while(i<n || j<m){
 if(a[i]<b[j]){
     merge[k++]=a[i++];    
 }
 else
 merge[k++]=b[j++];

}
for(int p=0;p<(n+m);p++){
    cout<<merge[p]<<" ";
}

}

int main(){
int a[]={1,2,3};
int b[]={45,56,78};
int n=sizeof(a)/sizeof(a[0]);
int m=sizeof(b)/sizeof(b[0]);
mergedarr(a,n,b,m);
    return 0;
}

