#include<iostream>
using namespace std;
int main(){
	int i,j;
	int n;
	cout<<"enter the number: ";
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==(n/2) || j==(n/2)){
				cout<<"*";
				
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
