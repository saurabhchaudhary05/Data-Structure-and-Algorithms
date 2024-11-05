#include<iostream>
using namespace std;
int main(){
	int num[5]={1,2,3,4,5};
	cout<<"the numbers are :"<<endl;
	for(const int &n :num){
		cout<<n<<endl;
	}
	
}

//is compiler m run nhi kr rha ye program waise shi h
