#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter the number at which u want to print the sum of natural number :";
	cin>>num;
	int sum=0;
	for(int i=1;i<=num;i++){
		sum=sum+i;
	}
	cout<<"sum of natural number = "<<sum;
	return 0;
}
