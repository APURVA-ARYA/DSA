#include<iostream>
using namespace std;
int vertarr[20][20]; 
int count = 0;
void display(int n){
   int i, j;
   for(i=0;i<n;i++){
      for(j =0;j<n;j++){
         cout<<vertarr[i][j]<<" ";
      }
      cout<<endl;  }
}
//adding edge
void addedge(int u,int v){       
   vertarr[u][v]=1;
   vertarr[v][u]=1;
}
int main(){
   int v = 6; 
   addedge(0,2);
   addedge(1,2);
   addedge(1,4);
   addedge(1,5);
   addedge(2,3);
   addedge(2,5);
   addedge(5,4);
   display(v);
   return 0;
}