#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
};
struct node *front=0;
struct node *rear=0;
void enqueue(){
	struct node *newnode;
	newnode=new node;
	int value;
	cout<<"enter value"<<" ";
	cin>>value;
	newnode->data=value;
	newnode->next=0;
	if(front==0 && rear==0){
		front=rear=newnode;
	}
	else{
		rear->next=newnode;
		rear=newnode;
	}
}
void dequeue(){
	int item;
	item=front->data;
	struct node *ptr;
	ptr=front;
	front=front->next;
	delete ptr;
	cout<<"deleted item is:"<<item<<endl;
}
void display(){
	struct node *temp;
	temp=front;
	while(temp!=0){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main(){
		int choice;
	do{
		cout<<"enter the choice 1.enqueue() 2.dequeue() 3.display() 4.exit()"<<" ";
		cin>>choice;
		switch(choice){
			case 1: enqueue();
					break;
			case 2: dequeue();
					break;
			case 3: display();
					break;
			case 4: break;
			default: cout<<"enter valid choice"<<endl;
		}
	}while(choice>0);
		
	
}
