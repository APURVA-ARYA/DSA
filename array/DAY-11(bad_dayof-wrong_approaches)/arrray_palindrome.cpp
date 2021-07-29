#include<iostream>

using namespace std;
string palndrm ( int a[],int n){

    for(int i=0;i<n;i++){

        int num=a[i],ans=0;

        while(num>0){
            int rem=num%10;
            num=num/10;
            ans=(ans*10)+rem;

        }
       if(ans!=a[i]){
            return "not a pallindrome";
        }
      
    }
     return " pallindrome";
}


int main(){
int a[]={111,335,343,222,444,111};
int n=sizeof(a)/(sizeof(a[0]));
string str = palndrm(a,n);
cout<<str;

    return 0;
}