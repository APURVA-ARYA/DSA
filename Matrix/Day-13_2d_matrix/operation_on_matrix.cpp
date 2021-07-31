#include<iostream>

using namespace std;


int main(){
    int n=4,m=3;
int a[n][m]={1,2,6,8,9,0,7,8,9,1,4,5};
int b[n][m]={11,22,66,88,99,30,77,88,99,21,44,55};
int c[n][m];

//addition of two matrix

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        c[i][j]=a[i][j]+b[i][j];
        
    }
}
cout<<"sum of matrix : "<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<c[i][j]<<" ";
    }
}
//difference of matrix 

cout<<"\ndifference of matrix : "<<endl;

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        c[i][j]=a[i][j]-b[i][j];
        cout<<c[i][j]<<" ";
        
    }
}


//multiplication of two matrix 

cout<<"\n Multiplication of matrix :"<<endl;
int p=2,q=3,r=3,s=1;
int ma[p][q]={1,3,5,6,7,8};
int mb[q][s]={1,1,1};
int ab[p][s];
for(int i=0;i<p;i++){

    for(int j=0;j<s;j++){
       int sum=0;
        for(int k=0;k<q;k++){
            sum=sum+ma[i][k]*mb[k][j];
        }
        ab[i][j]=sum;
        cout<<ab[i][j]<<" ";
    }
}

    return 0;
}


