#include<iostream>

using namespace std;

int main(){

// first way of intialization

int matrix[3][3]={{1,2,3},{2,2,3},{3,2,3} };

    cout<<matrix[0][0]<<endl;
    cout<<matrix[0][1]<<endl;
    cout<<matrix[0][2]<<endl;

    matrix[0][2]=40;
    cout<<"after changing elemnt new value is  "<<endl;
    cout<<matrix[0][2]<<endl;


    //2nd way of initialization

    cout<<"2nd matrix is : "<<endl;

    int matrix1[][3]={{0,2,3},{6,3,4},{7,3,4},{8,3,4},{5,3,4}};


     cout<<matrix1[0][0]<<endl;
    cout<<matrix1[0][1]<<endl;
    cout<<matrix1[0][2]<<endl;

    //3rd way of intializarion,remove curly braces
    
cout<<"3rd matrix is : "<<endl;

string matrix2[2][2]={"apple","bannana","orange","mango"};
   cout<<matrix2[0][0]<<" ";
    cout<<matrix2[0][1]<<" ";
    cout<<"\n"<<matrix2[1][0]<<" ";
    cout<<matrix2[1][1]<<" ";
    return 0;
}