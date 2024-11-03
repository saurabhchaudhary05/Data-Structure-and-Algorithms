#include<iostream>
#include<algorithm>
using namespace std;
void freq(int *arr,int size){
	sort(arr,arr+size);
	int count=1;
	for(int i=0;i<size;i++){
		if(arr[i]==arr[i+1]){
			count++;
		}
		else{
			cout<<arr[i]<<"-"<<count<<"times";
			count=1;
		}
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	freq(arr,n);
}
