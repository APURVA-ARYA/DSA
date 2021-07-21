//  question :- 
// Given an array arr[] denoting heights of N towers and a positive integer K, you have to modify the height of each tower either by increasing or decreasing them by K only once. After modifying, height should be a non-negative integer. 
// Find out what could be the possible minimum difference of the height of shortest and longest towers after you have modified each tower.
//A LIITLE CHANGE IN ABOVE QUESTION that is you can either add or subtract every element by k ,if by subtracting by k elem is neagtive then you cannot subtract.
//THE SOLUTION OF CHANGED QUESTION IS GIVEN BELOW

#include <algorithm>
#include<iostream>
using namespace std;

void getMinDiff(int a[], int l, int k) {
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
               int diff= a[l-1]-a[0]; 
              cout<<diff<<endl;
              
               

         sub:  for(int i=0;i<l;i++){
                 a[i]=a[i]-k;
                 cout<<"after subtraction elem in ascending order are : "<<a[i]<<endl;  
             }
                cout<<"\nminm elem :"<<a[0]<<"  maxm elem :"<<a[l-1]<<endl;
                 int difference =a[l-1]-a[0];  
                   cout<<difference<<endl;
           
    }

int main(){
 int arr[]={13,4,4,5,6,12};
  int k=3;
    int size= sizeof(arr)/sizeof(arr[0]);
 cout<< getMinDiff(arr,size,k);

return 0;
}
