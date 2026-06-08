#include<iostream>
using namespace std;
void sort(int arr1[],int m,int arr2[],int n){
    int arr3[100];
    int idx=m+n-1;
    int i=m-1;
    int j=n-1;
    while(i>=0 && j>=0){
        if(arr1[i]>arr2[j]){
            arr3[idx]=arr1[i];
            i--;
            idx--;
        }
        else{
            arr3[idx]=arr2[j];
            j--;
            idx--;
        }
    }
    while(i>=0){
        arr3[idx--]=arr1[i--];
    }
    while(j>=0){
        arr3[idx--]=arr2[j--];
    }
    for(int i=0;i<m+n;i++){
        cout<<arr3[i]<<" ";
    }
}
int main(){
    int arr1[3]={1,2,3};
    int m=3;
    int arr2[3]={2,5,6};
    int n=3;
    sort(arr1,m,arr2,n);
    return 0;
}