#include<iostream>
using namespace std;
int main(){
	int a,b,i=1;
	cout<<"enter the number:";
	cin>>a>>b;
	if(a>b){
		b=a;
	}
	while(true){
		if(i%a==0 && i%b==0){
			cout<<i<<endl;
			break;
		}
		i++;
	}
}
