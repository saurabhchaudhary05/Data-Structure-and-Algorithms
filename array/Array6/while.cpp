#include<iostream>
using namespace std;
int main(){
	int num,i,sum=0;
	while(i=1){
		cout<<"enter the number:";
		cin>>num;
		if(num>=0){
			sum=sum+num;
			
		}
		else{
			break;
		}
		
	}
	cout<<"sum="<<sum;
}
