#include<iostream>
using namespace std;
void merge(int a[],int b[],int l1,int l2,int mergearr[]){
    int i=0,j=0,k=0;
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
            cout<<"merge array one"<<mergearr[k++]<<endl;
        }
 }

int median( int a[],int l){
    int medn;
if(l%2==0){
    int an=l/2;
    int bn=(l/2)+1;
    int first=a[an-1];
    int second=a[bn-1];
    cout<<"first median "<<a[an-1]<<endl;
    cout<<"second median "<<a[bn-1]<<endl;
  medn =(first+second)/2;
  return medn;
}
else{
int median=(l+1)/2;
medn=a[median-1];
return medn;
}
}

int main(){
// 
int a[]={6,7,8,10};
int sizea=sizeof(a)/sizeof(a[0]);
int b[]={1,2,3,4,9};
int sizeb=sizeof(b)/sizeof(b[0]);
int sizec=sizea+sizeb;
int mergearr[sizec];
merge(a,b,sizea,sizeb,mergearr);
cout<<"merged array of given two soerted array of unequal size is "<<endl;
for(int i=0;i<sizec;i++){
    cout<<mergearr[i]<<endl;
}
cout<<" Final median of 2 unsoerted array of unequal size is "<<median( mergearr,sizec)<<endl;
    return 0;
}