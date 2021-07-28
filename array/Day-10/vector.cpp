#include<iostream>
#include<vector>

using namespace std;

int main(){
    //declarations of vector
// vector<int> v;
vector<int>v;

// vector<int> v(6) ; vector of capacity 6 is created
// vector<string>s(5,"hello");  vector of capacity 5 is created where each elem is hello
cout<<"capacity is : "<<v.capacity()<<endl;
v.push_back(12);
cout<<"capacity is : "<<v.capacity()<<endl;
v.push_back(12);
v.push_back(120);
v.push_back(13);
v.push_back(130);
cout<<"size is : "<<v.size()<<endl;
cout<<"capacity is : "<<v.capacity()<<endl;

cout<<" tje elements in vector are : "<<endl;
for(int i=0;i<v.size();i++){
    cout<<v[i]<<"\t";
}

v.pop_back();
cout<<"\nafter removing size is : "<<v.size()<<endl;


//at() returns elemnt at ith index in vector

cout<<"elemnt at 3rd index is "<<v.at(3)<<endl;

//front(),back() gives first and last vaue in vactor

cout<<"first element is "<<v.front()<<endl;
cout<<"last element is  "<<v.back()<<endl;

// inserting valuesuin middle of vector 
auto it=v.begin();
v.insert(it+3,56);


for(int i=0;i<v.size();i++){
    cout<<v[i]<<"\t";
}
    return 0;
}