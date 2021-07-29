#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void maxpro (int a[],int size){
vector<int>v;
int pro=1,ans=1;
for(int i=0;i<size;i++){
    int product=a[i];
    for(int j=i+1;j<size;j++){
       
 v.push_back(product*a[j]);
    }
}

for(int i=0;i<v.size();i++){
   ans=max(ans,v[i]);
}
cout<<"maxm product is "<<ans;
}

int main(){

int a[]={1,3,-7,-8,9,-8,-3};
int size=sizeof(a)/sizeof(a[0]);

maxpro(a,size);

    return 0;
}