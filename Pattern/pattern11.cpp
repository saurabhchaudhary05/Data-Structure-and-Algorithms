#include<iostream>
using namespace std;
int main(){
	int i,j,c;
	for(i=1;i<=4;i++){
		for(j=1;j<=4-i;j++){
			cout<<" ";
		
		}
		for(j=1;j<=i;j++){
			cout<<j;
			c=j;
		}
		if(i>1){
		
		for(j=c-1;j>0;j--){
			cout<<j;
		}
	}
		for(j=1;j<=4-i;j++){
			cout<<" ";
	}
		
		cout<<endl;
	}
	
}



/*
   1
  121
 12321
1234321
*/
