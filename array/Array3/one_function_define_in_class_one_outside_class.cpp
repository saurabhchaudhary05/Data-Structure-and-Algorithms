#include<iostream>
using namespace std;
class item{
	private:
		int number;
		float cost;
	public:
		void getdata(int a,float b);
		void display(){
			cout<<"number = "<<number<<endl;
			cout<<"cost = "<<cost<<endl;
		}
};
void item::getdata(int a,float b){
	number=a;
	cost=b;
	
}
int main(){
	item x,y;
	cout<<"object x:"<<endl;
	x.getdata(100,123.4);
	x.display();
	cout<<"object y:"<<endl;
	y.getdata(200,200.45);
	y.display();
	return 0;
	
}
