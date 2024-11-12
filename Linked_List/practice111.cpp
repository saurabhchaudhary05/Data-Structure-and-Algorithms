#include<iostream>
using namespace std;
int main(){
	int *a;
	*a=10;
	int num=10;
	int *p=&num;
	*a=&num;
	return 0;
}
