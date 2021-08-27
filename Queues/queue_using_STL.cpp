#include <iostream>  
#include <queue>  
using namespace std;  
void display(queue <int>q)  
{  
    queue <int>temp=q;  
    while (!temp.empty())  
    {  
        cout <<'\t'<<temp.front();  
        temp.pop();  
    }  
    cout <<'\n';  
}  
  
int main()  
{  
    queue <int> q1;  
    q1.push(10);  
    q1.push(20);  
    q1.push(30);  
  
    cout<< "The queue fquiz is : ";  
    display(q1);  
  
    cout<<"\nq1.size(): "<<q1.size();  
    cout<<"\nq1.front( :"<< q1.front();  
    cout<<"\nq1.back(): "<<q1.back();  
  
    cout << "\nq1.pop() : "<<q1.pop();  
    cout<<display(q1);  
  
    return 0;  
}  