#include<iostream>
#include<unordered_map>
using namespace std;


 bool areIsomorphic(string s1, string s2)
    {
        if(s1.length()!=s2.length()){
            return false;
        }
        unordered_map<char,char> map1;
        unordered_map<char,bool> map2;
        
        for(int i=0;i<s1.length();i++){

          char c1=s1.charAt(i);
          char c2=s2.charAt(i);
          if(map1.find(c1)!=map1.end()){
              if(map1.find(c1)!=map2.find(c2)){
                  return false;
              }
              else{
                  if(map2.find(c2)!=map2.end()){
                      return false;
                  }
                  else{
                      map1.insert(make_pair(c1,c2));
                      map2.insert(make_pair(c2,true));
                  }
              }
          }
        }
        return true;
    }

    int main(){

string s1="aab";
string s2="xxy";
cout<<areIsomorphic(s1,s2);
        return 0;
    }