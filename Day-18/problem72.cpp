#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
    for(int i=1;i<=n-1;i++){
        int maxIdx=i-1;
        for(int j=i;j<n;j++){
            if(arr[j]>arr[maxIdx]){
                maxIdx=j;
            }
        }
        swap(arr[i-1],arr[maxIdx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[7]={10,1,7,4,8,2,11};
    int n=7;
    cout<<"Array before sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Array after sorting by selection sort"<<endl;
    selectionsort(arr,n);
    cout<<endl;
    return 0;
}