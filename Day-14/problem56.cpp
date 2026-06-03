#include<iostream>
#include<cmath>
using namespace std;
void duplicates(int arr[],int size){
    for(int i=0;i<size;i++){
        int idx=abs(arr[i])-1;
        if(arr[idx]<0){
            cout<<arr[i]<<" ";
        }
        else
        arr[idx]=-arr[idx];
    }
}
int main(){
    int arr[100],n;
    cout<<"Enter number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter arr["<<i<<"]: ";
        cin>>arr[i];
    }
    duplicates(arr,n);
    return 0;
}