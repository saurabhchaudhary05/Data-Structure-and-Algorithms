#include<iostream>
using namespace std;
int main(){
	int arr1[3][3],arr2[3][3];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>arr1[i][j];
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>arr2[i][j];
		}
	}
	cout<<"the first matrix is: "<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<arr1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"the second matrix is: "<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<arr2[i][j]<<" ";
		}
		cout<<endl;
	}	
	cout<<"the sum of matrices is:"<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<arr1[i][j]+arr2[i][j]<<" ";
		}
		cout<<endl;
	}
}

