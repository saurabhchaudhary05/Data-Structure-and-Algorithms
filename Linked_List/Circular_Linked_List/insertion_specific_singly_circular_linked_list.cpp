#include<iostream>
using namespace std;
struct node{
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
		if(head==0){
			head=temp=newnode;
		}
		else{
			temp->next=newnode;
			temp=temp->next;
		}
		temp->next=head;
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
	cout<<endl;
	struct node *ptr,*pre,*new1;
	int value1;
	cout<<"enter the value of node after which u want to insert"<<endl;
	cin>>value1;
	int value;
	cout<<"enter the value of newnode at specific position:"<<endl;
	cin>>value;
	
	new1=new node;
	new1->data=value;
	ptr=head;
	while(ptr->next!=head){
		if(ptr->data==value1){
			new1->next=ptr->next;
			ptr->next=new1;
		}
		ptr=ptr->next;
	}

	cout<<"linked list after insertion:"<<endl;
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















