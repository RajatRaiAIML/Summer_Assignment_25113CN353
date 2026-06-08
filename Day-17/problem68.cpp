#include<iostream>
using namespace std;
void common(int arr[],int n,int brr[],int m){
    bool found=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i]==brr[j]){
                cout<<arr[i]<<" ";
                found=true;
            }
        }
    }
    if(!found){
        cout<<"Element not found";
    }
}
int main(){
    int arr[50],brr[50],m,n;
    cout<<"Enter number of elements in 1st array: ";
    cin>>n;
    cout<<"Enter number of elements in 2nd array: ";
    cin>>m;
    for(int i=0;i<n;i++){
        cout<<"Enter arr["<<i<<"]: ";
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cout<<"Enter brr["<<i<<"]: ";
        cin>>brr[i];
    }
    common(arr,n,brr,m);
    return 0;
}