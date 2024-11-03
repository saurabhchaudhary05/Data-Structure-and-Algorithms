#include<iostream>
using namespace std;
int main(){
	int num,sum=0,c;
	cout<<"enter the number: ";
	cin>>num;
	while(true){
		num=num/10;
//		cout<<c;
		sum=sum+1;
		if(num==0){
			break;
		}
	}
	cout<<"sum= "<<sum;
	
}
