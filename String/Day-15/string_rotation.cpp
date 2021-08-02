#include<iostream>
#include<vector>
using namespace std;

vector<int> prefix_func(string s){

    int n=s.size();
    vector<int>pi(n,0);
    for(int i=1;i<n;i++){
        int j=pi[i-1];

        while(j>0 and s[i]!=s[j])
        j=pi[j-1];
        if(s[i]==s[j])
        j++;
        pi[i]=j;
    }
    return pi;
}



int main(){
string s="abcabcd";
vector<int> res=prefix_func(s);
for(auto i:res){
    cout<<i<<" ";
    
}
string t="cd";
int pos=-1;
int j=0,i=0;
while(i<t.size()){
    if(t[i]==s[j])
  {  i++;
    j++;}
    else{
        if(j!=0)
        j=res[j-1];
        else
        i++;
    }
    if(j==s.size()){
        pos=i-s.size();
        break;
    }
}
cout<<"position where string found is "<<pos;
    return 0;
}