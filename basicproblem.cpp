#include<iostream>
using namespace std;
int main(){
	cout<<"hello\t\thello\n\thello\nhello\t\thello";
//	cout<<"\n\thello";
//	cout<<"\nhello\t\thello";
// * * * * *
// * 
	int i,j;
	for(i=0;i<7;i++){
		for(j=0;j<7;j++){
			if(i==0 || i==6 || j==0 || j==6){
				cout<<"*";
			}
			else if(i==3 && j==1){
				cout<<"hello";
			}
			else if(i==3){
				cout<<"";
			}
			else{
				cout<<" ";
			}
			
		}
		cout<<endl;
	}
}
