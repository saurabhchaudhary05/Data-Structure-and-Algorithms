#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main(){
	int age=22,rollno=9101;
	cout<<setfill('#');
	cout<<setw(4)<<age<<setw(6)<<rollno<<endl;
	cout<<setw(6)<<age<<setw(8)<<rollno<<endl;
	getch();
	return 0;
}
