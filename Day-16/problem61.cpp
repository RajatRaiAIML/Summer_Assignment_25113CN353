#include<iostream>
using namespace std;
int findelements(int arr[],int n){
    int result=0;
    for(int i=1;i<=n+1;i++){
        result^=i;
    }
    for(int i=0;i<n;i++){
        result^=arr[i];
    }
    return result;
}
int main(){
    int arr[4]={1,2,4,5};
    int size=4;
    cout<<findelements(arr,size);
    return 0;
}
