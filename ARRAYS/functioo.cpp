#include<iostream>
using namespace std;
void display(char ch){
	cout<<"I have been called 3 times\n";
}
int main(){
	char ch;
	cout<<"Enter y to display function/n and enter n to end\n ";
	cin>>ch;
	if(ch=='y'){
		display(ch);
	}
	else if(ch=='n'){
		return 0;
	}
	else{
		cout<<"Enter valid character\n";
		
	}
}
