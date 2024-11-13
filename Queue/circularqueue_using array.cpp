#include<iostream>
using namespace std;
#define max 10
int arr[max];
int front=-1;
int rear=-1;
void enqueue(){
	int value;
	if((front==0 && rear==max-1)|| rear==front-1){
		cout<<"queue is full"<<endl;
	}
	else{
		if(front=-1){
			front=0;
		}
		cout<<"enter data:"<<" ";
		cin>>value;
		rear=(rear+1)%max;
		arr[rear]=value;
	}
}
void dequeue(){
	int value;
	if(front==-1){
		cout<<"underflow"<<endl;
	}
	else{
		value=arr[front];
		if(front==rear){
			front=rear=-1;
		}
		else{
			front=(front+1)%max;
		}
		cout<<"deleted item is:"<<value<<endl;
	}
	
}
void display(){
	int i=front;  
    if(front==-1 && rear==-1)  
    {  
        printf("\n Queue is empty..");  
    }  
    else  
    {  
        printf("\nElements in a Queue are :");  
        while(i<=rear)  
        {  
            printf("%d,", queue[i]);  
            i=(i+1)%max;  
        }  
    }  
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
