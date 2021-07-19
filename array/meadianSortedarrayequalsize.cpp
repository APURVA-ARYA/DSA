#include<iostream>
using namespace std;
void merge(int a[],int b[],int l1,int l2){
    int i=0,j=0,k=0;
    int mergearr[l1+l2];

    while(i<l1 && j<l2){
        if (a[i]<b[j])
            {
                mergearr[k++]=a[i++];
            }
            else
            {
                mergearr[k++]=b[j++];
            }

    }
 while (i<l1)
{
    mergearr[k++]=a[i++];
}
        while(j<l2)
        {
            mergearr[k++]=b[j++];
        }
        cout<<"merged array"<<endl;
        for(k=0;k<(l1+l2);k++){
            cout<<mergearr[k]<<endl;
        }
}

int median( int a[],l){
if(l%2==0){
    int a=l/2;
    int b=(l/2)+1;
    int first=a[a-1];
    int second=a[b-1];
    cout<<"first median "<<a[a-1];
    cout<<"second median "<<a[b-1];
    cout<<"meadian is :"<<(first+second)/2;
}
else{
int median=(l+1)/2;
cout<<"median is "<<a[median-1];
}
}

int main(){

int a[]={6,7,8};
int b[]={1,2,3};
merge(a,b,3,3);
median()
    return 0;
}