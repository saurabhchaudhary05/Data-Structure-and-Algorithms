#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *right;
	struct node *left;
};
struct node *create(){
	struct node *newnode;
	newnode=new node;
	int x;
	cout<<"enter data"<<" ";
	cin>>x;
	if(x==-1){
		return 0;
	}
	else{
		newnode->data=x;
		cout<<"enter left child of x:"<<endl;
		newnode->left=create();
		cout<<"enter right child of x:"<<endl;
		newnode->right=create();
		return newnode;
	}
	
}
int main(){
	struct node *root;
	root=create();
}
