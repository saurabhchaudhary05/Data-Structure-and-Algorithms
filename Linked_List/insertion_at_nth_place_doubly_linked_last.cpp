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
	struct node* new1,*ptr;
	int x;
	cout<<"enter the value of node after which u want to insert:"<<" "<<endl;
	cin>>x;
	int info;
	cout<<"enter the value of data of new node:"<<" ";
	cin>>info;
	new1=new node;
	new1->data=info;
	ptr=head;
	while(ptr->data!=x){
		ptr=ptr->next;
	}
	new1->next=ptr->next;
	new1->prev=ptr;
	ptr->next=new1;
	new1->next->prev=new1;
	
	
	
	
	
	cout<<"Linked list:"<<endl;
	temp=head;
	while(temp!=0){
		cout<<" ";
		cout<<temp->data;
		temp=temp->next;
	}
	return 0;
}
















