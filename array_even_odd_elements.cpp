#include<iostream>
using namespace std;
int main(){
	int arr[10];
	int odd_elements=0,even_elements=0;
	for(int i=0;i<10;i++){
		cin>>arr[i];
	}
	for(int i=0;i<10;i++){
		if(arr[i]%2==0){
			odd_elements=odd_elements+1;
		}
		else{
			even_elements=even_elements+1;
		}
	}
	cout<<"total no of even elements = "<<even_elements<<endl;
	
	cout<<"total no of odd elements = "<<odd_elements;
}
