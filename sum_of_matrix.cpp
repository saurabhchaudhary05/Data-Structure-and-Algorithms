#include<iostream>
using namespace std;
int main(){
	int arr[3][3];
	int sum=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"the matirix is:"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<" ";
			sum=sum+arr[i][j];
		}
		cout<<endl;
	}
	cout<<"the sum of matrix = "<<sum<<endl;
	
}
