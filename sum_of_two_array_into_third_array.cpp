#include<iostream>
using namespace std;
int main(){
	int arr1[5],arr2[5],arr3[5];
	for(int i=0;i<5;i++){
		cin>>arr1[i];
	}
	for(int i=0;i<5;i++){
		cin>>arr2[i];
	}
	for(int i=0;i<5;i++){
		arr3[i]=arr1[i]+arr2[i];
	}
	for(int i=0;i<5;i++){
		cout<<arr3[i]<<" ";
	}

}
