#include<stdlib.h>
#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;

struct node{
int data;
struct node *next;
};
void alternateDel(node* stnode) // function to delete alternate nodes
{
    if (stnode == NULL)
        return;

    node* prev = stnode;
    node* alt_node = stnode->next;

    while (prev != NULL && alt_node != NULL) {
        prev->next = alt_node->next;

        delete alt_node;

        prev = prev->next;
        if (prev != NULL)
            alt_node = prev->next;
    }
}
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
	alternateDel(head);
	temp=head;
	while(temp!=0){
		printf(" ");
		printf("%d",temp->data);
		temp=temp->next;
	}

	return 0;
}
