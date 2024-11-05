#include<iostream>
using namespace std;
int main(){
	int i=1;
	while(true){
		if(i%5==0){
			if(i%7==0){
				cout<<i<<endl;
				break;
			}
		}
		i++;
	}
}
