#include<iostream>
#include<algorithm>
using namespace std;


int doUnion(int a[],  int n,int b[], int m)
{
    int c[m+n],i=0,j=0,k=0,count=0;
while(i<n &&j<m){
if(a[i]>b[j]){
    c[k++]=b[j];
    j++;
   
}               
                                           
else if(a[i]<b[j])
{c[k++]=a[i];
i++;  }
else{
    c[k++]=b[j];
    i++;j++;
}

while(i<n){c[k++]=a[i++];}
while(j<m){c[k++]=b[j++];}
}



for(int p=0;p<k;p++){
    // cout<<"value of p :"<<p<<endl;
    for(int l=p+1;l<k;l++){
        if(c[p]==c[l])
        p++;
    }
    sort(c,c+(m+n));
    
       
    
    count+=1;
}
return count;
}

int main(){

        int a[]={1,2,3,4,5,6,7,8};
        int b[]={1,2,3,4,5};
    int n= sizeof(a)/sizeof(a[0]);
    int m= sizeof(b)/sizeof(b[0]);
   cout<<"count is : " << doUnion(a,n,b,m);

    return 0;
    }