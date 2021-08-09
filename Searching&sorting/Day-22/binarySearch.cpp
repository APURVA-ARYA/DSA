#include<iostream>
using namespace std;
int main()
{
    int i, num,first,last,middle;
    int arr[]={1,12,34,35,36,38,54,56,58};
    int n=sizeof(arr)/sizeof(arr[0]);
   num=35;
    first=0;
    last =n-1;
    middle=(first+last)/2;

    while(first<=last)
    {
        if(arr[middle]<num)
            first=middle+1;
        else if(arr[middle]==num)
        {
            cout<<num<<" found at Position "<<middle+1<<endl;
            break;
        }
        else
            last=middle-1;
        middle=(first+last)/2;
    }
    if(first>last)
        cout<<num<<"not found"<<endl;
   
    return 0;
}