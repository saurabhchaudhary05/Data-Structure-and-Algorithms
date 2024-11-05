#include<iostream>
using namespace std;
int main(){
	int arr[15];
	int loc=-1;
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
	int element;
	cout<<"enter the element after which u want to insert"<<endl;
	cin>>element;
	int value;
	cout<<"enter the value which u want to insert"<<endl;
	cin>>value;
	int position;
	for(int i=0;i<n;i++){
		if(arr[i]==element){
			position=i+2;
			for(int j=n-1; j>=position-1;j--){
	arr[j+1]=arr[j];}
	arr[position-1]=value;
	n++;
	loc=1;
		}
	
	}
	if(loc==1){
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
	}
	else{
		cout<<"element not found"<<endl;
	}
	
	

	
}
