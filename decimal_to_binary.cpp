#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int num,c,d=0;
	cout<<"enter the number: ";
	cin>>num;
	int i=0;
	while(true){
		c=num%2;
		d=d+c*pow(10,i);
		num=num/2;
		i++;
		if(num==0){
			break;
		}
	}
	cout<<"binary = "<<d;
}
