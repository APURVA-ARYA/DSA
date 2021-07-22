#include<iostream>
#include<algorithm>
using namespace std;





int main(){
    int i=0,j=0,k=0,count=0;
int a[]={1,4,5,6,7};
int b[]={18,4,45,56,57};
int n=sizeof(a)/sizeof(a[0]);
int m=sizeof(b)/sizeof(b[0]);
int c[n+m];
while(i<n&&j<m){
if(a[i]>b[j]){
    c[k++]=b[j];
    j++;
}
else if(a[i]<b[j])
{c[k++]=a[i];
i++;}
else{
    c[k++]=b[j];
    i++;j++;
}

while(i<n){c[k++]=a[i++];}
while(j<m){c[k++]=b[j++];}
}
for(int k=0;k<n+m;k++){
    for(int l=k+1;l<n+m;l++){
        if(c[k]==c[l])
        k++;
    }
    sort(c,c+(m+n));
    cout<<"sorted aaray with duplicates removed is: "<<endl;
    cout<<c[k]<<" ";
    count++;
}
cout<<"count is "<<count<<endl;
    return 0;
}