#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *right;
	struct node *left;
};
void preorder(struct node *root){
	if(root==0){
		return ;
	}
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
void postorder(struct node *root){
	if(root==0){
		return ;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}
void inorder(struct node *root){
	if(root==0){
		return ;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
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
	cout<<"preorder is:"<<" ";
	preorder(root);
	cout<<endl;
	cout<<"postorder is:"<<" ";
	postorder(root);
	cout<<endl;
	cout<<"inorder is:"<<" ";
	inorder(root);
}
