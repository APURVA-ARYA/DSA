#include<iostream>
#include<unordered_set>
using namespace std;

int intersection(int a[],int n,int b[],int m){
unordered_set<int> s;
int i,j,count=0;
for( i=0;i<n;i++){
    s.insert(a[i]);
}

for( j=0;j<m;j++){
    if(s.count(b[j])==1){
        
        cout<<" in loop b[j]= "<<b[j]<<" "<<endl;
        count++;
        cout<<"count in loop = "<<count<<" "<<endl;
        s.erase(b[j]);
    }
}
return count;

}


int main(){

int a[]={1,6,7,2,3};
        int b[]={2,3,1,6,9};
    int n= sizeof(a)/sizeof(a[0]);
    int m= sizeof(b)/sizeof(b[0]);
   cout<<intersection(a,n,b,m);
    return 0;
}