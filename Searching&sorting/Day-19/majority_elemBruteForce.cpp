#include<iostream>

using namespace std;

int majorityElement(int a[], int n)
{   
    int elem,count=0;
    for(int i=0;i<n;i++){
        elem=a[i];
        for(int j=0;j<n;j++){
            if(a[j]==elem){
                count++;
            }
        }
        if(count>n/2){
            return elem;
        }
        else return -1;
    } 
}

int main(){

int a[]={11,11,11,11,1,11,5};
int size=sizeof(a)/sizeof(a[0]);
cout<<"the majority element is :"<<endl;
 cout<<majorityElement(a,size)<<endl;;
    return 0;

}