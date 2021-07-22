#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a[]={1,3,4,7,9,10};
    int sizea=sizeof(a)/sizeof(a[0]);
int start=0,end=sizea-1;

while(start<end){

    a[start]=a[start]^a[end];
    a[end]=a[start]^a[end];
    a[start]=a[start]^a[end];
    start++;
    end--;

}
cout<<"reversed array: "<<endl;
for(int i=0;i<sizea;i++){
    cout<<a[i]<<endl;
}
}