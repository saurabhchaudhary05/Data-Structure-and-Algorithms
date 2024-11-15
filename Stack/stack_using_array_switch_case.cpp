#include<iostream>
using namespace std;
#define N 5
int stack[N];
int top=-1;
void push(){
	int x;
	cout<<"Enter x:"<<" ";
	cin>>x;
	if(top==N-1){
		cout<<"Stack overflow\n";
	}
	else{
		top++;
		stack[top]=x;
	}
}
void pop(){
	int item;
	if(top==-1){
		cout<<"stack underflow\n";
	}
	else{
		item=stack[top];
		top--;
		cout<<"popped item:"<<item<<endl;
	}
}
void peek(){
	if(top==-1){
		cout<<"stack is empty\n";
	}
	else{
		cout<<"topmost element:"<<stack[top];
	}
}
void display(){
	int  i;
	for(int i=top;i>=0;i--){
		cout<<stack[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int choice;
	do{
		cout<<"enter choice 1.push 2.pop 3.peek 4.display"<<endl;
		cin>>choice;
		switch(choice){
			case 1: push();
					break;
			case 2: pop();
					break;
			case 3: peek();
					break;
			case 4: display();
					break;
			default: cout<<"Invalid choice.";
		}
	}while(choice!=0);
}
