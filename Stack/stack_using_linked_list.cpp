#include<iostream>
using namespace std;
struct node{
	int data;
	struct node *next;
};
struct node *head;
void push(){
	int value;
	struct node *ptr;
	ptr=new node;
	if(ptr==NULL){
		cout<<"not able to push the element";
	}
	
	
	else{
	cout<<"enter the value:"<<" ";
	cin>>value;
	if(head==NULL){
		ptr->data=value;
		ptr->next=NULL;	
		head=ptr;
	}
	
	else{
		ptr->data=value;
		ptr->next=head;
		head=ptr;		
	}
}
}
void pop(){
	int item;
	struct node *ptr;
	if(head==NULL){
		cout<<"underflow\n";
	}
	else{
		item=head->data;
		ptr=head;
		head=head->next;
		delete ptr;
	}
	cout<<"deleted value is:"<<item<<endl;
}
void display(){
	cout<<"stack is :"<<" ";
	struct node *temp;
	temp=head;
	while(temp!=0){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}
int main(){
	int choice;
	do{
		cout<<"enter choice 1.push() 2.pop() 3.display() 4.To_exit() "<<" ";
		cin>>choice;
		switch(choice){
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: display();
					break;
			case 4: choice=0;
					break;
			default: cout<<"invalid choice"<<endl;;
					
		}
	}while(choice!=0);
	
}
