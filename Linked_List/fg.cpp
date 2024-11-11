#include<iostream>
#include<stdio.h>
using namspace std;

struct node{
int data;
struct node *next;
};
int main(){
	struct node *head,*newnode,*temp;
	head=0;
	int choice=1;
	while(choice){
		newnode=(struct node *)malloc(sizeof(struct node));
		printf("enter data: ");
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head==0){
			head=temp=newnode;
		}
		else{
			temp->next=newnode;
			temp=newnode;
		}
		printf("do you want to continue(0,1)?");
		scanf("%d",&choice);
	}
	temp=head;
	while(temp!=0){
		printf(" ");
		printf("%d",temp->data);
		temp=temp->next;
	}

	
	struct node* new1,*ptr;
	int info;
	printf("\nenter the data of new node of the last: ");
	scanf("%d",&info);
	new1=(struct node *)malloc(sizeof(struct node));
	new1->data=info;
	new1->next=NULL;
	ptr=head;
	int positon;
	cin>>position;
	for(int i=1;i<position-1&& ptr!=NULL;i++){
		ptr=ptr->next;
	}
	new1->next=ptr->next;
	ptr->next=new1;
	
	
	
	
	
	
	
	temp=head;
	while(temp!=0){
		printf(" ");
		printf("%d",temp->data);
		temp=temp->next;
	}
	return 0;
}
