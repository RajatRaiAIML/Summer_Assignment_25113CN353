#include<iostream>
using namespace std;
int secondlargest(int arr[],int size){
    int maxi=INT_MIN;
    int i=-1;
    for(int j=0;j<size;j++){
        maxi=max(arr[j],maxi);
    }
    int second=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]!=maxi && arr[i]>second){
            second=arr[i];
        }
    }
    return second;
}
int main(){
    int arr[100],n;
    cout<<"Enter number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter arr["<<i<<"]: ";
        cin>>arr[i];
    }
    
    cout<<secondlargest(arr,n);
    return 0;
}