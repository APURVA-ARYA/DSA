#include<iostream>
#include<vector>

using namespace std;

vector <int>valueEqualToIndex(int arr[], int n) {
	vector<int>v;
    for(int i=0;i<n;i++){
     if(arr[i]==i){
         v.push_back(arr[i]);
     }

    }
return v;

	}

    int main(){
        
int a[]={0,1,2,3,5,6,7,8};
int n=sizeof(a)/sizeof(a[0]);
auto output=valueEqualToIndex(a,n);
for(int x:output){
    cout<<x<<endl;
}

        return 0;
    }