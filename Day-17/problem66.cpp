#include<iostream>
using namespace std;
void arrayunion(int arr[],int n,int brr[],int m,int crr[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(arr[i]<brr[j]){
            if(k==0 || crr[k-1]!=arr[i])
            crr[k++]=arr[i];
            i++;
        }
        else if(arr[i]==brr[j]){
            if(k==0 || crr[k-1]!=arr[i])
            crr[k++]=arr[i];
            i++;
            j++;
        }
        else{
            if(k==0 || crr[k-1]!=brr[j])
            crr[k++]=brr[j];
            j++;
        }
    }
    while(i<n){
        if(k==0 || crr[k-1]!=arr[i])
        crr[k++]=arr[i];
        i++;
    }
    while(j<m){
        if(k==0 || crr[k-1]!=brr[j])
        crr[k++]=brr[j];
        j++;
    }

    for(int i=0;i<k;i++){
        cout<<crr[i]<<" ";
    }
}
int main(){
    int arr[4]={1,2,2,3};
    int n=4;
    int brr[4]={2,3,4,4};
    int m=4;
    int crr[100];
    arrayunion(arr,n,brr,m,crr);
    return 0;
}