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
	cout<<"enter the value after which u want to insert:"<<" "<<endl;
	cin>>x;
	int info;
	cout<<"enter the data of new node:";
	cin>>info;
	new1=new node;
	new1->data=info;
	ptr=head;
	while(ptr->data!=x && ptr!=NULL){
		ptr=ptr->next;
	}
	if(ptr->data==x){
	
	new1->next=ptr->next;
	ptr->next=new1;
}





	temp=head;
	while(temp!=0){
		printf(" ");
		printf("%d",temp->data);
		temp=temp->next;
	}
	return 0;
}
















