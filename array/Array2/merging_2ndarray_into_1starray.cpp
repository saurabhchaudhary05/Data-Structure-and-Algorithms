#include<iostream>
// merging 2nd array into 1st array
using namespace std;
int main(){
	int a[15],b[15];
	int m,n;
	cout<<"enter the elements for first array:"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"the first matrix is:"<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"enter the elements for second array:"<<endl;
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	cout<<"the second matrix is:"<<endl;
	for(int i=0;i<m;i++){
		cout<<b[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<m;i++){
		a[n+i]=b[i];
	}
	cout<<"the combined matrix is"<<endl;
	for(int i=0;i<(m+n);i++){
		cout<<a[i]<<" ";
	}
}
