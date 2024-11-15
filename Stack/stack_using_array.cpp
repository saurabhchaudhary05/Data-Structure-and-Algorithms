#include<iostream>
using namespace std;
int top=-1;
void push(int a[],int max){
	int value;
	if(top==max-1){
		cout<<"stack is overflow so u can't insert"<<endl;
	}
	else{
		cout<<"enter the value which u want to insert into stack"<<" ";
		cin>>value;
		
		top++;
		a[top]=value;
	}
}
void pop(int a[]){
	if(top==-1){
		cout<<"stack is underflow so u can't pop"<<endl;
	}
	else{
		int value=a[top];
		top--;
		cout<<"deleted value: "<<value<<endl;
	}
}
int main(){
	int size;
	cout<<"enter the size of stack:"<<endl;
	cin>>size;
	int a[size];
	int i=1;
	cout<<"Want to insert(0,1)?"<<" ";
	int choice1;
	cin>>choice1;
	if(choice1==1){
	while(i!=0){
	push(a,size);
	cout<<"enter the choice u want to continue(0,1)?:"<<" ";
	cin>>i;
	}
	}
	cout<<"want to pop?(0,1)"<<" ";
	int choice2;
	cin>>choice2;
	if(choice2==1){
		int j=1;
		while(j!=0){
			pop(a);
			cout<<"enter the choice u want to continue(0,1)?:"<<" ";
			cin>>j;
		}
	}

	cout<<"stack:(first element is the top element)"<<endl;
	for(int i=top;i>=0;i--){
		cout<<a[i]<<" ";
	}
}
