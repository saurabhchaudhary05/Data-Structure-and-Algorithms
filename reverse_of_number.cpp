#include<iostream>
using namespace std;
int main(){
	int num,c,d=0;
	cout<<"enter the number: ";
	cin>>num;
	while(true){
		c=num%10;
		num=num/10;
		d=c+d*10;
		if(num==0){
			break;
		}
	}
	cout<<"reverse number = "<<d;
}
