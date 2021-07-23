#include<iostream>
#include<algorithm>
using namespace std;

// NOTE:  this code result is correct for all test cases but it takes more time than required :( ...needs to be optimized;
void isSubset(int a[], int b[], int n, int m) {
    int i=0,j=0,count=0;
    sort(a,a+n);
    sort(b,b+m);
    if(n<m){
      cout<<"array is not a subset :( "<<endl;;  
    }
    
    while(i<n&&j<m){
        if(a[i]>b[j]){
            j++;
        
        }
        else if(a[i]<b[j]){
            i++;
             
        }
        else {
           int temp=a[i];
            
          cout<<"subset elements : "<<a[i]<<endl;
           i++;
           j++;
          count++;
        }
        
    }
    if(count==m){
        cout<<"array is a subset :) "<<endl;
        
    }
    else
    cout<<"array is not a subset :( "<<endl;;
   

}

int main(){
int a[]={2,3,4,6,7,9,23,45,90};
        int b[]={2,3,9,90,0};
    int n= sizeof(a)/sizeof(a[0]);
    int m= sizeof(b)/sizeof(b[0]);
   isSubset(a,b,n,m);
    return 0;
}