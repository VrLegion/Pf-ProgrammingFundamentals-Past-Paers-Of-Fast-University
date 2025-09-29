#include<iostream>
using namespace std;
int main(){
	int n=5;
	int arr[4]={1,3,4,6};
	//
	int sum=0;
	for(int i=0 ; i<n-1 ; i++){
		sum+=arr[i];
	}
	int ans;
	// sum of n number = n*(n+1)/2
	ans=n*(n+1)/2-sum;
	cout<<"Missing element is "<<ans<<"\n";
	
/*	Problem Understanding:
Tumhare paas ek sorted array hai, jisme ek number missing hai jo 1 se n tak hona chahiye.

Given:
n = 5

Array: {1, 3, 4, 6}

Expected numbers: {1, 2, 3, 4, 5}

Missing number ka matlab: Wo number jo is range se missing hai.

Step-by-Step Explanation
1 se n tak ka sum calculate karo:

S = n * (n+1) / 2

S = 5 * 6 / 2 = 15

Array ke elements ka sum lo:

Sum = 1 + 3 + 4 + 6 = 14

Missing number nikalo:

Missing = S - Sum

Missing = 15 - 14 = 1

?? Matlab 1 missing hai kyunki wo array mein nahi hai!*/
}
