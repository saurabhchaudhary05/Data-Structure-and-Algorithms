#include<iostream>
#include<algorithm>

using namespace std;
void sorted(int arr[],int size){
	sort(arr,arr+size);
}
//void removeduplicate
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
	cout<<"sorted array:"<<endl;
	sorted(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	

}
