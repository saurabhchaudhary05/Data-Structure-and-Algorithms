#include<iostream>
using namespace std;
int main(){
	int i,j,x=65,c=1;
	for(i=1;i<=5;i++){
		for(j=1;j<=5-i;j++){
			cout<<" ";
		}
		x=65;
		for(j=1;j<2*i;j++){
			cout<<(char)x;
			x=x+1;
		}
		for(j=1;j<=5-i;j++){
			cout<<" ";
		}
		
		cout<<"\n";
	}
	for(i=4;i>=1;i--){
		for(j=1;j<=c;j++){
			cout<<" ";
		}
		x=65;
		for(j=1;j<2*i;){
			cout<<(char)x;
			j++;
			x++;
		}
		for(j=1;j<=c;j++){
			cout<<" ";
		}
		c=c+1;
		cout<<endl;
	}
	
}

/*
    A
   ABC
  ABCDE
 ABCDEFG
ABCDEFGHI
 ABCDEFG
  ABCDE
   ABC
    A
*/
