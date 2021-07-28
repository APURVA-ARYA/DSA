#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

vector<int> removeduplicates(int*a,int n){
    vector<int> v;
    unordered_map<int,int>map;

for(int i=0;i<n;i++){
    if(map.count(a[i])>0){
        continue;
    }
else  {
    map[a[i]]=1;
    v.push_back(a[i]);
}
}
return v;

}

int main(){
int a[]={1,3,4,5,6,6,6,7,2,4,6,8,9,10,9,11,90,0,0};
int n=sizeof(a)/sizeof(a[0]);

vector<int>output = removeduplicates(a,n);
for(int i=0;i<output.size();i++){
    cout<<output[i]<<"\t";
}
    return 0;
}