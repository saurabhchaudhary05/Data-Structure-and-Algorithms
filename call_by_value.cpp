#include<iostream>
using namespace std;
void swap(int,int);
int main(){
	int a,b;
	cout<<"enter the value of a and b"<<endl;
	cin>>a;
	cin>>b;
	swap(a,b);
}
void swap(int a,int b){
	int t;
	t=a;
	a=b;
	b=t;
	cout<<"value of a:"<<a<<endl;
	cout<<"value of b:"<<b;
}
