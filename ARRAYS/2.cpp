#include<iostream>
using namespace std;
int main(){
	// search an element in array
	int arr[5]={1,2,3,4,5};
	int key = 3 ;
	for(int i=0 ; i<5 ; i++){
		if(arr[i] == key){
			cout<<"The index is "<< i << "at which "<<arr[i]<<" is present\n";
			break;
		}
	}
	cout<<"\n";
	// now lets reverse an array , can be also done using while loop
	// logic using swap logic e.g start=0 ; end=4 while(start<end)
	for(int i=4 ; i>=0 ;  i--){
		cout<<arr[i]<<" ";
	}
	
	cout<<"\n";
	// second max  
	// first
	
}
