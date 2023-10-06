#include<iostream>
using namespace std;

int main(){
    cout<<"enter the size of the array:";
    int n;
    cin>>n;    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int min=arr[0];
    
     for(int i=0;i<n;i++){
        if(arr[i]<min) min=arr[i];
    
    }
    cout<<"minimum number in the array is:"<<min;
   


}