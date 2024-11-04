#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=1;i<=4;i++){
		for(j=1;j<=4-i;j++){
			cout<<" ";
		}
		for(j=1;j<=2*i-1;){
			cout<<"*";
			j=j+1;
		}
		for(j=1;j<=4-i;j++){
			cout<<" ";
		}
		cout<<endl;
	}
}

/*
   *
  ***
 *****
*******
*/
