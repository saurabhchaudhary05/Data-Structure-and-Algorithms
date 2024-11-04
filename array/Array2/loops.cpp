#include<iostream>
using namespace std;
int main(){
	int number,sum=0;
	cout<<"enter the number: ";
	cin>>number;
	for(int i=1;i<=number;i++){
		sum=sum+i;
	}
	cout<<"sum= "<<sum<<endl;
}
