#include<iostream>
using namespace std;
int main(){
	int sum=0;
	int arr1[3][3],arr2[3][3];
	int i,j;
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			cin>>arr1[i][j];
		}
	}
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			cin>>arr2[i][j];
		}
	}
	cout<<"the first matrix is: "<<endl;
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			cout<<arr1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"the second matrix is: "<<endl;
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			cout<<arr2[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"matrix which we get after multiplication: "<<endl;	
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			for(int k=1;k<=3;k++){
				sum=sum+arr1[i][k]*arr2[k][j];;
			}
			cout<<sum<<" ";
			sum=0;
		}
		cout<<endl;
	}
}

