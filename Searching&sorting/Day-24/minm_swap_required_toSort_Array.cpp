#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int minswap(int a[],int n){
vector<pair<int,int> >v(n);

for(int i=0;i<n;i++){
    v[i]={a[i],i};
}
sort(v.begin(),v.end());

int count=0;

for(int i=0;i<n;i++){
    if(v[i].second==i){
        continue;
    }
    else{
count++;
swap(v[i],v[v[i].second]);
i--;
    }
}
return count;
}




int main(){
int a[]={1,33,4,5,6,7,8,91,3,-9,-7,-3};
int n=sizeof(a)/sizeof(a[0]);
cout<<minswap(a,n);

    return 0;
}