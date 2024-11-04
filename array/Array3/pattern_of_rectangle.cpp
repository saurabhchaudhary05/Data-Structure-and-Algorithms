#include<iostream>
using namespace std;
int main(){
	int starrows,starcolumns,i,j;
	cout<<"enter the rows and columns";
	cin>>starrows>>starcolumns;
	for(i=1;i<=starrows;i++){
		for(j=1;j<=starcolumns;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
