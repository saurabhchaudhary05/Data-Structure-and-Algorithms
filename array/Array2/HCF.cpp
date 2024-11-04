#include<iostream>
using namespace std;
int main(){
	int a,b,i,c,d;
	cout<<"enter the number:";
	cin>>a>>b;
	if(a>b){
		d=a;
	}
	else{
		d=b;
	}
	for(i=1;i<=d;i++){
		if(a%i==0 && b%i==0){
			c=i;
		}
	}
	cout<<"HCF= "<<c<<endl;
}
