#include<iostream>
using namespace std;
void pattern(int n, int i){
	if(i>n){
		return;
	}
	for(int j=0 ; j<i ; j++){
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
