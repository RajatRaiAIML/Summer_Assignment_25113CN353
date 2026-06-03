#include<iostream>
using namespace std;
void pairsum(int arr[],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(m==arr[i]+arr[j]){
                cout<<min(arr[i],arr[j])<<","<<max(arr[i],arr[j])<<endl;
            }
        }
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int sum=5;
    int size=5;
    pairsum(arr,size,sum);
    return 0;
}