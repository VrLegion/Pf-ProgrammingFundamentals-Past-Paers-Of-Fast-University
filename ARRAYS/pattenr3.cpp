#include<iostream>
using namespace std;
void space(int n){
	for(int space=n ; space>0 ; space--){
		cout<<"-";
	}
}
void pattern(int n, int i){
	if(i>n){
		return;
	}
	space(n-i);
	for(int j=0 ; j<n-i ; j++){
		cout<<"*";
	}
	cout<<endl;
	pattern(n, i+1);
}
int main(){
	int n;
	cin>>n;
	pattern(n,1);
}
