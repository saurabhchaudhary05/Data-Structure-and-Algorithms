#include<iostream>
using namespace std;
int main(){
	int y;
	cin>>y;
	int a[100];
	for(int i=0;i<y;i++){
		cin>>a[i];	
	}
	int b[100];
	
	for(int i=0;i<y;i++){
		int n=0;
		int x;
		x=a[i];
		n=a[i];
		n=n*n;
	//	cout<<n;
		n=n/10;
		n=n%100;
		b[n]=x;
		int l;
		l++;
		for(int i=0;i<l;l++){
			
		}
		cout<<"index:"<<n<<"key"<<x;
	}
	
}
