#include<iostream>
#include<stdio.h>
using namespace std;
#define size 5
int stack[size];
int top=-1;
void push(int x){
	if(top==size-1){
		cout<<"stack overflow:"<<endl;
	}
	else{
		top=top+1;
		stack[top]=x;
	}
}
void pop(){
	int y;
	if(top==-1){
		cout<<"stack underflow"<<endl;
	}
	else{
		y=stack[top];
		cout<<y<<endl;
		top=top-1;
	}
}

int main(){
	push(50);
	push(45);
	push(30);
	for(int i=top;i>=0;i--){
		cout<<stack[i]<<" ";
	}
	
	cout<<"\nelement to be deleted:"<<" ";
	pop();
	
}
