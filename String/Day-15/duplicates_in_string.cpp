#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
unordered_map<char,int> map;
char a[]={'a','b','c','c','a','d','d','f'};
int n=sizeof(a)/sizeof(a[0]);

for(int i=0;i<n;i++){
int key=a[i];
map[key]++;
}
cout<<"duplicates in string is : "<<endl;
for(auto x: map){
   if(x.second>1){
       cout<<x.first<<endl;
   }
}
    return 0;
}