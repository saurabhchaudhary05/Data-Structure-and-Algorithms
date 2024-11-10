#include<iostream>
using namespace std;
class Array{
	int *arr;
	int size;
	public:
		void get_data(int n){
			size=n;
			arr=new int[size];
			cout<<"enter elements:"<<endl;
			for(int i=0;i<size;i++){
				cin>>*(arr+i);
			}
		}
		void add(){
			int sum=0;
			for(int i=0;i<size;i++){
				sum=sum+*(arr+i);
			}
			cout<<"sum of elements:"<<sum<<endl;
		}
};
int main(){
	Array a;
	int n;
	cout<<"Enter the numer of elements:"<<endl;
	cin>>n;
	a.get_data(n);
	a.add();
	return 0;
}
