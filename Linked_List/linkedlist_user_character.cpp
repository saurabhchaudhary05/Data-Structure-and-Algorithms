#include<iostream>

#include<string>
using namespace std;
struct node{
char data[500];
struct node *next;
};
int main(){
	struct node *head,*newnode,*temp;
	head=0;
	int choice=1;
	while(choice){
		newnode= new node;
	//	newnode=(struct node *)malloc(sizeof(struct node));
	//	printf("enter data: ");
	//	scanf("%s",newnode->data);
	cout<<"enter data:";
	cin>>newnode->data;
		newnode->next=0;
		if(head==0){
			head=temp=newnode;
		}
		else{
			temp->next=newnode;
			temp=newnode;
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
	//	printf(" ");
	//	printf("%s",temp->data);
		temp=temp->next;
	}
	return 0;
}
