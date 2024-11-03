#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int num,d=0,c;
	int i=0;
	cout<<"enter the number: ";
	cin>>num;
	while(true){
		c=num%10;
		d=d+c*pow(2,i);
		num=num/10;
		if(num==0){
			break;
		}
		i++;
	}
	cout<<"decimal number = "<<d<<endl;
}
