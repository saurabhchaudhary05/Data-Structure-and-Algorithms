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
		cout<<"enter data:"<<endl;
		cin>>newnode->data;
	/*	newnode=(struct node *)malloc(sizeof(struct node));
		printf("enter data: ");
		scanf("%d",&newnode->data);*/
		newnode->next=0;
		newnode->prev=0;
		if(head==0){
			head=temp=newnode;
		}
		else{
			temp->next=newnode;
			newnode->prev=temp;
			//temp=newnode;
			temp=temp->next;
		}
		cout<<"do you want to continue(0,1)?"<<endl;
		cin>>choice;
	//	printf("do you want to continue(0,1)?");
	//	scanf("%d",&choice);
	}
	temp=head;
	while(temp!=0){
		cout<<" ";
		cout<<temp->data;
	/*	printf(" ");
		printf("%d",temp->data);*/
		temp=temp->next;
	}
	return 0;
}
