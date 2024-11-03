#include<iostream>
using namespace std;

class CircularQueue{
	private:
		int front;
		int rear;
		int arr[5];
		int itemcount;
	public:
		CircularQueue(){
			itemcount=0;
			front =-1;
			rear= -1;
			for(int i=0;i<5;i++){
				arr[i]=0;
			}
		}
		bool isfull(){
			if(((rear+1)%5)==front){
				return true;
			}
			else{
				return false;
			}
		}
		bool isempty(){
			if(rear==-1 && front ==-1){
				return true;
			}
			else{
				return false;
			}
		}
		void enqueue(int value){
			if(isfull()){
				cout<<"queue is full"<<endl;
				return ;
			}
			else if(isempty()){
				front=0;
				rear=0;
				arr[rear]=value;
			}
			else{
				rear=(rear+1)%5;
				arr[rear]=value;
			}
			itemcount++;
		}
		int dequeue(){
			int x;
			if(isempty()){
				cout<<"stack is empty "<<endl;
				return 0;
			}
			else if(front==0 && rear==0){
				x=arr[front];
				front=-1;
				rear=-1;
				return x;
			}
			else{
				x=arr[front];
				arr[front]=0;
				front=(front+1)%5;
				return x;
			}
			itemcount--;
		}
		int count(){
			return itemcount;
		}
		void display(){
			if(isempty()){
				cout<<"stack is empty"<<endl;
			}
			else{
			
			cout<<"all values are in the queue:"<<endl;
			for(int i=0;i<5;i++){
				cout<<arr[i]<<" ";
			}
		}
		}
		
		
		
		
};
int main(){
	CircularQueue q1;
	int choice;
	int value;
	do{
		cout<<"enter the operation which you want to perform and press 0 to exit"<<endl;
		cout<<"1. Enqueue()"<<endl;
		cout<<"2. dequeue()"<<endl;
		cout<<"3. isempty()"<<endl;
		cout<<"4. isfull()"<<endl;
		cout<<"5. count()"<<endl;
		cout<<"6. display()"<<endl;
		cout<<"7. clear screen"<<endl;
	
	cin>>choice;
	switch(choice){
		case 0:
			break;
		case 1:
			cout<<"enqueue function called \n enter an item to enqueue in the queue"<<endl;
			cin>>value;
			q1.enqueue(value);
			break;
		case 2:
			cout<<"dequeue function called \n "<<endl;
			cout<<"the value which is dequeued is "<<q1.dequeue()<<endl;
			break;
		case 3:
			if(q1.isempty()){
				cout<<"stack is empty "<<endl;
			}
			else{
				cout<<"stack is not empty "<<endl;
				
			}
			break;
		case 4:
			if(q1.isfull()){
				cout<<"stack is full "<<endl;
			}
			else{
				cout<<"stack is not full"<<endl;
			}
			break;
		case 5:
			cout<<"count function called "<<endl;
			cout<<"total no of elements in  queue is "<<q1.count()<<endl;
			break;
		case 6: 
			cout<<"display function called"<<endl;
			q1.display();
			break;
		case 7:
			system("cls");
			break;
		default:
			cout<<"enter proper choice"<<endl;
			break;
			
			
			
			
			
	}
	}while(choice!=0);
	return 0;
	
	
}
