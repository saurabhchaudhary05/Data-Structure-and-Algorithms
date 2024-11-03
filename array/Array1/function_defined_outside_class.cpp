#include<iostream>
using namespace std;
class student{
	private:
		int roll;
		string name;
	public:
		void getdata();
		void display();
};
void student::getdata(){
	cout<<"enter roll no:"<<endl;
	cin>>roll;
	cout<<"enter the name:"<<endl;
	cin>>name;
}
void student::display(){
	cout<<"your roll no is = "<<roll<<endl;
	cout<<"your name is = "<<name<<endl;
}
int main(){
	student s1;
	s1.getdata();
	s1.display();
	return 0;
	
}
