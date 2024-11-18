#include<iostream>
using namespace std;
class A{
	private:
		int a;
	public:
		void geta(){
			cout<<"enter a:"<<" ";
			cin>>a;
		}
		void puta(){
			cout<<"a:"<<a<<endl;
		}
};
class B{
	private:
		int b;
	public:
		void getb(){
			cout<<"enter b:"<<" ";
			cin>>b;
		}
		void putb(){
			cout<<"b:"<<b<<endl;
		}
};
class C:private A,private B{

	public:
		void get(){
			 geta();
			 getb();
		}
		void put(){
		
		 puta();
		 putb();
	}
};
int main(){
	C obj;
	obj.get();
	obj.put();
}
