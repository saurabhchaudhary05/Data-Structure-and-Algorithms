#include<iostream>
using namespace std;
int main(){
	int i,j,num,sum1=0,sum2=0,d;
	cout<<"enter the number :";
	cin>>num;
	for(i=1;i<=num;){
		sum1=sum1+i;
		i=i+2;
	}
	for(j=2;j<=num;){
		sum2=sum2+j;
		j=j+2;
	}
	d=sum1-sum2;
	cout<<"result of the sum = "<<d;
	
}

/*
1-2+3-4.....n
*/
