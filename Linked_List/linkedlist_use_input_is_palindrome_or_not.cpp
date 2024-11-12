#include<stdlib.h>
#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;

struct node{
int data;
struct node *next;
};
bool isPalindrome(node* head) {
  node* slow = head;
  node* fast = head;

  while (fast != NULL && fast->next != NULL) {
    slow = slow->next;
    fast = fast->next->next;
  }

  // If the linked list has odd number of nodes, skip the middle node.
  if (fast != NULL) {
    slow = slow->next;
  }

  // Reverse the second half of the linked list.
  node* prev = NULL;
  node* curr = slow;
  while (curr != NULL) {
    node* next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }

  // Check if the first and second halves are palindromes.
  while (prev != NULL) {
    if (prev->data != head->data) {
      return false;
    }
    prev = prev->next;
    head = head->next;
  }

  return true;
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
	temp=head;
	while(temp!=0){
		printf(" ");
		printf("%d",temp->data);
		temp=temp->next;
	}
	if (isPalindrome(head)) {
    cout << "The linked list is a palindrome" << endl;
  } else {
    cout << "The linked list is not a palindrome" << endl;
  }
	return 0;
}
