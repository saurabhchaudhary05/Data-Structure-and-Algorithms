#include<iostream>
using namespace std;
struct node{
struct node *prev;
int data;
struct node *next;
};
int main(){
	struct node *head,*newnode,*temp;
	head=0;
	int choice=1;
	while(choice){
		newnode=new node;
		cout<<"enter data:"<<" ";
		cin>>newnode->data;
		newnode->next=0;
		newnode->prev=0;
		if(head==0){
			head=temp=newnode;
		}
		else{
			temp->next=newnode;
			newnode->prev=temp;
			temp=temp->next;
		}
		cout<<"do you want to continue(0,1)?"<<" ";
		cin>>choice;
	}
	temp=head;
	while(temp!=0){
		cout<<" ";
		cout<<temp->data;
		temp=temp->next;
	}
	cout<<endl;
	struct node *new1;
	int info;
	cout<<"enter the data for the node of the beginning:"<<" ";
	cin>>info;
	new1=new node;
	new1->data=info;
	new1->next=head;
	head->prev=new1;
	head=new1;
	cout<<"the linked list after insertion:"<<endl;
	temp=head;
	while(temp!=0){
		cout<<" ";
		cout<<temp->data;
		temp=temp->next;
	}
	return 0;
}
