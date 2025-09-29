#include<iostream>
using namespace std;
// q1
int sum(int num[] , int n){
	int sum = 0;
	for(int i=0 ; i<n ; i++){
		sum+=num[i];
	}
	return sum;
}
//q2
void  reverse(int num[] , int n){
	for(int i=n-1 ; i>=0 ; i--){
		cout<<num[i]<<" ";
	}
	
}
// q3
bool search(int num[] , int n , int key){
	for(int i=0 ; i<n ; i++){
		if(num[i] == key){
			return 1;
		}
	}
	return 0;
}
// q4 
int  presence(int num[] , int n , int key){
	int count=0;
	for(int i=0 ; i<n ; i++){
		if(num[i]==key){
			count++;
		}
	}
	return count;
}
//q5 we can also initialize max with num[0] 
int largest(int num[] , int n){
	int max=INT_MIN;
	for(int i=0 ; i<n ; i++){
		if(num[i]>max){
			max = num[i];
		}
	}
	return max;
}
// q6 we can also initialize min with INT_MAX
int smallest(int num[] , int n){
	int min=num[0];
	for(int i=0 ; i<n ; i++){
		if(num[i]<min){
			min = num[i];
		}
	}
	return min;
}
// q7 sorting , and bubble sort tommorrow
int main(){

//ARRAYS >> is a data structure  stores same type multiple elements in single variable

	int num[5]={10 , 20 , 30 , 40 , 50};
	cout<<num[0]<<endl; // ouput 10
	num[1]=1000;
	for(int i=0 ;i<5 ; i++){
		cout<<num[i]<<" "; // 10 , 1000 , 30 , 40 , 50
	}
// why we use zero based indexing 
// 	 Memory Addressing Concept
//Arrays memory mein continuous blocks ki tarah store hote hain.
//jab hum kisi array ka first element access karte hain, toh base address use hota hai

// reason 2
// Pointer Arithmetic Easy Hoti Hai
//C++ aur C jaise languages pointers ka use karti hain. 0-based indexing pointers ke saath direct calculation karne deti hai.

// for example
// int arr[3] = {10, 20, 30};  
//int *ptr = arr;  // Base Address  
//cout << *(ptr + 1);  // arr[1] ko access karega (20)
//
int size;
cout<<"Enter size of array"<<endl;
cin>>size;
int key ;
cout<<"Enter key element to found"<<endl;
cin>>key;
for(int i=0 ; i<size ; i++){
	cin>>num[i];
}

cout<<"Sum "<<sum(num , size)<<endl;
cout<<"reverse ";
reverse(num , size);
cout<<endl;

bool found = search(num , size , key);
if(found){
	cout<<"Found";
}
else{
	cout<<"Not found"<<endl;
}
cout<<endl;

cout<<"key element found "<<presence(num , size , key);
cout<<endl;
cout<<"largest element in array is "<<largest(num , size);
cout<<"\n";
cout<<"smallest element in array is "<<smallest(num , size);
}
