#include<iostream>
#include<unordered_map>
using namespace std;

int majorityElement(int a[], int n)
{  unordered_map<int,int>map;
    for(int i=0;i<n;i++){
      map[a[i]]++;
    }   

    for(auto x:map){
        if(x.second>n/2){
          return x.first;
        }
        else
       return -1;
    }    
}

int main(){

int a[]={1,40,1,5};
int size=sizeof(a)/sizeof(a[0]);
cout<<"the majority element is :"<<endl;
 cout<<majorityElement(a,size)<<endl;;
    return 0;

}
