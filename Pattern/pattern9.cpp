#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=1;i<=4;i++){
		for(j=1;j<=6;j++){
			if((i+j)%2==0){
				cout<<"1";
			}
			else{
				cout<<"2";
			}
		}
		cout<<endl;
	}
}

/*
121212
212121
121212
212121
*/
