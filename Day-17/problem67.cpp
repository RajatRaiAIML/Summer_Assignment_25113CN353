#include<iostream>
using namespace std;
void intersection(int arr[],int n,int brr[],int m){
    int i=0,j=0;
    while(i<n && j<m){
        if(arr[i]<brr[j]){
            i++;
        }
        else if(arr[i]==brr[j]){
            cout<<arr[i]<<" ";
            i++;
            j++;
        }
        else{
            j++;
        }
    }

}
int main(){
    int arr[5]={1,2,2,3,4};
    int n=5;
    int brr[4]={2,2,4,5};
    int m=4;
    intersection(arr,n,brr,m);
    return 0;
}