#include<iostream>
using namespace std;
struct node{
int data;
struct node *next;
struct node *prev;
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
			head->next=newnode;
			head->prev=newnode;
		}
		else{
			temp->next=newnode;
			newnode->prev=temp;
			newnode->next=head;
			head->prev=newnode;
			temp=temp->next;
		}
		cout<<"do you want to continue(0,1)?"<<" ";
		cin>>choice;
	}
	
	temp=head;
	while(temp->next!=head){
		cout<<" ";
		cout<<temp->data;
		temp=temp->next;
	}
	cout<<" ";
	cout<<temp->data;
	return 0;
}
















