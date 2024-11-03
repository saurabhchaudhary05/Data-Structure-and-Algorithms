#include<iostream>
using namespace std;
struct emp{
	string name;
};
int main(){
	emp e[5];
	int i;
	for(int i=0;i<5;i++){
		cout<<"enter the name of employee "<<i+1<<endl;
		cin>>e[i].name;
	}
	for(int i=0;i<5;i++){
		cout<<e[i].name<<" ";
	}
}
