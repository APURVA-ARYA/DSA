#include <bits/stdc++.h>

using namespace std;

string reversestr(string s){
  int n=s.length();
   
    string s1;
    for(int i=n-1;i>=0;i--)
      s1.push_back(s[i]);
return s1;
}


int main(){
string s="hello this string will be reversed";

cout<<endl<<reversestr(s)<<endl;

    return 0;
}