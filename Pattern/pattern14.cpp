#include<iostream>
using namespace std;
int main(){
	int i,j,c;
	int n=5;
	c=(n/2)+1;
	for(i=1;i<=n;i++){
		if(i==c){
			for(int j=1;j<=5;j++){
				cout<<"*";
			}
			cout<<endl;
		}
		else{
			for(j=1;j<=2;j++){
				cout<<" ";
			}
		    cout<<"*";
		    cout<<endl;
			
		}
	}
}



/*
#include<iostream>
using namespace std;
int main(){
	int i,j;
	
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			if(i==(5/2+1) || j==(5/2)+1){
				cout<<"*";
				
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
*/

/*
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
*/
