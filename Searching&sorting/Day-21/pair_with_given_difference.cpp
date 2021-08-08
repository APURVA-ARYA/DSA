#include<iostream>
#include<algorithm>

using namespace std;

void findpair( int a[],int n,int k){

    sort(a,a+n);

    int i=0,j=1;
    while(i<n&&j<n){
        if(a[j]-a[i]==k){
            cout<<a[i]<<" "<<a[j]<<endl;
            break;
        }
        else if(a[j]-a[i]<k){
            j++;
        }
else{
    i++;
}
    }

    cout<<"-1"<<endl;
}


int main(){
    int a[]={1,4,5,6,8,7};
    int n=sizeof(a)/sizeof(a[0]);
    int k=2;

    findpair(a,n,k);
    return 0;
}