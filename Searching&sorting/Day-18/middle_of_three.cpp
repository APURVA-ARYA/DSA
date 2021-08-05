#include<iostream>
#include<algorithm>

using namespace std;
 int middle(int a, int b, int c){
   if((a>b && a<c) || (a>c&&a<b)){
       return a;
   }
   else if( (b>a&&b<c)|| (b>c&&b<a)){
       return b;
   }
   else return c;
    }

int main(){
int a=55,b=199,c=80;
cout<<"middle element is: "<<middle(a,b,c);
    return 0;
}