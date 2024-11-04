#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=1;i<=4;i++){
		for(j=1;j<=6;j++){
			if(i==1 || j==1||i==4 || j==6){
				cout<<j;
			}
			else{
				cout<<" ";
			}
		
//		cout<<j;
	}
	cout<<endl;
	}
}

/*
123456
1    6
1    6
123456
*/
