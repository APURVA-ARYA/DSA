#include <iostream>
#include <queue>

using namespace std;

void show(priority_queue<int> queue)
{
	priority_queue<int>temp =queue;
	while (!temp.empty()) {
		cout<<'\t'<<temp.top();
		temp.pop();
	}
	cout<<endl;
}

int main()
{
	priority_queue<int>qu;
	qu.push(100);
	qu.push(3);
	qu.push(290);
	qu.push(15);
	qu.push(18);

	cout<<"The priority queue is: ";
	show(qu);

	cout<<"\n size of queue is: " <<qu.size();
	cout << "\ntop of queue is : " <<qu.top();

	cout<<"after removing elems from queue"<<endl;
	qu.pop();
	show(qu);
	return 0;
}
