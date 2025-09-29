#include<iostream>
using namespace std;
int main(){
	// second max
	int arr[7]={1,2,3,4,5,6,7};
	int max1=INT_MIN ,max2=INT_MIN;
	int min1=INT_MAX ,min2=INT_MAX;
	// first lets find largest
	for(int i=0 ; i<7 ; i++){
		if(arr[i]>max1){
			max1=arr[i];
		}
	}
	cout<<"Maximum element is "<<max1<<endl; 
	// lets find second max 
	for(int i=0 ; i<7 ; i++){
		if(arr[i]>max2 && arr[i]<max1){
			max2=arr[i];
		}
	}
	cout<<"second largest element is "<<max2<<endl;
	// first find smaalest one
	for(int i=0 ; i<7 ; i++){
		if(arr[i]<min1){
			min1=arr[i];
		}
	}
	cout<<"Smallest element is "<<min1<<endl;
	// now lets find 2nd most smallest
	for(int i=0 ; i<7 ; i++){
		if(arr[i]<min2 && arr[i]>min1 ){
			min2=arr[i];
		}
	}
	cout<<"2nd smallest element is "<<min2<<endl;
}
