#include<iostream>
using namespace std;
int main(){
	int arr[15];
	int n,i;
	cout<<"enter the number of elements how much u want in an array"<<endl;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	int value;
	cout<<"enter the value which u want to insert"<<endl;
	cin>>value;
	if(n==15 || n>15){
		cout<<"we can't insert "<<endl;
		
	}
	else{
		for(int i=n-1; i>=0;i--){
		arr[i+1]=arr[i];}
		arr[0]=value;
		n++;
	}
		for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
}
