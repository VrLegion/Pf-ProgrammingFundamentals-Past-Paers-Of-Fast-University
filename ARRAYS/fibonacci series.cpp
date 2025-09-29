#include<iostream>
using namespace std;
int main(){
	
	 int n;
	 cout<<"Enter a number\n";
	 cin>>n;
	 int arr[1000];
	 arr[0]=0;
	 arr[1]=1;
	 // fionacci series = fib(n-1) + fib(n-2) 
	 // arrays hai to hum index i ko use kre ge aur n ko print krege 
	 cout<<arr[0]<<arr[1];
	 for(int i=2 ; i<=n-1  ; i++){
	 	arr[i]=arr[i-1]+arr[i-2];
	 
	 cout<<arr[i];

}
    cout<<"\n";
	 cout<<arr[n-1]<<" ";
	
}
