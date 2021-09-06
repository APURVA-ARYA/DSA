#include <iostream>
using namespace std;
int vert, edge;


void createmtx(int adj[][vert+1],int a[][2]){
   	for (int i=0;i<vert+1;i++){
for (int j=0;j<vert+1;j++){
			adj[i][j]=0;
		}
	}

	for (int i=0;i<edge;i++) {

		int x=a[i][0];
		int y=a[i][1];
		adj[x][y]=1;
		adj[y][x]=1;
	}
}

void display(int adj[][vert+1]){
   for (int i=1;i<vert+1;i++) {
		for (int j=1;j<vert+1;j++) {
cout<<adj[i][j];
}
 cout<<"\n";
	}
}
int main(){
   vert=5;
	int arr[][2]= {{1,2},{2,3},{4,5},{1,5}};
	edge=sizeof(arr)/sizeof(arr[0]);
	int adj[vert+1][edge+1];
	createmtx(adj,arr);
   display(adj);

	return 0;
}
