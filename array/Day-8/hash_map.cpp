#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
 unordered_map<string,int> map;
 // one way for inserting key value pair in map 

 map["Apurva"]=1;
 map["naruto"]=5;
 map["sasuke"]=4;
 map["neji"]=3;
 map["goku"]=5;



 // second way for inserting key value pair in map 

 map.insert(make_pair("vegeta",5));




 //iterating through map 1st way 

cout<<"\n first way to iterate through map "<<endl;
 for(auto x:map){
     cout<<"key is : "<<x.first<<" : value is :"<<x.second<<endl;

 }



//iterating through map second way,remember i is an iterator which is a pointer.

cout<<"\nsecond way to iterate through map "<<endl;
for(auto i=map.begin();i!=map.end();i++){
   cout<<"key is : "<<i->first<<" : value is :"<<i->second<<endl;
    
}



//finding an element in map ,say we want to find "goku" in map 

for(auto y=map.begin();y!=map.end();y++){
    
    if(map.find("goku")!=map.end()){

        cout<<" Element found !!"<<endl;
      break;
    }
    else{
       cout<<"element not found "<<endl;
    }
}


//finding size of map

cout<<"size of map is : "<<map.size()<<endl;



//deleting an entry from map

map.erase("neji");
cout<<"map size after erasing one elemnt : "<<map.size()<<endl;

    return 0;
}