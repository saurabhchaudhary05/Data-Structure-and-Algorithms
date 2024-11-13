#include<iostream>
using namespace std;
#define max 5
int arr[max];
int front=-1;
int rear=-1;
void enqueue(){
	int value;
	if(rear==max-1){
		cout<<"queue is full"<<endl;
	}
	else{
		cout<<"enter value:"<<" ";
		cin>>value;
		if(front==-1){
			front=0;
		}
		rear++;
		arr[rear]=value;
		
	}
}
void dequeue(){
	int value;
	if(front==-1){
		cout<<"queue is empty"<<endl;
	}
	else if(front==rear){
		value=arr[front];
		front=rear=-1;
	}
	else{
		value=arr[front];
		front++;
	}
	cout<<"value deleted:"<<value<<endl;
}
void display(){
	cout<<"queue is"<<endl;
	for(int i=front;i<=rear;i++){
		cout<<arr[i]<<" ";
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
