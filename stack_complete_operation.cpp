#include<iostream>
using namespace std;
#include<conio.h>
	class stack{
		private:
			int top;
//			int size_of_stack;
			int stackarray[10];
		public:
			stack(){
//				int stackarray[size_of_stack];
				top=-1;
//				cout<<"enter the size of array: ";
//				cin>>size_of_stack;
				for(int i=0;i<5;i++){
					stackarray[i]=0;
//					cout<<stackarray[i];
//					cin>>stackarray[i];
				}
			}
			bool isempty(){
				if(top==-1){
					return true;
				}
				else{
					return false;
				}
			}
			bool isfull(){
				if(top==5){
					return true;
				}
				else{
					return false;
				}
			}
			void push(int value){
				if(isfull()){
					cout<<"stack is overflow"<<endl;
				}
				else{
					top++;
					stackarray[top]=value;
			}
			}
			int pop()
			{
				if(isempty())
				{
					cout<<"stack is underflow "<<endl;
				}
				else
				{
					int popvalue=stackarray[top];
					stackarray[top]=0;
					top--;
					return popvalue;
				}
			}
			int count(){
				return (top+1);
			}
			int peek(int position){
				if(isempty()){
					cout<<"stack is underflow ";
					return 0;
				}
				else{
					int position_value=stackarray[position];
					return position_value;
				}
			}
			void change(int position,int value){
				stackarray[position]=value;
				cout<<"value is changed at "<<position<<"position"<<endl;
			}
			void display(){
				cout<<"All values in the stack are "<<endl;
				for(int i=4;i>=0;i--){
					cout<<stackarray[i]<<endl;
				}
			}
			
			
		};
	
int main(){
	stack s1;
	int choice,value,position;
	do{
		cout<<"what operation you want to perform and press 0 to exit:"<<endl;
		cout<<"1. push()"<<endl;
		cout<<"2. pop()"<<endl;
		cout<<"3. isempty()"<<endl;
		cout<<"4. isfull()"<<endl;
		cout<<"5. peek()"<<endl;
		cout<<"6. count()"<<endl;
		cout<<"7. change()"<<endl;
		cout<<"8. display()"<<endl;
		cout<<"9. clearscreen"<<endl;
		
		cout<<"enter the choice :";
		cin>>choice;
		switch(choice){
			case 1: 
			cout<<"enter the value which u want to push:"<<endl;
			cin>>value;
			s1.push(value);
			break;
			
			case 2: cout<<"pop function called ";
			cout<<"the value which is popped = "<<s1.pop()<<endl;
			break;
			
			case 3: if(s1.isempty()){
				cout<<"stack is empty "<<endl;
			}
			else{
				cout<<"stack is not empty "<<endl;
			}
			break;
			
			case 4: if(s1.isfull()){
				cout<<"stack is full "<<endl;
			}
			else{
				cout<<"stack is not full "<<endl;
			}
			break;
			
			case 5: 
					cout<<"enter the position which u want to fetch the value ";
					cin>>position;
					cout<<"the peek function called :";
					cout<<"the value at "<<position<<"position is "<<s1.peek(position)<<endl;
					break;
			case 6: 
					cout<<"count function called ";
					cout<<"no of item in stack are "<<s1.count()<<endl;
			case 7:
					cout<<"change function called "<<endl;
					cout<<"enter the position at which u want to change the value : "<<endl;
					cin>>position;
					cout<<"enter the new value which is replacing the old value :"<<endl;
					cin>>value;
					s1.change(position,value);
					break;
			case 8:
					cout<<"display function called "<<endl;
					s1.display();
					break;
			case 9:
				system("cls");
				break;
			default:
				cout<<"enter proper option"<<endl;
					
				
					
			
			
		}	
	}while(choice!=0);
	
}
	

	

