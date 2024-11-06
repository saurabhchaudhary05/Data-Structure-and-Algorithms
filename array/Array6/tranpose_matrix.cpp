#include<iostream>
using namespace std;
int main(){
	int arr[3][3];
	int i,j;
	int transpose[3][3];
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
	/*for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			transpose[i][j]=arr[j][i];
		}
	}*/
	cout<<endl;
	cout<<"transpose matrix is "<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			//cout<<transpose[i][j]<<" ";
			cout<<arr[j][i]<<" ";
		}
		cout<<endl;
	}
		
}
