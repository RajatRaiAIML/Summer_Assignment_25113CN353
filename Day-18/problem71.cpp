#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int m){
    int st=0,end=n-1;
    int mid,ans=-1;
    while(st<=end){
        mid=st+(end-st)/2;
        if(arr[mid]==m){
          ans=mid;
          break;
        }
        else if(m>arr[mid]){
          st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
}
int main(){
    int arr[100],n;
    cout<<"Enter size: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter arr["<<i<<"]: ";
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key element: ";
    cin>>key;
    cout<<binarysearch(arr,n,key);
    return 0;
}