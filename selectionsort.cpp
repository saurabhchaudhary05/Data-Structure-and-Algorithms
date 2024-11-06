#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
	int i,j,min_index;
	for(i=0;i<n-1;i++){
		min_index=i;
		for(j=i+1;j<n;j++){
			if(arr[min_index]>arr[j]){
				min_index=j;
			}
		}
		if(min_index!=i){
			swap(arr[min_index],arr[i]);
			//         int t=arr[min_index];
			//         arr[min_index]=arr[i];
			//         arr[i]=t;
		}
		
	}
}
void printarray(int arr[],int size){
	int i;
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[5]={12,13,11,9,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	selectionsort(arr,n);
	cout<<"sorted array:"<<endl;
	printarray(arr,n);
	return 0;
}
