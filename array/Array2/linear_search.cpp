#include<iostream>
using namespace std;
int search(int num){
	int index;
	int arr[100],flag=0;
	int n;
	cout<<"enter the number of elements in array:"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int j=0;j<n;j++){
		cout<<arr[j]<<" ";
	}
	cout<<endl;
	for(int k=0;k<n;k++){
		if(num==arr[k]){
			flag=1;
			index=k+1;
		}
	}
	if(flag==0){
		return -1;
	}
	if(flag==1){
		return index;
	}
	
}
int main(){
	int num;
	cout<<"enter the element: ";
	cin>>num;
	if(search(num)==-1){
		cout<<"Element not found:";
	}
	else{
	
	cout<<"element found on "<<search(num)<<"position";
}
}
