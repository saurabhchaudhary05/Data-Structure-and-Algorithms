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
	cout<<"enter the element after which u want to deletion"<<endl;
	cin>>element;
	int position;
	for(int i=0;i<n;i++){
		if(arr[i]==element){
			position=i+2;
			for(int i=position-1; i<n-1;i++){
				arr[i]=arr[i+1];
			}
			n--;
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
