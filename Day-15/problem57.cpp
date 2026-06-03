#include<iostream>
using namespace std;
void reverse(int arr[],int size){
    int i=0,j=size-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
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
    cout<<"Array before rversal"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Array after reversal"<<endl;
    reverse(arr,n);
    return 0;
}