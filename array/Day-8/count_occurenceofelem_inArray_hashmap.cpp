#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
unordered_map<int,int> map;
int a[]={1,1,2,12,4,4,4,4,0,3,4,5,6,7,8,5,0,-1,3,8};
int n=sizeof(a)/sizeof(a[0]);

for(int i=0;i<n;i++){
int key=a[i];
map[key]++;
}
for(auto x: map){
    cout<<"key : "<<x.first<<"  count: "<<x.second<<endl;
}
    return 0;
}