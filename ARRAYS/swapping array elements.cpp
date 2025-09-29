// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    // intializing an array with random values
    // copying array1 element to array2
    int list1[3]={1,2,3};
    int list2[3]={4,5,6};
    cout<<"Before swapping"<<endl;
    for(int i=0 ; i<3 ; i++){
        cout<<list1[i]<<" ";
      
    }
    cout<<endl;
     for(int i=0 ; i<3 ; i++){
        cout<<list2[i]<<" ";
      
    }
    
    
    // we can swap using same algo
    int temp[3]{0};
    for(int i=0 ; i<3 ; i++){
        temp[i]=list1[i];
        list1[i]=list2[i];
        list2[i]=temp[i];

    }
    cout<<endl;
    cout<<"After swapping"<<endl;
     for(int i=0 ; i<3 ; i++){
        cout<<list1[i]<<" ";
      
    }
    cout<<endl;
     for(int i=0 ; i<3 ; i++){
        cout<<list2[i]<<" ";
      
    }
    
}
