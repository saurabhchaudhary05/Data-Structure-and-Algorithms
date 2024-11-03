#include<iostream>
using namespace std;
int sum(int a,int b);
int sum(int a,int b){
	int sum_no=a+b;
	return sum_no;
}
int main(){
	int x,y;
	cin>>x>>y;
	int h=sum(x,y);
	cout<<h;
}
