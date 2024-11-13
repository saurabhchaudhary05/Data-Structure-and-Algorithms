#include<iostream>
using namespace std;
struct node {
	int data;
	struct node *next;
};
struct node *front=0;
struct node *rear=0;
void enqueue(){
	struct node *newnode;
	newnode=new node;
	int value;
	cout<<"enter data:"<<" ";
	cin>>value;
	newnode->data=value;
	newnode->next=0;
	if(front==0 && rear==0){
		front=rear=newnode;
		rear->next=front;
	}
	else{
		rear->next=newnode;
		rear=newnode;
		rear->next=front;
	}
}

void dequeue(){
	int value;
	if(front==0 && rear==0){
		cout<<"queue is empty "<<endl;
	}
	else{
		struct node *temp;
		if(front==rear){
			temp=front;
			value=temp->data;
			front=0;
			rear=0;
			delete temp;
		}
		else{
			temp=front;
			front=front->next;
			rear->next=front;
			value=temp->data;
			delete temp; 
		}
		cout<<"deleted value is "<<value<<endl;
	}
	
}
void display(){
	struct node *temp;
	temp=front;
	if((front==0) && (rear==0))  
    {  
        printf("Queue is empty");  
    }  
    else{
		while(temp->next!=front){
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		cout<<temp->data;
	}
	cout<<endl;
}

int main(){
	int choice;
	do{
		cout<<"enter choice 1.enqueue() 2.dequeue() 3.display() 4.exit()"<<" ";
		cin>>choice;
		switch(choice){
			case 1: enqueue();
					break;
			case 2: dequeue();
					break;
			case 3: display();
					break;
			case 4: break;
			default: cout<<"enter invalid choice"<<endl;
		}
	}while(choice>0);
}
