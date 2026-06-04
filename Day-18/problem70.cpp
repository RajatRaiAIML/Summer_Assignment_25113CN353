#include<iostream>
using namespace std;
void sort(int arr[],int n){
    for(int i=1;i<=n-1;i++){
        int minIdx=i-1;
        for(int j=i;j<n;j++){
           if(arr[j]<arr[minIdx]){
               minIdx=j;
           }
        }
        swap(arr[i-1],arr[minIdx]);
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