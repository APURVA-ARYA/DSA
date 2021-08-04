#include<iostream>

using namespace std;

 string removeConsecutiveCharacter(string s)
    { int arr[123]={0};string res="";
        for(int i=0;i<s.length();i++){
            if(arr[s[i]]==0){
                arr[s[i]]=1;
                res=res+s[i];
            }
        }
        return res;
    }

int main(){

    string s1="aaaabbbcc";
    cout<<"\nSTRING AFTER REMOVAL OF DUPLICATES: "<<endl;
    cout<<removeConsecutiveCharacter(s1);
    cout<<endl;

}