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
	int smallest=arr[0];
	for(int i=0;i<n;i++){
		if(smallest>arr[i]){
			smallest=arr[i];
		}
	}
	int ssmallest=arr[0];
	for(int i=0;i<n;i++){
		if(ssmallest>arr[i]){
			if(arr[i]!=smallest){
				ssmallest=arr[i];
			}
		}
	}
	cout<<"second smallest element in above array  = "<<ssmallest<<endl;
}
