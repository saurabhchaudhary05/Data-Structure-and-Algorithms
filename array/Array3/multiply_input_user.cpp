#include<iostream>
using namespace std;
# define N 15
int main(){
	int a[N][N],b[N][N];
	int sum=0;
	int i,j,k;
	int n,p,q,r;
	cout<<"enter the no of rows for first matrix:"<<endl;
	cin>>n;
	cout<<"enter the number of column for first matrix:"<<endl;
	cin>>p;
	for(i=0;i<n;i++){
		for(j=0;j<p;j++){
			cin>>a[i][j];
		}
	}
	cout<<"enter the no of rows for second matrix:"<<endl;
	cin>>q;
	cout<<"enter the number of column for second matrix:"<<endl;
	cin>>r;
	for(i=0;i<q;i++){
		for(j=0;j<r;j++){
			cin>>b[i][j];
		}
	}
	cout<<"first matrix is:"<<endl;
	for(i=0;i<n;i++){
		for(j=0;j<p;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"second matrix is:"<<endl;
	for(i=0;i<q;i++){
		for(j=0;j<r;j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	if(p==q){
	
	cout<<"matrix which we get after multiplication: "<<endl;
	for(i=0;i<n;i++){
		for(j=0;j<r;j++){
			for(k=0;k<p;k++){
				sum=sum+a[i][k]*b[k][j];
			}
			cout<<sum<<" ";
			sum=0;
		}
		cout<<endl;
	}
}
	
}
