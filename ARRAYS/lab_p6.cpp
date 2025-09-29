#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a number to reverse it"<<endl;
	cin>>n;
	int reverse =0 ;
	while(n>0){
	 reverse =(n%10);
		n=n/10;
		cout<<reverse;
	} 
	

}
