#include<iostream>
using namespace std;
int main(){
	int i,j,c;
	int arr[]={1,2,6,3,9,7};
	c=arr[0];
	int length=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<length;i++){
		if(arr[i]>c){
			c=arr[i];
		}
	}
	cout<<"greatest element is "<<c<<endl;
}
