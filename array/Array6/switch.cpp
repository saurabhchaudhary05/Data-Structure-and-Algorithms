#include<iostream>
using namespace std;
int main(){
	char ch;
	int a,b;
	cout<<"enter the character: ";
	cin>>ch;
	cout<<"enter the number: ";
	cin>>a>>b;
	switch(ch){
		case '+':
			cout<<a<<"+"<<b<<"="<<a+b<<endl;
			break;
		case '-':
			cout<<a<<"-"<<b<<"="<<a-b<<endl;
			break;
		case '/':
			cout<<a<<"/"<<b<<"="<<a/b<<endl;
//			break;
		case '*':
			cout<<a<<"*"<<b<<"="<<a*b<<endl;
//			break;
		default:
			cout<<"case completed"<<endl;
			
	}
}
