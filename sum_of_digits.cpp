#include<iostream>
using namespace std;
int main(){
	int num,sum,c;
	cout<<"enter the number:";
	cin>>num;
	sum=0;
	while(true){
		c=num%10;
		sum=sum+c;
		num=num/10;
		if(num==0){
			break;
		}
	}
	cout<<"sum="<<sum<<endl;
}
