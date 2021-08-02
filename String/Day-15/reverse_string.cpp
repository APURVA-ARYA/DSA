# include<iostream>
# include<vector>

using namespace std;

 void reverseString(vector<char>& s) {
       int n= s.size();
     int start=0,end=n-1;
   
while(start<end){
    char temp=s[start];
    s[start]=s[end];
    s[end]=temp;
    start++;end--;
}
cout<<"\n";
for(int i=0;i<n;i++)
{
    cout<<s[i];
}
    }




int main(){

 string s = "hello";
 
vector<char> v(s.begin(), s.end());
 
    for (const char &c: v) {
        cout << c;
    }
    cout<<"\n REVERSED STRING IS :"<<endl;
reverseString(v);
    return 0;
}
