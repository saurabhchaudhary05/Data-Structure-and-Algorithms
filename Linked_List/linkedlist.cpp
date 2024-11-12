#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
int data;
struct Node *next;
};
void display(struct Node *node){
	while(node != NULL){
		cout<<node->data<<" ";
		node=node->next;
	}
		cout<<endl;
	
}
int main(){
	struct Node *head=NULL;
	struct Node *node2=NULL;
	struct Node *node3=NULL;
	struct Node *node4=NULL;
	head=new Node;
	node2=new Node;
	node3=new Node;
	node4=new Node;
//	head=(struct Node*)malloc(sizeof(struct Node));	
//	node2=(struct Node*)malloc(sizeof(struct Node));	
//	node3=(struct Node*)malloc(sizeof(struct Node));	
//	node4=(struct Node*)malloc(sizeof(struct Node));
	head->data=15;
	head->next=node2;
	
	node2->data=1000000;
	node2->next=node3;
	
	node3->data=12;
	node3->next=node4;
	
	node4->data=3;
	node4->next=NULL;
	
	cout<<"linked list: "<<endl;
	display(head);
	return 0;	
}
