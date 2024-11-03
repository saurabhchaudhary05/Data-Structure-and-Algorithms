#include<iostream>
using namespace std;
int main(){
	int num;
	int mul=1;
	cout<<"enter the number: ";
	cin>>num;
	for(int i=1;i<=num;i++){
		mul=mul*i;
	}
	cout<<"mul="<<mul<<endl;
}
