#include<iostream>
using namespace std;
int bsearch(int arr[], int first, int last, int num)
{
    int middle;
    if(first>last)
        return 0;

    middle=(first+last)/2;

    if(arr[middle]==num)
        return (middle+1);

    else if(arr[middle]>num)
        bsearch(arr, first, middle-1, num);

    else if(arr[middle]<num)
        bsearch(arr, middle+1, last, num);
}
int main()
{
    int i,num, pos;
   int arr[]={1,12,34,35,36,38,54,56,58};
    int n=sizeof(arr)/sizeof(arr[0]);
   num=38;

    pos=bsearch(arr,0,n-1,num);
    if(pos==0)
        cout<<endl<<num<<" not found";
    else
        cout<<endl<<num<<"  found at : "<<pos;
    cout<<endl;
    return 0;
}
