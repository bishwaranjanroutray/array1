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

    int dup=arr[0],f=0;
    
     for(int i=1;i<n;i++){
        if(arr[i]==dup){
            dup=arr[i];
            cout<<"dup";
    
    }
     }
    if(f==1) cout<<"yes it contains duplicates";
}