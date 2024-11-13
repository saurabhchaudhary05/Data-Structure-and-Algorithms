//lower number higher priority
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define max 5
int val[max];
int prior[max];
int size=-1;
void enqueue(){
	int value;
	int priority;
	if(size==max-1){
		cout<<"queue is full";
	}
	else{
		cout<<"enter data"<<" ";
		cin>>value;
		cout<<"enter  priority"<<" ";
		cin>>priority;
		size++;
		val[size]=value;
		prior[size]=priority;
	}
}
void selectiosort(){
	int indexofmin,temp;
	for(int i=0;i<=size-1;i++){
		indexofmin=i;
		for(int j=i+1;j<=size;j++){
			if(prior[j]<prior[indexofmin]){
				indexofmin=j;
			}
		}
		temp=prior[i];
		prior[i]=prior[indexofmin];
		prior[indexofmin]=temp;
		swap(val[i],val[indexofmin]);
	}
}
void display(){
for(int i=0;i<=size;i++){
	cout<<val[i]<<" ";
}
}
int main(){
	enqueue();
	enqueue();
	enqueue();
	enqueue();
	enqueue();
	selectiosort();
	display();
}
