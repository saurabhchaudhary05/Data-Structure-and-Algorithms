#include<iostream>
using namespace std;
union student{
	int roll;
	float cost;
	double fee;
};
int main(){
	student s1;
	cout<<"enter roll:"<<endl;
	cin>>s1.roll;
	cout<<"the roll no is:"<<s1.roll<<endl;
	cout<<"enter cost:"<<endl;
	cin>>s1.cost;
	cout<<"the cost is:"<<s1.cost<<endl;
	cout<<"enter fee:"<<endl;
	cin>>s1.fee;
	cout<<"the fee is:"<<s1.fee<<endl;
	
}
