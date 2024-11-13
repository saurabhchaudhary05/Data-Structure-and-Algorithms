#include<iostream>
using namespace std;
#define max 10
int arr[max];
int front=-1;
int rear=-1;
void enqueuefront(){
	int value;
	if((front==0 && rear==max-1)|| rear==front-1){
		cout<<"queue is full"<<endl;
	}
	else{
		cout<<"enter data"<<" ";
		cin>>value;
		if(front==-1 && rear==-1){
			front=rear=0;
			arr[front]=value;
		}
		else if(front==0){
			front=max-1;
			arr[front]=value;
		}
		else{
			front--;
			arr[front]=value;
		}
	}
}

void enqueuerear(){
	int value;
	if((front==0 && rear==max-1)|| rear==front-1){
		cout<<"queue is full"<<endl;
	}
	else{
		cout<<"enter data"<<" ";
		cin>>value;
		if(front==-1 && rear==-1){
			front=rear=0;
			arr[rear]=value;
		}
		else if(rear==max-1){
			rear=0;
			arr[rear]=value;
		}
		else{
			rear++;
			arr[rear]=value;
		}
	}
}
void dequeuefront(){
	int value;
	if(front==-1 && rear==-1){
		cout<<"queue is empty"<<endl;
	}
	else{
		value=arr[front];
		if(front==rear){
			front=rear=-1;
		}
		else if(front==max-1){
			front=0;
		}
		else{
			front++;
		}
		cout<<"deleted item is:"<<value<<endl;
	}
	
}
void dequeuerear(){
	int value;
	if(front==-1 && rear==-1){
		cout<<"queue is empty"<<endl;
	}
	else{
		value=arr[rear];
		if(front==rear){
			front=rear=-1;
		}
		else if(rear==0){
			rear=max-1;
		}
		else{
			rear--;
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
            cout<<arr[i]<<" "; 
            i=(i+1)%max;  
        }  
    }  
}

int main(){
	int choice;
	do{
		cout<<"enter choice 1.enqueuefront() 2.enqueuerear() 3.dequeuefront() 4.dequeuerear() 5.display() 6.exit()"<<" ";
		cin>>choice;
		switch(choice){
			case 1: enqueuefront();
					break;
			case 2: enqueuerear();
					break;
			case 3: dequeuefront();
					break;
			case 4: dequeuerear();
					break;
			case 5: display();
					break;
			case 6: break;
			default: cout<<"enter invalid choice"<<endl;
		}
	}while(choice>0);
}
