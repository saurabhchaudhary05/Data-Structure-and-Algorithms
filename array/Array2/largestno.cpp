#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"enter the numbers:"<<endl;
	cin>>a>>b>>c;
	if(a>b && a>c){
		cout<<"the largest no is = "<<a<<endl;;
	}
	else if(b>a && b>c){
		cout<<"the largest no is = "<<b<<endl;
	}
	else{
		cout<<"the largest no is = "<<c<<endl;
	}
	return 0;
}
