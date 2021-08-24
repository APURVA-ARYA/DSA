#include<iostream>
using namespace std;
struct node{
    int data;
    node*link;
};
node *head = NULL;
int len;
void insert(){
    node*temp;
    temp=new node;
    cout<<"Enter data";
    cin>>temp->data;
    temp->link=NULL;
    if(head==NULL){
        head=temp;
    }
    else{
        node*p;
        p=head;
        while(p->link!=NULL){
            p=p->link;
        }
        p->link=temp;
    }
}

void display(){
    node *temp;
    temp=head;
    if(temp==NULL){
cout<<"Empty list"<<endl;
    }
    else{
while(temp!=NULL){
cout<<temp->data<<"->";
temp=temp->link;
    }
    cout<<"\n\n";
    }    
}

int length(){
int count =0;
node*temp;
temp=head;
while(temp!=NULL){
count++;
temp =temp->link;
}
return count;

}
void reverse(){
    int start,end,n,k,temp;
    node*s,*e;
    s=e=head;
    n=length();
    start=0;
    end=n-1;
    while (start<end)
    {
       k=0;
       while(k<end){
           e=e->link;
           k++;
       }
       temp=s->data;
       s->data=e->data;
       e->data=temp;
      start++;
      end--;
      s=s->link;
      e=head;
    }
   display(); 
}

int main(){
    int ch;
    while(1){
        cout<<"1.ENTER VALUE"<<endl;
        cout<<"2. display elements"<<endl;
        cout<<"3. reverse elements"<<endl;
        cout<<"4.find no. of node"<<endl;
        cout<<"enter your choice"<<endl;
        cin>>ch;
       
        
    switch(ch){
        case 1: insert();
                    break;
        case 2: display();
                break;
        case 3: reverse();
        break;
        case 4: len=length();
        cout<<"Total no of node: "<<len<<endl;
        break;

    }
    }

}