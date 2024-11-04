#include<iostream>
using namespace std;
int main(){
	int i,j;
	for(i=1;i<=7;i++){
		for(j=1;j<=7;j++){
			cout<<i<<" ";
			i=i+1;
			if(i>7){
				i=1;
			}
	
		}
		cout<<endl;
	}
}

/*
1 2 3 4 5 6 7
2 3 4 5 6 7 1
3 4 5 6 7 1 2 
4 5 6 7 1 2 3
5 6 7 1 2 3 4 
6 7 1 2 3 4 5
7 1 2 3 4 5 6
*/

