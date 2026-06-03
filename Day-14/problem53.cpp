#include<iostream>
using namespace std;
int linear(int arr[],int size,int m){
    int idx;
    for(int i=0;i<size;i++){
        if(arr[i]==m){
           idx=i;
           break;
        }
    }
    return idx;
}
int main(){
    int arr[100],n,key;
    cout<<"Enter number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter arr["<<i<<"]: ";
        cin>>arr[i];
    }
    cout<<"Enter key element: ";
    cin>>key;
    cout<<"Element is present at index "<<linear(arr,n,key);
    return 0;
}