#include<iostream>
#include<unordered_set>

using namespace std;
/*Function in unordered set used for hashing. 
1.insert(value): used to insert elements in set.
2.size(): gives size of set.
3.s.end():  pointer points after last element
4.s.begin(): is pointer points before starting elem.
5. s.clear(): empties the set.
6. s.count(value): returns 0 or 1; used to count elemnts
7. s.erase( start value,end value): removes elemnts of given range, firs is inclusive ,last is exclusive; */

int main(){
 unordered_set<int> s;
  
 s.insert(12);
 s.insert(34);
 s.insert(-2);
 s.insert(20);
 s.insert(60);
 s.insert(270);
 s.insert(209);
 cout<<" size of the unorderd set is : "<<s.size()<<endl;
if(s.find(23)==s.end())
cout<<"not found"<<endl;
else
cout<<"element  found"<<endl;

cout<<"elements of unordered sets are: "<<endl;
for(auto i=s.begin();i!=s.end();i++){
   cout<<(*i)<<" "<<endl; 
}
cout<<"\nclearing the unorders set ,i.e deleting all the elements:"<<endl;


// s.clear();
cout<<"\nelemnts cleared :),the size of set after clearing is : "<<s.size()<<endl; 

// 2nd way to check element is present or not using COUNT (); coutn returns 0 or 1;

if(s.count(12)==1){
    cout<<"element is present "<<endl;
}
else
cout<<"element is not present "<<endl;
//erase() can erase a singl elemnt too.
s.erase(34);
s.erase(s.find(20),s.end());
cout<<"after erasing range of values set is : "<<endl;
for(auto i= s.begin();i!=s.end();i++){
    cout<<(*i)<<"  ";
}
return 0;    
}