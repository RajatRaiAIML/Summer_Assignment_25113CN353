#include<iostream>
using namespace std;
int maximum(int arr[],int size){
    int maxi=INT_MIN;
    for(int i=0;i<size;i++){
        maxi=max(arr[i],maxi);
    }
    return maxi;
}
int minimum(int arr[],int size){
    int mini=INT_MAX;
    for(int i=0;i<size;i++){
        mini=min(arr[i],mini);
    }
    return mini;
}
int main(){
    int arr[100],n,sum=0;
    cout<<"Enter number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter arr["<<i<<"]: ";
        cin>>arr[i];
    }
    cout<<"Maximum="<<maximum(arr,n)<<endl;
    cout<<"Minimum="<<minimum(arr,n);
    return 0;

}