#include<iostream>

using namespace std;

int main(){
    int i,no,j,n,a[100];
    cout<<"enter size of array\n";
    cin>>n;
    cout<<"enter the array elements";
    
    for(i=0;i<n;i++){
        cin>>no;
        a[i]=no;
    }
cout<<"reversed array :"<<endl;
for(i=n-1;i>=0;i--){
    cout<<a[i]<<endl;
}

}