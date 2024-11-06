#include<iostream>
using namespace std;
int main(){
	int arr[3][3];
	int sum_of_row=0;
	int sum_of_column=0;
	cout<<"the matrix ";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>arr[i][j];
		}
	}
	cout<<"the matirix is:"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		
			sum_of_row=sum_of_row+arr[i][j];
			sum_of_column=sum_of_column+arr[j][i];
		}
		cout<<"sum of "<<i+1<<" row = "<<sum_of_row<<endl;
		cout<<"sum of "<<i+1<<" column = "<<sum_of_column<<endl;
		cout<<endl;
		sum_of_row=0;
		sum_of_column=0;
	}

	
}
