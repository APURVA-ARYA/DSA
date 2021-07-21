//  question :- 
// Given an array arr[] denoting heights of N towers and a positive integer K, you have to modify the height of each tower either by increasing or decreasing them by K only once. After modifying, height should be a non-negative integer. 
// Find out what could be the possible minimum difference of the height of shortest and longest towers after you have modified each tower.

#include <algorithm>
#include<iostream>
using namespace std;

int getMinDiff(int a[], int l, int k) {
    sort(a,a+l);
int count=0;

    for(int i=0;i<l;i++){

  if(a[i]-k<0){
            count=count-1;
            cout<<"count is"<<count<<endl;
            if(count<0){
               goto add;}
               break;
               }

  if(a[i]-k>0){
            count=count+1;
            if(count==l){
                goto sub;}
                 }

            }

        add:  for(int i=0;i<l;i++){
               a[i] =a[i]+k;  
               cout<<" after adding elem in ascending order are : "<<a[i]<<endl;
              
            }
               cout<<"largest"<<a[l-1]<<"smallest"<<a[0]<<endl;
               int sum1= a[l-1]-a[0]; 
               return sum1;
              
               

         sub:  for(int i=0;i<l;i++){
                 a[i]=a[i]-k;
                 cout<<"after subtraction elem in ascending order are : "<<a[i]<<endl;  
             }
                cout<<"\nminm elem :"<<a[0]<<"  maxm elem :"<<a[l-1]<<endl;
                 int sum =a[l-1]-a[0];  

                return sum;
    }

int main(){
 int arr[]={13,4,4,5,6,12};
 cout<< getMinDiff(arr,6,3);

return 0;
}