//higher number higher priority
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define max 5
int a[500]; //stores values
int b[500]; //stores priority
int size=-1;

void selectiosort(int i){
	int indexofmin,temp;
	int k,j;
	for(k=0;i<=i-1;k++){
		indexofmin=k;
		for(int j=k+1;j<=i;j++){
			if(b[j]<b[indexofmin]){
				indexofmin=j;
			}
		}
		swap(b[k],b[indexofmin]);
		swap(a[k],a[indexofmin]);
	}
}
void display(int i){
for(int f=i-1;f>=0;f--){
	cout<<a[f]<<" ";
}
}
int main(){
	int i=0;
	int ch; 
	do{
		
		cin>>a[i]>>b[i];
		i++;
		cin>>ch;
	}while(ch!='n');
	selectiosort(i);
	display(i);
}



/* 
jb hm 'n' enter krenge tb rukenge otherwise koi bhi character dalenge to loop chalta rhega ...
Input:
101 8
y
102 4
Y
103 7
n

output:
pateint id with 101
patient id with 103
pateinet id with 102



