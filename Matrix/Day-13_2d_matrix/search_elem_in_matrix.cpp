// Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

// Integers in each row are sorted from left to right.
// The first integer of each row is greater than the last integer of the previous row.


#include<iostream>
using namespace std;

bool search(vector<vector<int> > matrix, int n,int m,int x) {
int row =0;
for(int i=0;i<n;i++){
    if(matrix[i][0]==x)
    return true;
    else if(matrix[i][0]>x){
        row=i-1;
        break;
    }
    else
    row=i;
}

if(row>=0)
for(int i=0;i<m;i++){
    if(matrix[row][i]==x){
        return true;
    }
}
   return false;     
    }





int main(){
int n=4,m=3;
int b[n][m]={11,22,66,88,99,30,77,88,99,21,44,55};
int x=30;
cout<<search(b,n, m,x);
    return 0;
}