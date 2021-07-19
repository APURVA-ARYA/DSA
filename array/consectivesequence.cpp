#include<iostream>
using namespace std;

void findLongestConseqSubseq(int a[], int l){
    int count=0,maxcount=0,temp;

     for(int i=0; i<l; i++) {

    for(int j=i+1; j<l; j++)
    {
     if(a[j] < a[i])
    {
     temp = a[i];
     a[i] = a[j];
     a[j] = temp;
     }
}
    }
    cout<<"\nconsecutive numbers in array :"<<endl;
for(int i=0;i<l;i++){
   
    if(i>0&& a[i]==a[i-1]+1){
        count+=1;
       
       cout<<a[i-1]<<"\n";
    }
    else {
        count=1;
    }
    if(count>maxcount){
        maxcount=count;
    }
}
cout<<"lenght of consecutive sequence in given array :  "<< maxcount<<endl;

}
int main(){
 int a[]={1,5,3,2,4,6,7,8,9,18};
findLongestConseqSubseq(a,10);

    return 0;
}