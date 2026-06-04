#include<iostream>
using namespace std;
void sort(int arr[],int n){
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=n-i;j++){
            if(arr[j-1]>arr[j]){
                swap(arr[j-1],arr[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[100],n;
    cout<<"Enter size: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter arr["<<i<<"]: ";
        cin>>arr[i];
    }
    cout<<"Array before sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Array after sorting"<<endl;
    sort(arr,n);
    return 0; 
}