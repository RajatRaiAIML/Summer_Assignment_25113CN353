#include<iostream>
using namespace std;
void rotate(int arr[],int size){
    for(int i=0;i<=size-2;i++){
        swap(arr[i],arr[i+1]);
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
    cout<<"Array before rotation"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Array after rotation"<<endl;
    rotate(arr,n);
    return 0;
}