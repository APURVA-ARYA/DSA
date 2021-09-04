#include <iostream>
using namespace std;

int cq[5];
int front=-1,rear=-1,n=5;

void insert(int val) {
   if ((front==0 &&rear==n-1)||(front==rear+1)) {
      cout<<"Overflow"<<endl;
      return;
   }
   if front==-1) {
      front=0;
      rear=0;
   } else {
      if (rear==n-1)
      rear=0;
      else
      rear=rear+1;
   }
   cq[rear]=val;
}
void deletes() {
   if (front==-1) {
      cout<<"empty"<<endl;
      return;
   }
   cout<<"Element deleted is :"<<cq[front]<<endl;

   if (front==rear) {
      front=-1;
      rear=-1;
   } else {
      if (front==n-1)
      front=0;
      else
      front=front+1;
   }
}
void display() {
   int temp1=front,temp2=rear;
   if (front==-1) {
      cout<<"Queue is empty"<<endl;
      return;
   }
   cout<<"Queue elements are :\n";
   if (temp1<=temp2) {
      while (temp1<=temp2){
         cout<<cq[temp1]<<endl;
         temp1++;
      }
   } else {
      while (temp1<=n-1) {
         cout<<cq[temp1]<<endl;
         temp1++;
      }
      temp1= 0;
      while (temp1<=temp2) {
         cout<<cq[temp1]<<" ";
         temp1++;
      }
   }
   cout<<endl;
}
int main() {

   int ch, val;
   cout<<"1)Insert\n";
   cout<<"2)Delete\n";
   cout<<"3)Display\n";
   cout<<"4)Exit\n";
   do {
      cout<<"Enter choice:"<<endl;
      cin>>ch;
      switch(ch) {
case 1:
         cout<<"Input for insertion: "<<endl;
         cin>>val;
         insert(val);
         break;
case 2:
         deletes();
         break;
case 3:
         display();
         break;
case 4:
         cout<<"Exit\n";
         break;
         default: cout<<"Incorrect!\n";
      }
   } while(ch != 4);
   return 0;
}