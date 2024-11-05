#include<iostream>
using namespace std;
struct profile{
	int id;
};
struct employee{
	profile p;
};
int main(){
	employee e;
	int &r=e.p.id;
	r=50;
	cout<<e.p.id<<endl;
	
}
