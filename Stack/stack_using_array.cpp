#include <iostream>
using namespace std;
#define MAX 1000


void Stackfun() {
	int top,a[MAX];

 top = -1; 
	
}

bool push(int x)
{
	if (top >= (MAX - 1)) {
		cout << "Stack Overflow";
		return false;
	}
	else {
		a[++top] = x;
		cout << x << " pushed into stack\n";
		return true;
	}
}

void pop()
{
	if (top < 0) {
		cout << "Stack Underflow";
		return 0;
	}
	else {
		int x = a[top--];
		return x;
	}
}
void peek()
{
	if (top < 0) {
		cout << "Stack is Empty";
		return 0;
	}
	else {
		int x = a[top];
		return x;
	}
}

bool isEmpty()
{
	return (top < 0);
}


int main()
{
	stackfun();
	push(10);
	push(20);
	push(30);
	cout << pop() << " Popped from stack\n";
	cout<<"Elements present in stack : ";
	while(!isEmpty())
	{

		cout<<peek()<<" ";
		pop();
	}

	return 0;
}
