#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int minlensubarray(vector<int>&v ,int s ){
int n=v.size();
int ans=INT16_MAX;
int sum=0,l=0;
for(int i=0;i,n;i++){
    sum+=v[i];
    while(sum>s){
        ans=min(ans,i-l+1);
        sum=sum-v[l++];
    }
}
return ans;

}

int main(){
    vector<int>v;
v.push_back(12);
v.push_back(12);
v.push_back(120);
v.push_back(13);
v.push_back(130);
int k=24;
cout<<minlensubarray(v,k);
    return 0;
}