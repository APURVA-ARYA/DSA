# include<iostream>
#include <cstring>

using namespace std;

void isPallindrome( char str[100]){
  int length = strlen(str);  
  int temp;  

        for(int i=0;i<length;i++)
        {
                if(str[i] != str[length-i-1])
                {
                        temp=0;
                        break;
                }
        }    
        if(temp==0)
        {
                cout<<" "<<str<<" is not a palindrome"<<endl;
        }    
        else
        {
                cout<<" "<<str<< " is a palindrome"<<endl;
        }

}





int main()
{
        char str[100];
        cout<<"\n Enter String : ";
        cin>>str;    
isPallindrome(str);
      
        return 0;
}