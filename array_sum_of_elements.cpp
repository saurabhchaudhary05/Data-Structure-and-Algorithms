#include<iostream>
using namespace std;
int main(){
	int i,sum=0;
	int arr[]={28,78,7,9};
	int length=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<length;i++){
		sum=sum+arr[i];
	}
	cout<<"sum="<<sum<<endl;
}
