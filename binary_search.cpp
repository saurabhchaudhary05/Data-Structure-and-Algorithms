#include<iostream>
using namespace std;
int loc=-1;
int binarysearch(int arr[],int size,int element){
	int low,high,mid;
	low=0;
	high=size-1;
	while(low<=high){
		mid=(high+low)/2;
		if(arr[mid]==element){
			loc=mid+1;
			break;
		}
		else if(arr[mid]<element){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
}
int main(){
	int arr[8]={1,2,3,56,64,78,98,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	int element=1;
	binarysearch(arr,size,element);
	if(loc==-1){
		cout<<"element not found"<<endl;
	}
	else{
		cout<<"element found at "<<loc<<" position"<<endl;
	}
}
