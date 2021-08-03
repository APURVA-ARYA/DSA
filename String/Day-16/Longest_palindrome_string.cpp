#include<iostream>
#include<unordered_map>
using namespace std;

 int longestPalin (string s) {
   unordered_map<char,int> counts;
   for(char c:s)
       counts[c]++;
     
     int res=0;
     bool check=false;
     for(auto &c:counts){
         if(c.second%2==0)
         res=res+c.second;
         else
         {
             check=true;
             res=res+c.second-1;
         }
     }
     if(check)
     res++;
     return res;

    }


int main(){

string s="narutomot";
cout<<"length of longest pallindrome substring is : "<<longestPalin(s)<<endl;
    return 0;
}