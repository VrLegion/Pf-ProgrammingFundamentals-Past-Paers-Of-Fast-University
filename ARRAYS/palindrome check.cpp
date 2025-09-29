#include<iostream>
using namespace std;
int rev(int n){
	int rem , reversed=0 ; 
	while(n!=0){
		rem = n%10;
		reversed = reversed*10 + rem;
		n=n/10;
	}
	return reversed;
	
}
void palindrome(int n){
	if(rev(n)== n){
		cout<<"Palindrom\n";
	}
	else{
		cout<<"not";
	}
}
int main(){
	int n;
	cout<<"enter a number\n";
	cin>>n;
	palindrome(n);
	
}
