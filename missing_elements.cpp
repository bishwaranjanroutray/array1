#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,5,6};
    int n=sizeof(arr)/4;
    bool flag=true;
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            cout<<i+1;
            flag=true;
            break;
        }
    }
    if(flag==true) cout<<" is the missing element";
    else if(flag==false) cout<<"there is no missing element";
}