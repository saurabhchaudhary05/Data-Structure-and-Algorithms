#include<iostream>
using namespace std;
int main(){
	int arr[15];
	int n,i,value;
	cout<<"enter the number of elements how much u want in an array"<<endl;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	if(n==0 || n<0){
		cout<<"we can't delete "<<endl;
		
	}
	else{
			value=arr[n-1];
			cout<<"the array after deletion is :"<<endl;
			n=n-1;
			
			for(int i=0; i<n;i++){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		
	}
	cout<<"the value which is deleted = "<<value<<endl;
	
}
