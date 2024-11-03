#include<iostream>
#include<algorithm>
using namespace std;
void removeduplicates(int arr[],int size){
	sort(arr,arr+size);
	int j=0;
	int temp[500];
	if(size==0 || size==1){
		j=1;
	}
	
	for(int i=0;i<size-1;i++){
		if(arr[i]!=arr[i+1]){
			temp[j++]=arr[i];
		}
	}
	temp[j++]=arr[size-1];
	for(int i=0;i<j;i++){
		arr[i]=temp[i];
	}
	for(int i=0;i<j;i++){
		cout<<arr[i]<<" ";
	}
}
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
	removeduplicates(arr,n);
	cout<<endl;

}
