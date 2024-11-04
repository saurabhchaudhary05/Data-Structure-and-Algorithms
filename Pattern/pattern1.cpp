#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=1;i<=4;i++){
		if(i==1){
			for(j=0;j<6;j++){
			cout<<"*";
		}
	}
		else if(i==4){
			for(j=0;j<6;j++){
			cout<<"*";
		}
		}
		else{
			for(j=0;j<6;j++){
				if(j==0){
					cout<<"*";
				}
				else if(j==5){
					cout<<"*";
				}
				else{
					cout<<" ";
				}
			}
		}
//		cout<<endl;
		
		
		cout<<endl;
	}
}

//******
//*    *
//*    *
//******

