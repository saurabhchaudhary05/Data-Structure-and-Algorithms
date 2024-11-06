#include<iostream>
using namespace std;
int main(){
	int arr[15];
	int n;
	cout<<"enter the elements how much u want in an array"<<endl;
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int large=arr[0];
	for(int i=0;i<n;i++){
		if(large<arr[i]){
			large=arr[i];
		}
	}
	int slarge=arr[0];
	for(int i=0;i<n;i++){
		if(slarge<arr[i]){
			if(arr[i]!=large){
				slarge=arr[i];
			}
		}
	}
	cout<<"second largest number is = "<<slarge;
}
