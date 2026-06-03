#include<iostream>
using namespace std;
void rotate(int arr[],int size){
    int i=0,j=size-1;
    while(i<=j){
        if(arr[i]!=0){
            i++;
        }
        else if(arr[j]==0){
            j--;
        }
        else{
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
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